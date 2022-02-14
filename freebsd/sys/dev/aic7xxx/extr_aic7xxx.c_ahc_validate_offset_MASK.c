
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct ahc_syncrate {int dummy; } ;
struct ahc_softc {int features; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ offset; } ;
struct ahc_initiator_tinfo {TYPE_2__ goal; TYPE_1__ user; } ;
typedef scalar_t__ role_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;

void
FUNC_1(struct ahc_softc *VAR_5,
      struct ahc_initiator_tinfo *VAR_6,
      struct ahc_syncrate *VAR_7,
      u_int *VAR_8, int VAR_9, role_t VAR_10)
{
 u_int VAR_11;


 if (VAR_7 == ((void*)0)) {
  VAR_11 = 0;
 } else if ((VAR_5->features & VAR_0) != 0) {
  VAR_11 = VAR_3;
 } else {
  if (VAR_9)
   VAR_11 = VAR_1;
  else
   VAR_11 = VAR_2;
 }
 *VAR_8 = FUNC_0(*VAR_8, VAR_11);
 if (VAR_6 != ((void*)0)) {
  if (VAR_10 == VAR_4)
   *VAR_8 = FUNC_0(*VAR_8, VAR_6->user.offset);
  else
   *VAR_8 = FUNC_0(*VAR_8, VAR_6->goal.offset);
 }
}
