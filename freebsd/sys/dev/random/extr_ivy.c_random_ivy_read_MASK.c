
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_0, u_int VAR_1)
{
 u_long *VAR_2, VAR_3;
 u_int VAR_4;

 FUNC_0(VAR_1 % sizeof(*VAR_2) == 0, ("partial read %d", VAR_1));
 VAR_2 = VAR_0;
 for (VAR_4 = VAR_1; VAR_4 > 0; VAR_4 -= sizeof(*VAR_2)) {
  if (FUNC_1(&VAR_3) == 0)
   break;
  *VAR_2++ = VAR_3;
 }
 return (VAR_1 - VAR_4);
}
