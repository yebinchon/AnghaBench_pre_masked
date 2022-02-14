
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_security_handle {scalar_t__ length; int * value; int * name; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int i_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 int FUNC_4 (struct inode*,struct inode*,int **,int **,scalar_t__*) ;

int FUNC_5(struct inode *VAR_2, struct inode *VAR_3,
      struct reiserfs_security_handle *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 VAR_4->name = ((void*)0);


 if (FUNC_0(VAR_2))
  return 0;

 VAR_6 = FUNC_4(VAR_3, VAR_2, &VAR_4->name,
          &VAR_4->value, &VAR_4->length);
 if (VAR_6) {
  if (VAR_6 == -VAR_0)
   VAR_6 = 0;

  VAR_4->name = ((void*)0);
  VAR_4->value = ((void*)0);
  VAR_4->length = 0;
  return VAR_6;
 }

 if (VAR_4->length) {
  VAR_5 = FUNC_2(VAR_3) +
    FUNC_3(VAR_3, VAR_4->length);


  FUNC_1(VAR_3)->i_flags |= VAR_1;
 }
 return VAR_5;
}
