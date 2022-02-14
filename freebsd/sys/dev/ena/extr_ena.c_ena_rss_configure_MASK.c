
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_dev {int dummy; } ;
struct ena_adapter {struct ena_com_dev* ena_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_dev*) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (struct ena_com_dev*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct ena_adapter *VAR_1)
{
 struct ena_com_dev *VAR_2 = VAR_1->ena_dev;
 int VAR_3;


 VAR_3 = FUNC_0(VAR_2);
 if (FUNC_3((VAR_3 != 0) && (VAR_3 != VAR_0)))
  return (VAR_3);


 VAR_3 = FUNC_2(VAR_2);
 if (FUNC_3((VAR_3 != 0) && (VAR_3 != VAR_0)))
  return (VAR_3);


 VAR_3 = FUNC_1(VAR_2);
 if (FUNC_3((VAR_3 != 0) && (VAR_3 != VAR_0)))
  return (VAR_3);

 return (0);
}
