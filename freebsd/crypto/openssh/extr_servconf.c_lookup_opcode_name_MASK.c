
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {char const* name; scalar_t__ opcode; } ;
typedef scalar_t__ ServerOpCodes ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(ServerOpCodes VAR_1)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++)
  if (VAR_0[VAR_2].opcode == VAR_1)
   return(VAR_0[VAR_2].name);
 return "UNKNOWN";
}
