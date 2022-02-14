
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_dir_entry {int name_len; int inode; int rec_len; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {char* b_data; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;
struct TYPE_3__ {int s_blocksize; } ;


 int VAR_0 ;
 int const FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned long long,char const*,unsigned long,unsigned long long,int const,int) ;

__attribute__((used)) static int FUNC_5(struct inode * VAR_1,
     struct ocfs2_dir_entry * VAR_2,
     struct buffer_head * VAR_3,
     unsigned long VAR_4)
{
 const char *VAR_5 = ((void*)0);
 const int VAR_6 = FUNC_2(VAR_2->rec_len);

 if (VAR_6 < FUNC_0(1))
  VAR_5 = "rec_len is smaller than minimal";
 else if (VAR_6 % 4 != 0)
  VAR_5 = "rec_len % 4 != 0";
 else if (VAR_6 < FUNC_0(VAR_2->name_len))
  VAR_5 = "rec_len is too small for name_len";
 else if (((char *) VAR_2 - VAR_3->b_data) + VAR_6 > VAR_1->i_sb->s_blocksize)
  VAR_5 = "directory entry across blocks";

 if (VAR_5 != ((void*)0))
  FUNC_4(VAR_0, "bad entry in directory #%llu: %s - "
       "offset=%lu, inode=%llu, rec_len=%d, name_len=%d\n",
       (unsigned long long)FUNC_1(VAR_1)->ip_blkno, VAR_5,
       VAR_4, (unsigned long long)FUNC_3(VAR_2->inode), VAR_6,
       VAR_2->name_len);
 return VAR_5 == ((void*)0) ? 1 : 0;
}
