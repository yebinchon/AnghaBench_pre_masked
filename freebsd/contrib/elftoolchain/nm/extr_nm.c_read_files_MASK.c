
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* def_filename; } ;
struct TYPE_3__ {scalar_t__ print_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(int VAR_4, char **VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4 < 0 || VAR_5 == ((void*)0))
  return (1);

 if (VAR_4 == 0)
  VAR_6 |= FUNC_0(VAR_2.def_filename);
 else {
  if (VAR_3.print_name == VAR_1 && VAR_4 > 1)
   VAR_3.print_name = VAR_0;
  while (VAR_4 > 0) {
   VAR_6 |= FUNC_0(*VAR_5);
   --VAR_4;
   ++VAR_5;
  }
 }

 return (VAR_6);
}
