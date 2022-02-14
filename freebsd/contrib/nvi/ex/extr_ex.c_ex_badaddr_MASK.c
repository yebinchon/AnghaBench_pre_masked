
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_long ;
typedef int recno_t ;
typedef enum nresult { ____Placeholder_nresult } nresult ;
typedef enum badaddr { ____Placeholder_badaddr } badaddr ;
struct TYPE_10__ {int * name; } ;
struct TYPE_9__ {int * ep; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXCMDLIST ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,char*,...) ;
 int FUNC_4 (TYPE_1__*,int ,int *,char*) ;

void
FUNC_5(SCR *VAR_3, const EXCMDLIST *VAR_4, enum badaddr VAR_5, enum nresult VAR_6)
{
 recno_t VAR_7;

 switch (VAR_6) {
 case 130:
  break;
 case 131:
  FUNC_3(VAR_3, VAR_2, ((void*)0));
  return;
 case 129:
  FUNC_3(VAR_3, VAR_1, "099|Address value overflow");
  return;
 case 128:
  FUNC_3(VAR_3, VAR_1, "100|Address value underflow");
  return;
 }





 if (VAR_3->ep == ((void*)0)) {
  FUNC_2(VAR_3, VAR_4 ? VAR_4->name : ((void*)0), VAR_0);
  return;
 }

 switch (VAR_5) {
 case 136:
  FUNC_3(VAR_3, VAR_1, "101|Illegal address combination");
  break;
 case 134:
  if (FUNC_1(VAR_3, &VAR_7))
   return;
  if (VAR_7 != 0) {
   FUNC_3(VAR_3, VAR_1,
       "102|Illegal address: only %lu lines in the file",
       (u_long)VAR_7);
   break;
  }

 case 135:
  FUNC_3(VAR_3, VAR_1, "103|Illegal address: the file is empty");
  break;
 case 133:
  FUNC_0();

 case 132:
  FUNC_4(VAR_3, VAR_1, VAR_4->name,
      "104|The %s command doesn't permit an address of 0");
  break;
 }
 return;
}
