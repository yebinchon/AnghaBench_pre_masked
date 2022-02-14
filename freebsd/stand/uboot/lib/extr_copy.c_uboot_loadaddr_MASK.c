
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int u_int ;
struct sys_info {int mr_no; TYPE_1__* mr; } ;
struct TYPE_2__ {scalar_t__ flags; int size; scalar_t__ start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (char*,int *,int) ;
 char* FUNC_5 (char*) ;
 struct sys_info* FUNC_6 () ;
 scalar_t__ VAR_5 ;

uint64_t
FUNC_7(u_int VAR_6, void *VAR_7, uint64_t VAR_8)
{
 struct sys_info *VAR_9;
 uint64_t VAR_10, VAR_11, VAR_12, VAR_13;
 uint64_t VAR_14, VAR_15;
 uint64_t VAR_16, VAR_17;
 int VAR_18;
 char *VAR_19;

 if (VAR_8 == 0) {






  VAR_19 = FUNC_5("loader_kernaddr");
  if (VAR_19 != ((void*)0))
   return (FUNC_4(VAR_19, ((void*)0), 16));
  if ((VAR_9 = FUNC_6()) == ((void*)0))
   FUNC_0("could not retrieve system info");

  VAR_14 = 0;
  VAR_16 = 0;
  VAR_12 = FUNC_2((uintptr_t)VAR_4, VAR_0);
  VAR_13 = FUNC_3((uint64_t)VAR_5, VAR_0);
  for (VAR_18 = 0; VAR_18 < VAR_9->mr_no; VAR_18++) {
   if (VAR_9->mr[VAR_18].flags != VAR_2)
    continue;
   VAR_10 = FUNC_3((uint64_t)VAR_9->mr[VAR_18].start,
       VAR_0);
   VAR_11 = FUNC_2((uint64_t)VAR_9->mr[VAR_18].start +
       VAR_9->mr[VAR_18].size, VAR_0);
   if (VAR_16 == 0)
    VAR_10 += VAR_1;
   if (VAR_12 >= VAR_10 && VAR_12 < VAR_11) {
    if (VAR_12 - VAR_10 > VAR_11 - VAR_13) {
     VAR_15 = VAR_10;
     VAR_17 = VAR_12 - VAR_10;
    } else {
     VAR_15 = VAR_13;
     VAR_17 = VAR_11 - VAR_13;
    }
   } else if (VAR_12 < VAR_10 && VAR_13 < VAR_11) {

    VAR_15 = (VAR_13 < VAR_10) ? VAR_10 : VAR_13;
    VAR_17 = VAR_11 - VAR_15;
   } else {
    VAR_15 = 0;
    VAR_17 = 0;
   }
   if (VAR_16 < VAR_17) {
    VAR_14 = VAR_15;
    VAR_16 = VAR_17;
   }
  }
  if (VAR_16 == 0)
   FUNC_0("Not enough DRAM to load kernel");






  return (VAR_14);
 }
 return FUNC_3(VAR_8, VAR_3);
}
