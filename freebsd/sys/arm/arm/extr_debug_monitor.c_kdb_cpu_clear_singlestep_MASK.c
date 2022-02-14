
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int) ;

void
FUNC_4(void)
{
 uint32_t VAR_7, VAR_8;
 u_int VAR_9;

 if (!FUNC_0())
  return;

 FUNC_1(VAR_2);
 FUNC_1(VAR_1);


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = FUNC_2(VAR_3, VAR_9);
  VAR_7 = FUNC_2(VAR_4, VAR_9);

  if ((VAR_7 & VAR_0) != 0) {
   FUNC_3(VAR_3, VAR_9,
       (VAR_8 | VAR_5));
  }
 }
}
