
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u_long ;
struct TYPE_4__ {scalar_t__ a_ptr; int a_val; } ;
struct TYPE_5__ {int a_type; TYPE_1__ a_un; } ;
typedef TYPE_2__ Elf_Auxinfo ;
 int VAR_0 ;





 TYPE_2__* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void
FUNC_0(void)
{
 Elf_Auxinfo *VAR_15;

 for (VAR_15 = VAR_1; VAR_15->a_type != VAR_0; VAR_15++) {
  switch (VAR_15->a_type) {
  case 138:
   VAR_2 = (char *)(VAR_15->a_un.a_ptr);
   break;

  case 137:
   VAR_3 = VAR_15->a_un.a_val;
   break;

  case 136:
   VAR_4 = (char *)(VAR_15->a_un.a_ptr);
   break;

  case 135:
   VAR_8 = 1;
   VAR_5 = (u_long)(VAR_15->a_un.a_val);
   break;

  case 134:
   VAR_7 = 1;
   VAR_6 = (u_long)(VAR_15->a_un.a_val);
   break;

  case 131:
   VAR_12 = (char *)(VAR_15->a_un.a_ptr);
   break;

  case 130:
   VAR_13 = VAR_15->a_un.a_val;
   break;

  case 129:
   VAR_11 = VAR_15->a_un.a_val;
   break;

  case 132:
   VAR_10 = VAR_15->a_un.a_val;
   break;

  case 133:
   VAR_9 = VAR_15->a_un.a_val;
   break;

  case 128:
   VAR_14 = VAR_15->a_un.a_ptr;
   break;
  }
 }
}
