
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pass_softc {int flags; int alias_dev; int dev; } ;
struct mtx {int dummy; } ;
struct cam_periph {int flags; int path; struct pass_softc* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mtx* FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int *,int ,int ,char*) ;
 char* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct mtx*) ;
 int FUNC_6 (struct mtx*) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_6, int VAR_7)
{
 struct cam_periph *VAR_8;
 struct pass_softc *VAR_9;
 struct mtx *VAR_10;
 char *VAR_11;





 VAR_8 = VAR_6;
 VAR_9 = VAR_8->softc;
 VAR_11 = FUNC_4(VAR_2, VAR_3, VAR_4);
 VAR_10 = FUNC_0(VAR_8);
 FUNC_5(VAR_10);

 if (VAR_8->flags & VAR_0)
  goto out;

 if (FUNC_8(VAR_11, VAR_2,
   "GEOM::physpath", VAR_8->path) == 0
  && FUNC_7(VAR_11) != 0) {

  FUNC_6(VAR_10);
  FUNC_3(VAR_1, &VAR_9->alias_dev,
     VAR_9->dev, VAR_9->alias_dev, VAR_11);
  FUNC_5(VAR_10);
 }

out:




 if ((VAR_9->flags & VAR_5) == 0)
  VAR_9->flags |= VAR_5;





 while (VAR_7-- > 0)
  FUNC_1(VAR_8);
 FUNC_6(VAR_10);

 FUNC_2(VAR_11, VAR_3);
}
