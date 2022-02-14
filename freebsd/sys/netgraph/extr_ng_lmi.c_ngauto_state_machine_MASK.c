
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
struct TYPE_5__ {scalar_t__ poll_count; int poll_state; int lmi_channel0; int lmi_channel; int lmi_channel1023; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_3(sc_p VAR_5)
{
 if ((VAR_5->poll_count <= 0) || (VAR_5->poll_count > VAR_0)) {


  VAR_5->poll_count = VAR_0;
  VAR_5->poll_state++;
 }
 switch (VAR_5->poll_state) {
 case 7:
  FUNC_1(VAR_1, "nglmi: no response from exchange\n");
 default:
  VAR_5->poll_state = 1;
 case 1:
  VAR_5->lmi_channel = VAR_5->lmi_channel0;
  FUNC_0(VAR_5, VAR_3);
  break;
 case 2:
  VAR_5->lmi_channel = VAR_5->lmi_channel1023;
  FUNC_0(VAR_5, VAR_3);
  break;
 case 3:
  VAR_5->lmi_channel = VAR_5->lmi_channel0;
  FUNC_0(VAR_5, VAR_2);
  break;
 case 4:
  VAR_5->lmi_channel = VAR_5->lmi_channel1023;
  FUNC_0(VAR_5, VAR_4);
  break;
 case 5:
  VAR_5->lmi_channel = VAR_5->lmi_channel1023;
  FUNC_0(VAR_5, VAR_2);
  break;
 case 6:
  VAR_5->lmi_channel = VAR_5->lmi_channel0;
  FUNC_0(VAR_5, VAR_4);
  break;
 }


 FUNC_2(VAR_5, 0);
 VAR_5->poll_count--;
}
