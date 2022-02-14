
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int i_mtime; int i_ctime; int i_blocks; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,struct inode*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_6(handle_t *VAR_1,
    struct inode *VAR_2,
    struct buffer_head *VAR_3,
    u64 VAR_4)
{
 int VAR_5;

 FUNC_1();
 FUNC_0(VAR_2, VAR_4);
 VAR_2->i_blocks = FUNC_4(VAR_2);
 VAR_2->i_ctime = VAR_2->i_mtime = VAR_0;

 VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0) {
  FUNC_2(VAR_5);
  goto bail;
 }

bail:
 FUNC_3(VAR_5);
 return VAR_5;
}
