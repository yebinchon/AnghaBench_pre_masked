
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct elfdump {TYPE_1__* sl; int shnum; } ;
typedef int num ;
struct TYPE_2__ {char const* name; } ;





 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(struct elfdump *VAR_0, int VAR_1)
{
 static char VAR_2[10];

 switch (VAR_1) {
 case 128: return "UNDEF";
 case 130: return "ABS";
 case 129: return "COMMON";
 default:
  if ((uint64_t)VAR_1 < VAR_0->shnum)
   return (VAR_0->sl[VAR_1].name);
  else {
   FUNC_0(VAR_2, sizeof(VAR_2), "%d", VAR_1);
   return (VAR_2);
  }
 }
}
