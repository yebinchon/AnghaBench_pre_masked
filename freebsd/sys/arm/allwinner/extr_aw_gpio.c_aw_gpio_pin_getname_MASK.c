
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct aw_gpio_softc {TYPE_2__* padconf; } ;
typedef int device_t ;
struct TYPE_4__ {size_t npins; TYPE_1__* pins; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aw_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{
 struct aw_gpio_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_3 >= VAR_5->padconf->npins)
  return (VAR_0);

 FUNC_1(VAR_4, VAR_1 - 1, "%s",
     VAR_5->padconf->pins[VAR_3].name);
 VAR_4[VAR_1 - 1] = '\0';

 return (0);
}
