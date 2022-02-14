
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinmux_softc {int dummy; } ;
struct pincfg {int* params; int * function; } ;
typedef int phandle_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,char*,void**) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct pinmux_softc *VAR_3, phandle_t VAR_4, struct pincfg *VAR_5,
    char **VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9;

 *VAR_7 = FUNC_1(VAR_4, "nvidia,pins", (void **)VAR_6);
 if (*VAR_7 <= 0)
  return (VAR_0);


 VAR_8 = FUNC_1(VAR_4, "nvidia,function",
     (void **)&VAR_5->function);
 if (VAR_8 <= 0)
  VAR_5->function = ((void*)0);


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_8 = FUNC_0(VAR_4, VAR_2[VAR_9].name, &VAR_5->params[VAR_9],
      sizeof(VAR_5->params[VAR_9]));
  if (VAR_8 <= 0)
   VAR_5->params[VAR_9] = -1;
 }
 return (0);
}
