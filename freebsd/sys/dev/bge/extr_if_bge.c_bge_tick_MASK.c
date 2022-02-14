
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct bge_softc {int bge_flags; scalar_t__ bge_asicrev; int bge_stat_ch; int bge_link_evt; int bge_ifp; int bge_link; int bge_miibus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bge_softc*) ;
 int FUNC_1 (struct bge_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bge_softc*,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct bge_softc*) ;
 int FUNC_4 (struct bge_softc*) ;
 int FUNC_5 (struct bge_softc*) ;
 int FUNC_6 (struct bge_softc*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,void (*) (void*),struct bge_softc*) ;
 struct mii_data* FUNC_10 (int ) ;
 int VAR_8 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_9)
{
 struct bge_softc *VAR_10 = VAR_9;
 struct mii_data *VAR_11 = ((void*)0);

 FUNC_1(VAR_10);


 if (FUNC_8(&VAR_10->bge_stat_ch) ||
     !FUNC_7(&VAR_10->bge_stat_ch))
  return;

 if (FUNC_0(VAR_10))
  FUNC_5(VAR_10);
 else
  FUNC_4(VAR_10);



 if ((VAR_10->bge_flags & VAR_2) == 0) {
  VAR_11 = FUNC_10(VAR_10->bge_miibus);





  if (!VAR_10->bge_link)
   FUNC_12(VAR_11);
 } else {
  {
  VAR_10->bge_link_evt++;
  if (VAR_10->bge_asicrev == VAR_0 ||
      VAR_10->bge_flags & VAR_1)
   FUNC_2(VAR_10, VAR_5, VAR_6);
  else
   FUNC_2(VAR_10, VAR_4, VAR_3);
  }
 }

 FUNC_3(VAR_10);
 FUNC_6(VAR_10);

 FUNC_9(&VAR_10->bge_stat_ch, VAR_8, FUNC_13, VAR_10);
}
