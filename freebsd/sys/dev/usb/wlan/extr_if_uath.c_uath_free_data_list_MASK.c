
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_softc {int dummy; } ;
struct uath_data {int * ni; int * buf; int * m; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct uath_softc *VAR_0, struct uath_data VAR_1[], int VAR_2,
    int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct uath_data *VAR_5 = &VAR_1[VAR_4];

  if (VAR_3 == 1) {
   if (VAR_5->m != ((void*)0)) {
    FUNC_1(VAR_5->m);
    VAR_5->m = ((void*)0);
    VAR_5->buf = ((void*)0);
   }
  } else {
   VAR_5->buf = ((void*)0);
  }
  if (VAR_5->ni != ((void*)0)) {
   FUNC_0(VAR_5->ni);
   VAR_5->ni = ((void*)0);
  }
 }
}
