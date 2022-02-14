
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct as3722_softc {int dummy; } ;
struct as3722_pincfg {int flags; int * function; } ;
typedef int phandle_t ;
struct TYPE_3__ {int config; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,void**) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct as3722_softc *VAR_2, phandle_t VAR_3,
     struct as3722_pincfg *VAR_4, char **VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;

 *VAR_6 = FUNC_0(VAR_3, "pins", (void **)VAR_5);
 if (*VAR_6 <= 0)
  return (VAR_0);


 VAR_7 = FUNC_0(VAR_3, "function", (void **)&VAR_4->function);
 if (VAR_7 <= 0)
  VAR_4->function = ((void*)0);


 for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_1); VAR_8++) {
  if (FUNC_1(VAR_3, VAR_1[VAR_8].name))
   VAR_4->flags |= VAR_1[VAR_8].config;
 }
 return (0);
}
