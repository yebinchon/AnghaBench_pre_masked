
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {char const* name; scalar_t__ val; } ;
typedef scalar_t__ LogLevel ;


 TYPE_1__* VAR_0 ;

const char *
FUNC_0(LogLevel VAR_1)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++)
  if (VAR_0[VAR_2].val == VAR_1)
   return VAR_0[VAR_2].name;
 return ((void*)0);
}
