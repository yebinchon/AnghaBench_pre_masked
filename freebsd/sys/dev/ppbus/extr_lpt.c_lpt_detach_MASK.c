
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpt_data {int sc_statbuf; int sc_inbuf; int * sc_intr_resource; int sc_intr_cookie; int sc_timer; int sc_cdev_bypass; int sc_cdev; } ;
typedef int device_t ;


 struct lpt_data* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct lpt_data *VAR_3 = FUNC_0(VAR_2);
 device_t VAR_4 = FUNC_5(VAR_2);

 FUNC_4(VAR_3->sc_cdev);
 FUNC_4(VAR_3->sc_cdev_bypass);
 FUNC_8(VAR_4);
 FUNC_7(VAR_2);
 FUNC_9(VAR_4);
 FUNC_3(&VAR_3->sc_timer);
 if (VAR_3->sc_intr_resource != ((void*)0)) {
  FUNC_2(VAR_2, VAR_3->sc_intr_resource,
      VAR_3->sc_intr_cookie);
  FUNC_1(VAR_2, VAR_1, 0, VAR_3->sc_intr_resource);
 }
 FUNC_6(VAR_3->sc_inbuf, VAR_0);
 FUNC_6(VAR_3->sc_statbuf, VAR_0);

 return (0);
}
