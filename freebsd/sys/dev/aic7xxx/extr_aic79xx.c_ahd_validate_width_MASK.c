
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct ahd_softc {int features; } ;
struct TYPE_4__ {int width; } ;
struct TYPE_3__ {int width; } ;
struct ahd_initiator_tinfo {TYPE_2__ goal; TYPE_1__ user; } ;
typedef scalar_t__ role_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;

void
FUNC_1(struct ahd_softc *VAR_3, struct ahd_initiator_tinfo *VAR_4,
     u_int *VAR_5, role_t VAR_6)
{
 switch (*VAR_5) {
 default:
  if (VAR_3->features & VAR_0) {

   *VAR_5 = VAR_1;
   break;
  }

 case 128:
  *VAR_5 = 128;
  break;
 }
 if (VAR_4 != ((void*)0)) {
  if (VAR_6 == VAR_2)
   *VAR_5 = FUNC_0(VAR_4->user.width, *VAR_5);
  else
   *VAR_5 = FUNC_0(VAR_4->goal.width, *VAR_5);
 }
}
