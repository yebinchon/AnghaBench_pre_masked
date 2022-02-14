
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_multipath_softc {int sc_mtx; } ;
struct g_consumer {int index; int private; TYPE_1__* geom; } ;
struct bio {scalar_t__ bio_error; struct g_consumer* bio_from; } ;
struct TYPE_2__ {struct g_multipath_softc* softc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct bio*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,struct g_consumer*,int ,int *) ;
 int FUNC_2 (struct bio*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct bio *VAR_9)
{
 struct g_multipath_softc *VAR_10;
 struct g_consumer *VAR_11;
 uintptr_t *VAR_12;

 if (VAR_9->bio_error == VAR_1 || VAR_9->bio_error == VAR_0) {
  FUNC_3(&VAR_8);
  FUNC_0(&VAR_7, VAR_9);
  FUNC_4(&VAR_8);
  FUNC_5(&VAR_6);
 } else {
  VAR_11 = VAR_9->bio_from;
  VAR_10 = VAR_11->geom->softc;
  VAR_12 = (uintptr_t *)&VAR_11->private;
  FUNC_3(&VAR_10->sc_mtx);
  (*VAR_12)--;
  if (*VAR_12 == 0 && (VAR_11->index & VAR_2)) {
   if (FUNC_1(VAR_5, VAR_11, VAR_4, ((void*)0)) == 0)
    VAR_11->index |= VAR_3;
   FUNC_4(&VAR_10->sc_mtx);
  } else
   FUNC_4(&VAR_10->sc_mtx);
  FUNC_2(VAR_9);
 }
}
