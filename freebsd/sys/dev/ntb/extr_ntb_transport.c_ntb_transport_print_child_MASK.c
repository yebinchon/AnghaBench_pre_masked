
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_child {int qpcnt; int qpoff; int consumer; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct ntb_transport_child* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, device_t VAR_1)
{
 struct ntb_transport_child *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2->qpcnt > 0) {
  FUNC_4(" queue %d", VAR_2->qpoff);
  if (VAR_2->qpcnt > 1)
   FUNC_4("-%d", VAR_2->qpoff + VAR_2->qpcnt - 1);
 }
 VAR_3 += FUNC_4(" at consumer %d", VAR_2->consumer);
 VAR_3 += FUNC_0(VAR_0, VAR_1);
 VAR_3 += FUNC_1(VAR_0, VAR_1);

 return (VAR_3);
}
