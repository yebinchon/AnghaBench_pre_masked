
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct turnstile {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int VAR_1 ;
 int FUNC_1 (struct turnstile*) ;
 struct turnstile* FUNC_2 (int *) ;
 int FUNC_3 (struct turnstile*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(u_long *VAR_2, u_long *VAR_3)
{
 struct turnstile *VAR_4;

 VAR_4 = FUNC_2(&VAR_1);
 if (*VAR_2 > FUNC_0(VAR_3))
  FUNC_3(VAR_4, ((void*)0), VAR_0);
 else
  FUNC_1(VAR_4);
}
