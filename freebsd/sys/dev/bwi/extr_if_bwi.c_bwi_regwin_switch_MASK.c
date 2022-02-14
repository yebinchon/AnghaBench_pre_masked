
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_softc {struct bwi_regwin* sc_cur_regwin; int sc_dev; } ;
struct bwi_regwin {int rw_id; } ;


 int FUNC_0 (struct bwi_regwin*) ;
 int VAR_0 ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (int ,char*,int ) ;

int
FUNC_3(struct bwi_softc *VAR_1, struct bwi_regwin *VAR_2,
    struct bwi_regwin **VAR_3)
{
 int VAR_4;

 if (VAR_3 != ((void*)0))
  *VAR_3 = ((void*)0);

 if (!FUNC_0(VAR_2))
  return VAR_0;

 if (VAR_1->sc_cur_regwin != VAR_2) {
  VAR_4 = FUNC_1(VAR_1, VAR_2->rw_id);
  if (VAR_4) {
   FUNC_2(VAR_1->sc_dev, "can't select regwin %d\n",
      VAR_2->rw_id);
   return VAR_4;
  }
 }

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_1->sc_cur_regwin;
 VAR_1->sc_cur_regwin = VAR_2;
 return 0;
}
