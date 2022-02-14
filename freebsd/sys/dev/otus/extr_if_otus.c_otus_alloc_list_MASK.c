
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {int sc_dev; } ;
struct otus_data {int * ni; int * buf; int * m; struct otus_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct otus_softc*,struct otus_data*,int) ;

__attribute__((used)) static int
FUNC_3(struct otus_softc *VAR_4, struct otus_data VAR_5[],
    int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  struct otus_data *VAR_10 = &VAR_5[VAR_8];
  VAR_10->sc = VAR_4;
  VAR_10->m = ((void*)0);
  VAR_10->buf = FUNC_1(VAR_7, VAR_2, VAR_1 | VAR_3);
  if (VAR_10->buf == ((void*)0)) {
   FUNC_0(VAR_4->sc_dev,
       "could not allocate buffer\n");
   VAR_9 = VAR_0;
   goto fail;
  }
  VAR_10->ni = ((void*)0);
 }

 return (0);
fail:
 FUNC_2(VAR_4, VAR_5, VAR_6);
 return (VAR_9);
}
