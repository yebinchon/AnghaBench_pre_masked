
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int u_int ;
struct typetable {int nextarg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct typetable*,int ) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char) ;

__attribute__((used)) static inline int
FUNC_3(struct typetable *VAR_1, wchar_t **VAR_2)
{
 wchar_t *VAR_3;
 u_int VAR_4;

 VAR_4 = 0;
 VAR_3 = *VAR_2;
 while (FUNC_1(*VAR_3)) {
  VAR_4 = 10 * VAR_4 + FUNC_2(*VAR_3);
  VAR_3++;
 }
 if (*VAR_3 == '$') {
  u_int VAR_5 = VAR_1->nextarg;
  VAR_1->nextarg = VAR_4;
  if (FUNC_0(VAR_1, VAR_0))
   return (-1);
  VAR_1->nextarg = VAR_5;
  *VAR_2 = ++VAR_3;
 } else {
  if (FUNC_0(VAR_1, VAR_0))
   return (-1);
 }
 return (0);
}
