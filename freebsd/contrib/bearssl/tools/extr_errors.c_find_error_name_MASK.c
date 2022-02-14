
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; int err; char* comment; } ;


 TYPE_1__* VAR_0 ;

const char *
FUNC_0(int VAR_1, const char **VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3].name; VAR_3 ++) {
  if (VAR_0[VAR_3].err == VAR_1) {
   if (VAR_2 != ((void*)0)) {
    *VAR_2 = VAR_0[VAR_3].comment;
   }
   return VAR_0[VAR_3].name;
  }
 }
 return ((void*)0);
}
