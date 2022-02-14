
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int dummy; } ;
struct iwm_fw_img {scalar_t__ is_dual_cpus; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct iwm_softc*) ;
 int FUNC_2 (struct iwm_softc*) ;
 int FUNC_3 (struct iwm_softc*,struct iwm_fw_img const*,int,int*) ;
 int FUNC_4 (struct iwm_softc*,int ,int ) ;

int
FUNC_5(struct iwm_softc *VAR_3,
 const struct iwm_fw_img *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 FUNC_0(VAR_3, VAR_0, "working with %s CPU\n",
      VAR_4->is_dual_cpus ? "Dual" : "Single");



 if (FUNC_1(VAR_3)) {
  FUNC_4(VAR_3, VAR_1,
      VAR_2);
  FUNC_2(VAR_3);
 }


 VAR_5 = FUNC_3(VAR_3, VAR_4, 1,
     &VAR_6);
 if (VAR_5)
  return VAR_5;


 return FUNC_3(VAR_3, VAR_4, 2,
     &VAR_6);
}
