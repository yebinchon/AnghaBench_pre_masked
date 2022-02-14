
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ena_adapter {int num_queues; int ena_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ena_adapter *VAR_0)
{
 uint16_t VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_queues; VAR_2++) {
  VAR_1 = FUNC_0(VAR_2);
  FUNC_1(VAR_0->ena_dev, VAR_1);
 }
}
