
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int speed; scalar_t__ duplex; scalar_t__ link_up; } ;
struct ifnet {int dummy; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;


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
 int VAR_10 ;
 int FUNC_0 (struct nicvf*) ;
 int FUNC_1 (struct nicvf*) ;





 struct nicvf* FUNC_2 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_11, struct ifmediareq *VAR_12)
{
 struct nicvf *VAR_13 = FUNC_2(VAR_11);

 FUNC_0(VAR_13);

 VAR_12->ifm_status = VAR_7;
 VAR_12->ifm_active = VAR_8;

 if (VAR_13->link_up) {

  VAR_12->ifm_status |= VAR_5;
 }

 switch (VAR_13->speed) {
 case 132:
  VAR_12->ifm_active |= VAR_3;
  break;
 case 131:
  VAR_12->ifm_active |= VAR_1;
  break;
 case 130:
  VAR_12->ifm_active |= VAR_0;
  break;
 case 129:
  VAR_12->ifm_active |= VAR_2;
  break;
 case 128:
  VAR_12->ifm_active |= VAR_4;
  break;
 default:
  VAR_12->ifm_active |= VAR_6;
  break;
 }

 if (VAR_13->duplex)
  VAR_12->ifm_active |= VAR_9;
 else
  VAR_12->ifm_active |= VAR_10;

 FUNC_1(VAR_13);
}
