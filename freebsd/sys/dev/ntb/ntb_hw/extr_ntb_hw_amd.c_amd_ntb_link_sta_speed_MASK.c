
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_softc {int lnk_sta; } ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct amd_ntb_softc*) ;

__attribute__((used)) static inline enum ntb_speed
FUNC_2(struct amd_ntb_softc *VAR_1)
{

 if (!FUNC_1(VAR_1))
  return (VAR_0);

 return (FUNC_0(VAR_1->lnk_sta));
}
