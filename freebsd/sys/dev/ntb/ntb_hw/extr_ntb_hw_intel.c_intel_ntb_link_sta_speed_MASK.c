
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {int lnk_sta; } ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ntb_softc*) ;

__attribute__((used)) static inline enum ntb_speed
FUNC_1(struct ntb_softc *VAR_2)
{

 if (!FUNC_0(VAR_2))
  return (VAR_1);
 return (VAR_2->lnk_sta & VAR_0);
}
