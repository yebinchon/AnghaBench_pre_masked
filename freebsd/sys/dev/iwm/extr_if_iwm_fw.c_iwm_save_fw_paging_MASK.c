
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int dummy; } ;
struct iwm_fw_img {int dummy; } ;


 int FUNC_0 (struct iwm_softc*,struct iwm_fw_img const*) ;
 int FUNC_1 (struct iwm_softc*,struct iwm_fw_img const*) ;

int
FUNC_2(struct iwm_softc *VAR_0, const struct iwm_fw_img *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_1);
}
