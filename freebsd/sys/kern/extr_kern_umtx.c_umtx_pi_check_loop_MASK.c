
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_pi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct umtx_pi* FUNC_1 (struct umtx_pi*) ;

__attribute__((used)) static bool
FUNC_2(struct umtx_pi *VAR_2)
{
 struct umtx_pi *VAR_3;

 FUNC_0(&VAR_1, VAR_0);
 if (VAR_2 == ((void*)0))
  return (0);
 VAR_3 = VAR_2;
 for (;;) {
  VAR_2 = FUNC_1(VAR_2);
  if (VAR_2 == ((void*)0))
   break;
  VAR_3 = FUNC_1(VAR_3);
  if (VAR_3 == ((void*)0))
   break;
  VAR_3 = FUNC_1(VAR_3);
  if (VAR_3 == ((void*)0))
   break;
  if (VAR_2 == VAR_3)
   return (1);
 }
 return (0);
}
