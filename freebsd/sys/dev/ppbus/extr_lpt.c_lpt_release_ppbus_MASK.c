
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpt_data {int sc_state; } ;
typedef int device_t ;


 struct lpt_data* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 device_t VAR_2 = FUNC_1(VAR_1);
 struct lpt_data *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 0;

 FUNC_2(VAR_2);
 if (VAR_3->sc_state & VAR_0) {
  VAR_4 = FUNC_3(VAR_2, VAR_1);
  if (VAR_4 == 0)
   VAR_3->sc_state &= ~VAR_0;
 }
 return (VAR_4);
}
