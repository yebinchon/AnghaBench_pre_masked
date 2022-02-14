
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
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, int VAR_2)
{
 device_t VAR_3 = FUNC_1(VAR_1);
 struct lpt_data *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;





 FUNC_2(VAR_3);
 if (VAR_4->sc_state & VAR_0)
  return (0);

 VAR_5 = FUNC_3(VAR_3, VAR_1, VAR_2);
 if (VAR_5 == 0)
  VAR_4->sc_state |= VAR_0;
 return (VAR_5);
}
