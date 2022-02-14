
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
typedef int gid_t ;


 int FUNC_0 (struct ucred*,int) ;
 int FUNC_1 (struct ucred*,int,int *) ;
 int VAR_0 ;

void
FUNC_2(struct ucred *VAR_1, int VAR_2, gid_t *VAR_3)
{

 if (VAR_2 > VAR_0 + 1)
  VAR_2 = VAR_0 + 1;

 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_2, VAR_3);
}
