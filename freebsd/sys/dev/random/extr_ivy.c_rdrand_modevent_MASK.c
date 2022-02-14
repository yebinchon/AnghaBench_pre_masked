
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_4__ {char* rs_ident; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(module_t VAR_4, int VAR_5, void *VAR_6)
{
 int VAR_7 = 0;

 switch (VAR_5) {
 case 130:
  if (VAR_1 || VAR_2) {
   FUNC_2(&VAR_3);
   FUNC_0("random: fast provider: \"%s\"\n", VAR_3.rs_ident);
  }
  break;

 case 128:
  if (VAR_1 || VAR_2)
   FUNC_1(&VAR_3);
  break;

 case 129:
  break;

 default:
  VAR_7 = VAR_0;
  break;

 }

 return (VAR_7);
}
