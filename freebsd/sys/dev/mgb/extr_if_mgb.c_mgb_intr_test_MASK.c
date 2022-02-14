
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int isr_test_flag; } ;


 int FUNC_0 (struct mgb_softc*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static bool
FUNC_2(struct mgb_softc *VAR_8)
{
 int VAR_9;

 VAR_8->isr_test_flag = 0;
 FUNC_0(VAR_8, VAR_3, VAR_5);
 FUNC_0(VAR_8, VAR_6, VAR_4);
 FUNC_0(VAR_8, VAR_1,
     VAR_4 | VAR_5);
 FUNC_0(VAR_8, VAR_2, VAR_5);
 if (VAR_8->isr_test_flag)
  return 1;
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  FUNC_1(10);
  if (VAR_8->isr_test_flag)
   break;
 }
 FUNC_0(VAR_8, VAR_0, VAR_5);
 FUNC_0(VAR_8, VAR_3, VAR_5);
 return VAR_8->isr_test_flag;
}
