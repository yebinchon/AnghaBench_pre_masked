
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* name; char* comment; } ;
struct TYPE_5__ {char* name; char* comment; } ;
struct TYPE_4__ {char* name; char* comment; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*,...) ;
 TYPE_1__* VAR_2 ;

void
FUNC_1(void)
{
 size_t VAR_3;

 FUNC_0("Protocol versions:\n");
 for (VAR_3 = 0; VAR_2[VAR_3].name; VAR_3 ++) {
  FUNC_0("   %-8s %s\n",
   VAR_2[VAR_3].name,
   VAR_2[VAR_3].comment);
 }
 FUNC_0("Hash functions:\n");
 for (VAR_3 = 0; VAR_1[VAR_3].name; VAR_3 ++) {
  FUNC_0("   %-8s %s\n",
   VAR_1[VAR_3].name,
   VAR_1[VAR_3].comment);
 }
 FUNC_0("Cipher suites:\n");
 for (VAR_3 = 0; VAR_0[VAR_3].name; VAR_3 ++) {
  FUNC_0("   %s\n        %s\n",
   VAR_0[VAR_3].name,
   VAR_0[VAR_3].comment);
 }
}
