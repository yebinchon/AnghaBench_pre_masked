
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sco_conn {int dummy; } ;
struct hci_conn {scalar_t__ type; int dst; } ;
typedef int __u8 ;


 int FUNC_0 (char*,struct hci_conn*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct sco_conn* FUNC_3 (struct hci_conn*,int ) ;
 int FUNC_4 (struct hci_conn*,int ) ;
 int FUNC_5 (struct sco_conn*) ;

__attribute__((used)) static int FUNC_6(struct hci_conn *VAR_2, __u8 VAR_3)
{
 FUNC_0("hcon %p bdaddr %s status %d", VAR_2, FUNC_1(&VAR_2->dst), VAR_3);

 if (VAR_2->type != VAR_1 && VAR_2->type != VAR_0)
  return 0;

 if (!VAR_3) {
  struct sco_conn *VAR_4;

  VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (VAR_4)
   FUNC_5(VAR_4);
 } else
  FUNC_4(VAR_2, FUNC_2(VAR_3));

 return 0;
}
