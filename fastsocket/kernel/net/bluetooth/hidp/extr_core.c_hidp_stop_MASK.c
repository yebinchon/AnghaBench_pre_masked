
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidp_session {int intr_transmit; int ctrl_transmit; } ;
struct hid_device {scalar_t__ claimed; struct hidp_session* driver_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct hid_device *VAR_0)
{
 struct hidp_session *VAR_1 = VAR_0->driver_data;

 FUNC_0(&VAR_1->ctrl_transmit);
 FUNC_0(&VAR_1->intr_transmit);

 VAR_0->claimed = 0;
}
