
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_softc {int hb_timer; int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct amd_ntb_softc*) ;
 scalar_t__ FUNC_1 (struct amd_ntb_softc*) ;
 int FUNC_2 (int *,int,void (*) (void*),struct amd_ntb_softc*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct amd_ntb_softc *VAR_2 = VAR_1;

 if (FUNC_1(VAR_2))
  FUNC_3(VAR_2->device);

 if (!FUNC_0(VAR_2)) {
  FUNC_2(&VAR_2->hb_timer, VAR_0,
      FUNC_4, VAR_2);
 } else {
  FUNC_2(&VAR_2->hb_timer, (VAR_0 * 10),
      FUNC_4, VAR_2);
 }
}
