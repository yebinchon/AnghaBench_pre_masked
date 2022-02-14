
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsu_softc {int dummy; } ;
struct rsu_data {int * ni; int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct rsu_softc *VAR_1, struct rsu_data VAR_2[], int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct rsu_data *VAR_5 = &VAR_2[VAR_4];

  if (VAR_5->buf != ((void*)0)) {
   FUNC_0(VAR_5->buf, VAR_0);
   VAR_5->buf = ((void*)0);
  }
  if (VAR_5->ni != ((void*)0)) {
   FUNC_1(VAR_5->ni);
   VAR_5->ni = ((void*)0);
  }
 }
}
