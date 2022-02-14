
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_softc {int lock; int * dev_name; int * dev_type; int * dev_mode; int * xbb_stats_in; int * xbb_stats; int * io_taskqueue; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct xbb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct xbb_softc*,int *,int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct xbb_softc*) ;
 scalar_t__ FUNC_10 (struct xbb_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_2)
{
        struct xbb_softc *VAR_3;

 FUNC_0("\n");

        VAR_3 = FUNC_1(VAR_2);
 FUNC_6(&VAR_3->lock);
 while (FUNC_10(VAR_3) == VAR_0) {
  FUNC_4(VAR_3, &VAR_3->lock, 0,
         "xbb_shutdown", 0);
 }
 FUNC_7(&VAR_3->lock);

 FUNC_0("\n");

 if (VAR_3->io_taskqueue != ((void*)0))
  FUNC_8(VAR_3->io_taskqueue);

 if (VAR_3->xbb_stats != ((void*)0))
  FUNC_2(VAR_3->xbb_stats);

 if (VAR_3->xbb_stats_in != ((void*)0))
  FUNC_2(VAR_3->xbb_stats_in);

 FUNC_9(VAR_3);

 if (VAR_3->dev_mode != ((void*)0)) {
  FUNC_3(VAR_3->dev_mode, VAR_1);
  VAR_3->dev_mode = ((void*)0);
 }

 if (VAR_3->dev_type != ((void*)0)) {
  FUNC_3(VAR_3->dev_type, VAR_1);
  VAR_3->dev_type = ((void*)0);
 }

 if (VAR_3->dev_name != ((void*)0)) {
  FUNC_3(VAR_3->dev_name, VAR_1);
  VAR_3->dev_name = ((void*)0);
 }

 FUNC_5(&VAR_3->lock);
        return (0);
}
