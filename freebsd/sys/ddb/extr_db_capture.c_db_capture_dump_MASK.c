
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct dumperinfo {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (struct dumperinfo*,scalar_t__) ;

void
FUNC_3(struct dumperinfo *VAR_6)
{
 u_int VAR_7;

 if (VAR_3 == 0)
  return;

 FUNC_0();
 FUNC_1(VAR_5, VAR_0,
     VAR_3);
 (void)FUNC_2(VAR_6, VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_3 + VAR_4;
     VAR_7 += VAR_1)
  (void)FUNC_2(VAR_6, VAR_2 + VAR_7);
 VAR_3 = 0;
 VAR_4 = 0;
}
