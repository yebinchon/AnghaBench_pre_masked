
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int uid_t ;
typedef int cred_t ;
typedef int accmode_t ;


 int FUNC_0 (int *,int *,int ,int) ;

int
FUNC_1(cred_t *VAR_0, vnode_t *VAR_1, uid_t VAR_2,
    accmode_t VAR_3, accmode_t VAR_4)
{
 accmode_t VAR_5;

 VAR_5 = ~VAR_3 & VAR_4;

 if (VAR_5 == 0)
  return (0);

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5));
}
