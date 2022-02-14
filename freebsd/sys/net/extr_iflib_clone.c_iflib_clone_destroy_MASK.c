
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx {int dummy; } ;
typedef int if_t ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct sx* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sx*) ;
 int FUNC_10 (struct sx*) ;

__attribute__((used)) static void
FUNC_11(if_t VAR_2)
{
 if_ctx_t VAR_3;
 device_t VAR_4;
 struct sx *VAR_5;
 int VAR_6;




 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = FUNC_2(VAR_3);
 FUNC_9(VAR_5);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3);
 FUNC_10(VAR_5);

 FUNC_7(&VAR_0);
 VAR_6 = FUNC_0(VAR_1, VAR_4);
 FUNC_8(&VAR_0);
 if (VAR_6 == 0)
  FUNC_4(VAR_3);
}
