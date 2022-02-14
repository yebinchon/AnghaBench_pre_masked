
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i_symlink; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,struct buffer_head**) ;

__attribute__((used)) static char *FUNC_5(struct inode *VAR_0,
     struct buffer_head **VAR_1)
{
 int VAR_2;
 char *VAR_3 = ((void*)0);
 struct ocfs2_dinode *VAR_4;

 FUNC_1();

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2 < 0) {
  FUNC_2(VAR_2);
  VAR_3 = FUNC_0(VAR_2);
  goto bail;
 }

 VAR_4 = (struct ocfs2_dinode *) (*VAR_1)->b_data;
 VAR_3 = (char *) VAR_4->id2.i_symlink;
bail:
 FUNC_3(VAR_2);

 return VAR_3;
}
