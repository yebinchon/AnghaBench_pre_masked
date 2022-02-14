
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int dummy; } ;
struct iwm_fw_img {scalar_t__ is_dual_cpus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwm_softc*,int ,int ) ;
 int FUNC_2 (struct iwm_softc*) ;
 scalar_t__ FUNC_3 (struct iwm_softc*) ;
 int FUNC_4 (struct iwm_softc*) ;
 int FUNC_5 (struct iwm_softc*,struct iwm_fw_img const*,int,int*) ;
 int FUNC_6 (struct iwm_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct iwm_softc *VAR_4, const struct iwm_fw_img *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 FUNC_0(VAR_4, VAR_1, "working with %s CPU\n",
       VAR_5->is_dual_cpus ? "Dual" : "Single");


 VAR_6 = FUNC_5(VAR_4, VAR_5, 1, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->is_dual_cpus) {

  if (FUNC_3(VAR_4)) {
   FUNC_6(VAR_4,
           VAR_3,
           VAR_2);
   FUNC_4(VAR_4);
  }


  VAR_6 = FUNC_5(VAR_4, VAR_5, 2,
       &VAR_7);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_2(VAR_4);


 FUNC_1(VAR_4, VAR_0, 0);

 return 0;
}
