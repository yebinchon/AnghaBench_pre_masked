
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int mpt_pers_mask; } ;
struct mpt_personality {scalar_t__ (* probe ) (struct mpt_softc*) ;int (* attach ) (struct mpt_softc*) ;int id; int (* enable ) (struct mpt_softc*) ;int name; int use_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mpt_personality*,struct mpt_softc*) ;
 int FUNC_1 (int *,struct mpt_softc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mpt_softc*) ;
 int FUNC_3 (struct mpt_softc*) ;
 int FUNC_4 (struct mpt_softc*) ;
 struct mpt_personality** VAR_2 ;
 int FUNC_5 (struct mpt_softc*,char*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (struct mpt_softc*) ;
 int FUNC_7 (struct mpt_softc*) ;
 int FUNC_8 (struct mpt_softc*) ;

int
FUNC_9(struct mpt_softc *VAR_4)
{
 struct mpt_personality *VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_2(VAR_4);
 FUNC_3(VAR_4);

 FUNC_1(&VAR_3, VAR_4, VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = VAR_2[VAR_6];
  if (VAR_5 == ((void*)0)) {
   continue;
  }
  if (VAR_5->probe(VAR_4) == 0) {
   VAR_7 = VAR_5->attach(VAR_4);
   if (VAR_7 != 0) {
    FUNC_4(VAR_4);
    return (VAR_7);
   }
   VAR_4->mpt_pers_mask |= (0x1 << VAR_5->id);
   VAR_5->use_count++;
  }
 }







 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = VAR_2[VAR_6];
  if (VAR_5 != ((void*)0) && FUNC_0(VAR_5, VAR_4) != 0) {
   VAR_7 = VAR_5->enable(VAR_4);
   if (VAR_7 != 0) {
    FUNC_5(VAR_4, "personality %s attached but would"
        " not enable (%d)\n", VAR_5->name, VAR_7);
    FUNC_4(VAR_4);
    return (VAR_7);
   }
  }
 }
 return (0);
}
