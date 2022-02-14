
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsu_softc {int sc_dev; } ;
struct rsu_data {int * ni; int * buf; int * m; struct rsu_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct rsu_softc*,struct rsu_data*,int) ;

__attribute__((used)) static int
FUNC_3(struct rsu_softc *VAR_3, struct rsu_data VAR_4[],
    int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  struct rsu_data *VAR_9 = &VAR_4[VAR_7];
  VAR_9->sc = VAR_3;
  VAR_9->m = ((void*)0);
  VAR_9->buf = FUNC_1(VAR_6, VAR_2, VAR_1);
  if (VAR_9->buf == ((void*)0)) {
   FUNC_0(VAR_3->sc_dev,
       "could not allocate buffer\n");
   VAR_8 = VAR_0;
   goto fail;
  }
  VAR_9->ni = ((void*)0);
 }

 return (0);
fail:
 FUNC_2(VAR_3, VAR_4, VAR_5);
 return (VAR_8);
}
