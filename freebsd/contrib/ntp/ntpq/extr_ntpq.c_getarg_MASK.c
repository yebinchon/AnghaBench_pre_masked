
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {char const* string; int ival; int uval; int netnum; } ;
typedef TYPE_1__ arg_v ;
struct TYPE_5__ {int assid; } ;







 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char const*,int *,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static int
FUNC_7(
 const char *VAR_5,
 int VAR_6,
 arg_v *VAR_7
 )
{
 u_long VAR_8;

 switch (VAR_6 & ~VAR_0) {
 case 129:
  VAR_7->string = VAR_5;
  break;

 case 131:
  if (!FUNC_4(VAR_5, &VAR_7->netnum, ((void*)0), 0))
   return 0;
  break;

 case 128:
  if ('&' == VAR_5[0]) {
   if (!FUNC_1(&VAR_5[1], &VAR_8)) {
    FUNC_3(VAR_3,
     "***Association index `%s' invalid/undecodable\n",
     VAR_5);
    return 0;
   }
   if (0 == VAR_2) {
    FUNC_2(VAR_4);
    if (0 == VAR_2) {
     FUNC_3(VAR_3,
      "***No associations found, `%s' unknown\n",
      VAR_5);
     return 0;
    }
   }
   VAR_8 = FUNC_5(VAR_8, VAR_2);
   VAR_7->uval = VAR_1[VAR_8 - 1].assid;
   break;
  }
  if (!FUNC_1(VAR_5, &VAR_7->uval)) {
   FUNC_3(VAR_3, "***Illegal unsigned value %s\n",
    VAR_5);
   return 0;
  }
  break;

 case 130:
  if (!FUNC_0(VAR_5, &VAR_7->ival)) {
   FUNC_3(VAR_3, "***Illegal integer value %s\n",
    VAR_5);
   return 0;
  }
  break;

 case 132:
  if (!FUNC_6("-6", VAR_5)) {
   VAR_7->ival = 6;
  } else if (!FUNC_6("-4", VAR_5)) {
   VAR_7->ival = 4;
  } else {
   FUNC_3(VAR_3, "***Version must be either 4 or 6\n");
   return 0;
  }
  break;
 }

 return 1;
}
