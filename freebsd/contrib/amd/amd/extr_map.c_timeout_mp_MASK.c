
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int opaque_t ;
struct TYPE_9__ {int mf_flags; int mf_refc; scalar_t__ mf_error; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_10__ {scalar_t__ am_autofs_ttl; int am_flags; scalar_t__ am_ttl; int am_timeo_w; int am_child; TYPE_1__* am_al; } ;
typedef TYPE_3__ am_node ;
struct TYPE_11__ {int am_timeo_w; } ;
struct TYPE_8__ {TYPE_2__* al_mnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 TYPE_3__** VAR_12 ;
 TYPE_5__ VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,void (*) (int ),int *) ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;

void
FUNC_7(opaque_t VAR_16)
{
  int VAR_17;
  time_t VAR_18 = VAR_7;
  time_t VAR_19 = FUNC_1(((void*)0));
  int VAR_20 = VAR_8 / 4;

  FUNC_2("Timing out automount points...");

  for (VAR_17 = VAR_14; VAR_17 >= 0; --VAR_17) {
    am_node *VAR_21 = VAR_12[VAR_17];
    mntfs *VAR_22;




    if (!VAR_21)
      continue;




    VAR_22 = VAR_21->am_al->al_mnt;
    if (!VAR_22)
      continue;
    if (VAR_21->am_flags & VAR_0)
      continue;




    if ((VAR_22->mf_flags & VAR_4) && VAR_22->mf_refc == 1)
      continue;




    if (!(VAR_22->mf_flags & VAR_2)) {
      int VAR_23 = 0;
      VAR_22->mf_flags &= ~VAR_6;
      if (VAR_19 >= VAR_21->am_ttl) {
 if (!VAR_20) {
   VAR_23 = 1;






   if (VAR_21->am_timeo_w < 4 * VAR_13.am_timeo_w)
     VAR_21->am_timeo_w += VAR_13.am_timeo_w;
   VAR_21->am_ttl = VAR_19 + VAR_21->am_timeo_w;

 } else {






   VAR_21->am_ttl = VAR_19 + VAR_20 + 1;
 }
      }




      VAR_18 = FUNC_4(VAR_18, VAR_21->am_ttl);

      if (!VAR_21->am_child && VAR_22->mf_error >= 0 && VAR_23) {




 if (FUNC_6(VAR_21)) {
   VAR_20 = 2;
 }
      }
    } else if (VAR_22->mf_flags & VAR_5) {
      VAR_22->mf_flags |= VAR_6;
    }
  }

  if (VAR_18 == VAR_7) {
    FUNC_2("No further timeouts");
    VAR_18 = VAR_19 + VAR_9;
  }






  if (VAR_18 <= VAR_19) {
    VAR_18 = VAR_19 + 6;
    FUNC_3(VAR_10, "Got a zero interval in timeout_mp()!");
  }




  if ((int) VAR_11 >= (int) VAR_1)
    VAR_18 = VAR_19 + 1;
  FUNC_2("Next mount timeout in %lds", (long) (VAR_18 - VAR_19));

  VAR_15 = FUNC_5(VAR_18 - VAR_19, FUNC_7, ((void*)0));
}
