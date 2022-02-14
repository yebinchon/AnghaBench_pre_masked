
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_blocks; int f_files; scalar_t__ f_ffree; scalar_t__ f_bavail; scalar_t__ f_bfree; void* f_iosize; void* f_bsize; } ;
struct mount {int mnt_flag; struct statfs mnt_stat; int * mnt_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*,char*) ;

__attribute__((used)) static int
FUNC_4(struct mount *VAR_5)
{
 struct statfs *VAR_6;

 if (VAR_5->mnt_flag & VAR_2)
  return (VAR_0);

 VAR_5->mnt_data = &VAR_4;
 FUNC_0(VAR_5);
 VAR_5->mnt_flag |= VAR_1;
 FUNC_1(VAR_5);
 FUNC_2(VAR_5);

 VAR_6 = &VAR_5->mnt_stat;
 FUNC_3(VAR_5, "mqueue");
 VAR_6->f_bsize = VAR_3;
 VAR_6->f_iosize = VAR_3;
 VAR_6->f_blocks = 1;
 VAR_6->f_bfree = 0;
 VAR_6->f_bavail = 0;
 VAR_6->f_files = 1;
 VAR_6->f_ffree = 0;
 return (0);
}
