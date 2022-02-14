
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pmask; scalar_t__ nvi; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_6__ {scalar_t__ portvec; TYPE_2__ vfres; TYPE_1__ rss; } ;
struct adapter {TYPE_3__ params; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;

__attribute__((used)) static int
FUNC_5(struct adapter *VAR_2)
{
 int VAR_3;

 VAR_3 = -FUNC_3(VAR_2);
 if (VAR_3 != 0) {
  FUNC_0(VAR_2->dev,
      "unable to retrieve adapter SGE parameters: %d\n", VAR_3);
  return (VAR_3);
 }

 VAR_3 = -FUNC_2(VAR_2);
 if (VAR_3 != 0) {
  FUNC_0(VAR_2->dev,
      "unable to retrieve adapter RSS parameters: %d\n", VAR_3);
  return (VAR_3);
 }
 if (VAR_2->params.rss.mode != VAR_1) {
  FUNC_0(VAR_2->dev,
      "unable to operate with global RSS mode %d\n",
      VAR_2->params.rss.mode);
  return (VAR_0);
 }

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);






 VAR_3 = -FUNC_4(VAR_2);
 if (VAR_3 != 0) {
  FUNC_0(VAR_2->dev,
      "unable to get virtual interface resources: %d\n", VAR_3);
  return (VAR_3);
 }




 if (VAR_2->params.vfres.pmask == 0) {
  FUNC_0(VAR_2->dev, "no port access configured/usable!\n");
  return (VAR_0);
 }
 if (VAR_2->params.vfres.nvi == 0) {
  FUNC_0(VAR_2->dev,
      "no virtual interfaces configured/usable!\n");
  return (VAR_0);
 }
 VAR_2->params.portvec = VAR_2->params.vfres.pmask;

 return (0);
}
