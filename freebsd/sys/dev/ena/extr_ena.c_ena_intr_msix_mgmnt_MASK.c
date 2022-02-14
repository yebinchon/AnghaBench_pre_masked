
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int ena_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ena_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct ena_adapter *VAR_2 = (struct ena_adapter *)VAR_1;

 FUNC_1(VAR_2->ena_dev);
 if (FUNC_3(FUNC_0(VAR_0, VAR_2)))
  FUNC_2(VAR_2->ena_dev, VAR_1);
}
