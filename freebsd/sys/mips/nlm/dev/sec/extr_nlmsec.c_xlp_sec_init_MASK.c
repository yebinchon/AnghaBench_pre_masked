
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_sec_softc {int sec_vc_end; int sec_vc_start; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,struct xlp_sec_softc*) ;

__attribute__((used)) static int
FUNC_2(struct xlp_sec_softc *VAR_1)
{


 if (FUNC_1(VAR_1->sec_vc_start,
     VAR_1->sec_vc_end, VAR_0, VAR_1) != 0) {
  FUNC_0("Couldn't register sec msgring handler\n");
  return (-1);
 }




 return (0);
}
