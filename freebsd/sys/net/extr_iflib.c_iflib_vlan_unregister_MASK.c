
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int if_t ;
typedef scalar_t__ if_ctx_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, if_t VAR_2, uint16_t VAR_3)
{
 if_ctx_t VAR_4 = FUNC_4(VAR_2);

 if ((void *)VAR_4 != VAR_1)
  return;

 if ((VAR_3 == 0) || (VAR_3 > 4095))
  return;

 FUNC_0(VAR_4);
 FUNC_2(VAR_4, VAR_3);

 if (FUNC_3(VAR_2) & VAR_0)
  FUNC_5(VAR_4);
 FUNC_1(VAR_4);
}
