
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * device_t ;
typedef TYPE_1__* devclass_t ;
struct TYPE_4__ {char* name; int maxunit; int ** devices; } ;


 int FUNC_0 (int ,int *,char*,int*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,int **,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int **,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;
 int ** FUNC_7 (int,int ,int ) ;
 int FUNC_8 (char*,char*,char*,int) ;
 scalar_t__ FUNC_9 (char*,int,char*,char const**) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int
FUNC_11(devclass_t VAR_6, device_t VAR_7, int *VAR_8)
{
 const char *VAR_9;
 int VAR_10 = *VAR_8;

 FUNC_2(("unit %d in devclass %s", VAR_10, FUNC_1(VAR_6)));


 if (VAR_10 == -1)
  FUNC_0(FUNC_5(VAR_7), VAR_7, VAR_6->name,
      &VAR_10);



 if (VAR_10 != -1) {
  if (VAR_10 >= 0 && VAR_10 < VAR_6->maxunit &&
      VAR_6->devices[VAR_10] != ((void*)0)) {
   if (VAR_5)
    FUNC_8("%s: %s%d already exists; skipping it\n",
        VAR_6->name, VAR_6->name, *VAR_8);
   return (VAR_0);
  }
 } else {

  VAR_10 = 0;
  for (VAR_10 = 0;; VAR_10++) {

   if (FUNC_9(VAR_6->name, VAR_10, "at", &VAR_9) ==
       0)
    continue;


   if (VAR_10 < VAR_6->maxunit && VAR_6->devices[VAR_10] != ((void*)0))
    continue;

   break;
  }
 }






 if (VAR_10 >= VAR_6->maxunit) {
  device_t *VAR_11, *VAR_12;
  int VAR_13;

  VAR_12 = VAR_6->devices;
  VAR_13 = FUNC_10((VAR_10 + 1), VAR_2 / sizeof(device_t));
  VAR_11 = FUNC_7(sizeof(device_t) * VAR_13, VAR_3, VAR_4);
  if (!VAR_11)
   return (VAR_1);
  if (VAR_12 != ((void*)0))
   FUNC_3(VAR_12, VAR_11, sizeof(device_t) * VAR_6->maxunit);
  FUNC_4(VAR_11 + VAR_6->maxunit,
      sizeof(device_t) * (VAR_13 - VAR_6->maxunit));
  VAR_6->devices = VAR_11;
  VAR_6->maxunit = VAR_13;
  if (VAR_12 != ((void*)0))
   FUNC_6(VAR_12, VAR_3);
 }
 FUNC_2(("now: unit %d in devclass %s", VAR_10, FUNC_1(VAR_6)));

 *VAR_8 = VAR_10;
 return (0);
}
