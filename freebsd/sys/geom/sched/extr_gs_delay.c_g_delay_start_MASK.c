
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_delay_softc {int sc_bioq; } ;
struct bio {int bio_t0; struct g_delay_softc* bio_caller1; } ;
struct TYPE_2__ {int latency; scalar_t__ bypass; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_3(void *VAR_2, struct bio *VAR_3)
{
 struct g_delay_softc *VAR_4 = VAR_2;

 if (VAR_1.bypass)
  return (-1);

 VAR_3->bio_caller1 = VAR_4;
 FUNC_2(&VAR_3->bio_t0);
 FUNC_0(&VAR_3->bio_t0, VAR_0 * VAR_1.latency);







 FUNC_1(&VAR_4->sc_bioq, VAR_3);

 return (0);
}
