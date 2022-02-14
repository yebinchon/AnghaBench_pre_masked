
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iucv_irq_list {int list; int data; } ;
struct iucv_irq_data {scalar_t__ ippathid; int iptype; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 struct iucv_irq_data** VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct iucv_irq_list* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct iucv_irq_data*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(u16 VAR_9)
{
 struct iucv_irq_data *VAR_10;
 struct iucv_irq_list *VAR_11;

 VAR_10 = VAR_2[FUNC_8()];
 if (VAR_10->ippathid >= VAR_3) {
  FUNC_1(VAR_10->ippathid >= VAR_3);
  FUNC_2(VAR_10->ippathid, VAR_1);
  return;
 }
 FUNC_0(VAR_10->iptype < 0x01 || VAR_10->iptype > 0x09);
 VAR_11 = FUNC_3(sizeof(struct iucv_irq_list), VAR_0);
 if (!VAR_11) {
  FUNC_6("iucv_external_interrupt: out of memory\n");
  return;
 }
 FUNC_5(&VAR_11->data, VAR_10, sizeof(VAR_11->data));
 FUNC_9(&VAR_4);
 if (VAR_10->iptype == 0x01) {

  FUNC_4(&VAR_11->list, &VAR_8);
  FUNC_7(&VAR_7);
 } else {

  FUNC_4(&VAR_11->list, &VAR_5);
  FUNC_11(&VAR_6);
 }
 FUNC_10(&VAR_4);
}
