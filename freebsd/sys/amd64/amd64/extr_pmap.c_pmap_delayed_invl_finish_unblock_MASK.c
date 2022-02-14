
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct turnstile {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct turnstile*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct turnstile* FUNC_3 (int *) ;
 int FUNC_4 (struct turnstile*) ;

__attribute__((used)) static void
FUNC_5(u_long VAR_3)
{
 struct turnstile *VAR_4;

 FUNC_1(&VAR_1);
 VAR_4 = FUNC_3(&VAR_1);
 if (VAR_3 != 0)
  VAR_2 = VAR_3;
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4, VAR_0);
  FUNC_4(VAR_4);
 }
 FUNC_2(&VAR_1);
}
