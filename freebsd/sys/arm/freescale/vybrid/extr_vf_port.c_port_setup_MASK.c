
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_softc {int dummy; } ;
struct port_event {void (* ih ) (void*) ;int pevt; int enabled; void* ih_user; } ;
typedef enum ev_type { ____Placeholder_ev_type } ev_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct port_softc*,int ) ;
 int FUNC_2 (struct port_softc*,int ,int) ;
 struct port_event* VAR_10 ;
 struct port_softc* VAR_11 ;

int
FUNC_3(int VAR_12, enum ev_type VAR_13, void (*VAR_14)(void *), void *VAR_15)
{
 struct port_event *VAR_16;
 struct port_softc *VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_17 = VAR_11;

 switch (VAR_13) {
 case 133:
  VAR_19 = VAR_2;
  break;
 case 134:
  VAR_19 = VAR_1;
  break;
 case 135:
  VAR_19 = VAR_0;
  break;
 case 129:
  VAR_19 = VAR_6;
  break;
 case 128:
  VAR_19 = VAR_7;
  break;
 case 131:
  VAR_19 = VAR_4;
  break;
 case 132:
  VAR_19 = VAR_3;
  break;
 case 130:
  VAR_19 = VAR_5;
  break;
 default:
  return (-1);
 }

 VAR_18 = FUNC_1(VAR_17, FUNC_0(VAR_12));
 VAR_18 &= ~(VAR_8 << VAR_9);
 VAR_18 |= (VAR_19 << VAR_9);
 FUNC_2(VAR_17, FUNC_0(VAR_12), VAR_18);

 VAR_16 = &VAR_10[VAR_12];
 VAR_16->ih = VAR_14;
 VAR_16->ih_user = VAR_15;
 VAR_16->pevt = VAR_13;
 VAR_16->enabled = 1;

 return (0);
}
