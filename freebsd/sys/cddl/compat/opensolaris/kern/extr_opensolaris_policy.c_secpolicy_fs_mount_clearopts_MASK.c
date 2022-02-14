
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int vfs_flag; } ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mount*,int ) ;
 int FUNC_4 (struct mount*,int ,int *,int ) ;

void
FUNC_5(cred_t *VAR_5, struct mount *VAR_6)
{

 if (FUNC_2(VAR_5, VAR_3) != 0) {
  FUNC_0(VAR_6);
  VAR_6->vfs_flag |= VAR_4 | VAR_2;
  FUNC_3(VAR_6, VAR_1);
  FUNC_4(VAR_6, VAR_0, ((void*)0), 0);
  FUNC_1(VAR_6);
 }
}
