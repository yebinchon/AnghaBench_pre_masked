
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_conn {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct hci_conn*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*,int ) ;

__attribute__((used)) static int FUNC_3(struct hci_conn *VAR_1, u8 VAR_2)
{
 FUNC_0("hcon %p reason %d", VAR_1, VAR_2);

 if (VAR_1->type != VAR_0)
  return 0;

 FUNC_2(VAR_1, FUNC_1(VAR_2));

 return 0;
}
