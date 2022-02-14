
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct axp2xx_softc {scalar_t__ npins; } ;
typedef int device_t ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct axp2xx_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, uint32_t VAR_4, char *VAR_5)
{
 struct axp2xx_softc *VAR_6;

 VAR_6 = FUNC_0(VAR_3);

 if (VAR_4 >= VAR_6->npins)
  return (VAR_0);

 FUNC_1(VAR_5, VAR_1, "%s", VAR_2[VAR_4].name);

 return (0);
}
