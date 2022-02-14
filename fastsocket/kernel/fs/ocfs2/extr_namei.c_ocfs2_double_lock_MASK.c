
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_inode_info {scalar_t__ ip_blkno; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,unsigned long long,unsigned long long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,struct buffer_head**,int,int ) ;
 int FUNC_6 (struct inode*,int) ;

__attribute__((used)) static int FUNC_7(struct ocfs2_super *VAR_3,
        struct buffer_head **VAR_4,
        struct inode *VAR_5,
        struct buffer_head **VAR_6,
        struct inode *VAR_7)
{
 int VAR_8;
 struct ocfs2_inode_info *VAR_9 = FUNC_0(VAR_5);
 struct ocfs2_inode_info *VAR_10 = FUNC_0(VAR_7);
 struct buffer_head **VAR_11;
 struct inode *VAR_12;

 FUNC_2("(inode1 = %llu, inode2 = %llu)\n",
     (unsigned long long)VAR_9->ip_blkno,
     (unsigned long long)VAR_10->ip_blkno);

 if (*VAR_4)
  *VAR_4 = ((void*)0);
 if (*VAR_6)
  *VAR_6 = ((void*)0);


 if (VAR_9->ip_blkno != VAR_10->ip_blkno) {
  if (VAR_9->ip_blkno < VAR_10->ip_blkno) {

   FUNC_1(0, "switching them around...\n");
   VAR_11 = VAR_6;
   VAR_6 = VAR_4;
   VAR_4 = VAR_11;

   VAR_12 = VAR_7;
   VAR_7 = VAR_5;
   VAR_5 = VAR_12;
  }

  VAR_8 = FUNC_5(VAR_7, VAR_6, 1,
       VAR_1);
  if (VAR_8 < 0) {
   if (VAR_8 != -VAR_0)
    FUNC_3(VAR_8);
   goto bail;
  }
 }


 VAR_8 = FUNC_5(VAR_5, VAR_4, 1, VAR_2);
 if (VAR_8 < 0) {




  if (VAR_9->ip_blkno != VAR_10->ip_blkno)
   FUNC_6(VAR_7, 1);

  if (VAR_8 != -VAR_0)
   FUNC_3(VAR_8);
 }

bail:
 FUNC_4(VAR_8);
 return VAR_8;
}
