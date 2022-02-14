
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {char* string; int type; int uval; int ival; int netnum; } ;
typedef TYPE_1__ arg_v ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (TYPE_1__) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int *,char*,int ) ;
 int VAR_4 ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(
 char *VAR_5,
 int VAR_6,
 arg_v *VAR_7
 )
{
 int VAR_8;
 char *VAR_9, *VAR_10;
 static const char *VAR_11 = "0123456789";

 FUNC_0(*VAR_7);
 VAR_7->string = VAR_5;
 VAR_7->type = VAR_6 & ~VAR_2;

 switch (VAR_7->type) {
     case 129:
  break;
     case 131:
  if (!FUNC_4("-6", VAR_5)) {
   VAR_3 = VAR_1;
   return -1;
  } else if (!FUNC_4("-4", VAR_5)) {
   VAR_3 = VAR_0;
   return -1;
  }
  if (!FUNC_2(VAR_5, &(VAR_7->netnum), (char *)0, 0)) {
   return 0;
  }
  break;
     case 130:
     case 128:
  VAR_8 = 0;
  VAR_10 = VAR_5;
  if (*VAR_10 == '-') {
   VAR_10++;
   VAR_8 = 1;
  }

  VAR_7->uval = 0;
  do {
   VAR_9 = FUNC_3(VAR_11, *VAR_10);
   if (VAR_9 == ((void*)0)) {
    (void) FUNC_1(VAR_4,
            "***Illegal integer value %s\n", VAR_5);
    return 0;
   }
   VAR_7->uval *= 10;
   VAR_7->uval += (u_long)(VAR_9 - VAR_11);
  } while (*(++VAR_10) != '\0');

  if (VAR_8) {
   if ((VAR_6 & ~VAR_2) == 128) {
    (void) FUNC_1(VAR_4,
            "***Value %s should be unsigned\n", VAR_5);
    return 0;
   }
   VAR_7->ival = -VAR_7->ival;
  }
  break;
     case 132:
  if (!FUNC_4("-6", VAR_5))
   VAR_7->ival = 6 ;
  else if (!FUNC_4("-4", VAR_5))
   VAR_7->ival = 4 ;
  else {
   (void) FUNC_1(VAR_4,
       "***Version must be either 4 or 6\n");
   return 0;
  }
  break;
 }

 return 1;
}
