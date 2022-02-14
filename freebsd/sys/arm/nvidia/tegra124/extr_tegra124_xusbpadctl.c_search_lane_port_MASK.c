
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padctl_softc {int dummy; } ;
struct padctl_port {struct padctl_lane* lane; int enabled; } ;
struct padctl_lane {int dummy; } ;


 int FUNC_0 (struct padctl_port*) ;
 struct padctl_port* VAR_0 ;

__attribute__((used)) static struct padctl_port *
FUNC_1(struct padctl_softc *VAR_1, struct padctl_lane *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (!VAR_0[VAR_3].enabled)
   continue;
  if (VAR_0[VAR_3].lane == VAR_2)
   return (VAR_0 + VAR_3);
 }
 return (((void*)0));
}
