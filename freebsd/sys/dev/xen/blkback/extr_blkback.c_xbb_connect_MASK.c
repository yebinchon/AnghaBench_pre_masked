
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_softc {int max_reqlist_segments; int max_request_segments; int max_requests; int max_reqlist_size; int dev; int flags; int hotplug_done; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct xbb_softc*) ;
 int FUNC_2 (struct xbb_softc*) ;
 int FUNC_3 (struct xbb_softc*) ;
 scalar_t__ FUNC_4 (struct xbb_softc*) ;
 int FUNC_5 (struct xbb_softc*) ;
 int FUNC_6 (struct xbb_softc*) ;
 scalar_t__ FUNC_7 (struct xbb_softc*) ;
 int FUNC_8 (int ,int,char*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11(struct xbb_softc *VAR_5)
{
 int VAR_6;

 if (!VAR_5->hotplug_done ||
     (FUNC_9(VAR_5->dev) != VAR_4) ||
     (FUNC_4(VAR_5) != 0))
  return;

 VAR_5->flags &= ~VAR_1;






 VAR_5->max_reqlist_segments = FUNC_0(VAR_5->max_request_segments *
  VAR_5->max_requests, VAR_2);





 VAR_5->max_reqlist_size = VAR_5->max_reqlist_segments * VAR_0;


 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 != 0) {
  FUNC_8(VAR_5->dev, VAR_6,
     "Unable to allocate communication memory");
  return;
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 != 0) {

  return;
 }

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 != 0) {

  return;
 }




 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6 != 0) {

  return;
 }

 if (FUNC_7(VAR_5) != 0) {





  (void)FUNC_6(VAR_5);
  return;
 }


 FUNC_10(VAR_5->dev, VAR_3);
}
