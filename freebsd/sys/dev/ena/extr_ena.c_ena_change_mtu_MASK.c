
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int max_mtu; int pdev; int ena_dev; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 struct ena_adapter* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(if_t VAR_3, int VAR_4)
{
 struct ena_adapter *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 if ((VAR_4 > VAR_5->max_mtu) || (VAR_4 < VAR_2)) {
  FUNC_0(VAR_5->pdev, "Invalid MTU setting. "
      "new_mtu: %d max mtu: %d min mtu: %d\n",
      VAR_4, VAR_5->max_mtu, VAR_2);
  return (VAR_0);
 }

 VAR_6 = FUNC_1(VAR_5->ena_dev, VAR_4);
 if (FUNC_5(VAR_6 == 0)) {
  FUNC_2(VAR_1, "set MTU to %d\n", VAR_4);
  FUNC_4(VAR_3, VAR_4);
 } else {
  FUNC_0(VAR_5->pdev, "Failed to set MTU to %d\n",
      VAR_4);
 }

 return (VAR_6);
}
