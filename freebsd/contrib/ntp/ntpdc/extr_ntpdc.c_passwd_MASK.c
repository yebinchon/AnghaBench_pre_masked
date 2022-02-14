
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct parse {int nargs; TYPE_1__* argval; } ;
struct TYPE_2__ {char* string; } ;
typedef int FILE ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(
 struct parse *VAR_2,
 FILE *VAR_3
 )
{
 char *VAR_4;

 if (VAR_0 == 0) {
  VAR_0 = FUNC_3("Keyid: ");
  if (VAR_0 == 0) {
   (void)FUNC_2(VAR_3, "Keyid must be defined\n");
   return;
  }
 }
 if (VAR_2->nargs >= 1)
  VAR_4 = VAR_2->argval[0].string;
 else {
  VAR_4 = FUNC_4(VAR_1);
  if ('\0' == *VAR_4) {
   FUNC_2(VAR_3, "Password unchanged\n");
   return;
  }
 }
 FUNC_1(VAR_0, VAR_1, (u_char *)VAR_4);
 FUNC_0(VAR_0, 1);
}
