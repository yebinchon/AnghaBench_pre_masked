
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_dev {int dummy; } ;
struct ena_adapter {int reset_reason; struct ena_com_dev* ena_dev; int timer_service; int ifp; } ;
typedef int if_t ;


 int FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct ena_adapter*) ;
 int FUNC_2 (int ,struct ena_adapter*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ena_com_dev*) ;
 int FUNC_5 (struct ena_com_dev*) ;
 int FUNC_6 (struct ena_com_dev*,int ) ;
 int FUNC_7 (struct ena_com_dev*) ;
 int FUNC_8 (struct ena_com_dev*,int) ;
 int FUNC_9 (struct ena_com_dev*) ;
 int FUNC_10 (struct ena_adapter*) ;
 int FUNC_11 (struct ena_adapter*) ;
 int FUNC_12 (struct ena_adapter*) ;
 int FUNC_13 (int ,int ) ;

void
FUNC_14(struct ena_adapter *VAR_6, bool VAR_7)
{
 if_t VAR_8 = VAR_6->ifp;
 struct ena_com_dev *VAR_9 = VAR_6->ena_dev;
 bool VAR_10;

 if (!FUNC_1(VAR_0, VAR_6))
  return;

 FUNC_13(VAR_8, VAR_5);

 FUNC_3(&VAR_6->timer_service);

 VAR_10 = FUNC_1(VAR_1, VAR_6);
 if (VAR_10)
  FUNC_2(VAR_2, VAR_6);
 else
  FUNC_0(VAR_2, VAR_6);

 if (!VAR_7)
  FUNC_8(VAR_9, 0);

 if (FUNC_1(VAR_1, VAR_6))
  FUNC_11(VAR_6);





 if (!(FUNC_1(VAR_3, VAR_6) && VAR_10))
  FUNC_6(VAR_6->ena_dev, VAR_6->reset_reason);

 FUNC_12(VAR_6);

 FUNC_10(VAR_6);

 FUNC_4(VAR_9);

 FUNC_9(VAR_9);

 FUNC_5(VAR_9);

 FUNC_7(VAR_9);

 VAR_6->reset_reason = VAR_4;

 FUNC_0(VAR_3, VAR_6);
 FUNC_0(VAR_0, VAR_6);
}
