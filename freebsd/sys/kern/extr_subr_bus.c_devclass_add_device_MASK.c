
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
typedef TYPE_2__* devclass_t ;
struct TYPE_10__ {char* name; TYPE_1__** devices; } ;
struct TYPE_9__ {size_t unit; int * nameunit; TYPE_2__* devclass; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,size_t*) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int,int ,int) ;
 int FUNC_6 (int *,int,char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_7(devclass_t VAR_5, device_t VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_2(("%s in devclass %s", FUNC_1(VAR_6), FUNC_0(VAR_5)));

 VAR_7 = FUNC_6(((void*)0), 0, "%s%d$", VAR_5->name, VAR_1);
 if (VAR_7 < 0)
  return (VAR_0);
 VAR_6->nameunit = FUNC_5(VAR_7, VAR_2, VAR_3|VAR_4);
 if (!VAR_6->nameunit)
  return (VAR_0);

 if ((VAR_8 = FUNC_3(VAR_5, VAR_6, &VAR_6->unit)) != 0) {
  FUNC_4(VAR_6->nameunit, VAR_2);
  VAR_6->nameunit = ((void*)0);
  return (VAR_8);
 }
 VAR_5->devices[VAR_6->unit] = VAR_6;
 VAR_6->devclass = VAR_5;
 FUNC_6(VAR_6->nameunit, VAR_7, "%s%d", VAR_5->name, VAR_6->unit);

 return (0);
}
