
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pl_prop; char* pl_user_prop; char* pl_width; struct TYPE_4__* pl_next; } ;
typedef TYPE_1__ zprop_list_t ;
struct TYPE_5__ {TYPE_1__* cb_proplist; } ;
typedef TYPE_2__ list_cbdata_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 char FUNC_1 (char) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(list_cbdata_t *VAR_4)
{
 zprop_list_t *VAR_5 = VAR_4->cb_proplist;
 char VAR_6[VAR_2];
 const char *VAR_7;
 int VAR_8;
 boolean_t VAR_9 = VAR_1;
 boolean_t VAR_10;

 for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->pl_next) {
  if (!VAR_9) {
   (void) FUNC_0("  ");
  } else {
   VAR_9 = VAR_0;
  }

  VAR_10 = VAR_0;
  if (VAR_5->pl_prop != VAR_3) {
   VAR_7 = FUNC_3(VAR_5->pl_prop);
   VAR_10 = FUNC_2(VAR_5->pl_prop);
  } else {
   for (VAR_8 = 0; VAR_5->pl_user_prop[VAR_8] != '\0'; VAR_8++)
    VAR_6[VAR_8] = FUNC_1(VAR_5->pl_user_prop[VAR_8]);
   VAR_6[VAR_8] = '\0';
   VAR_7 = VAR_6;
  }

  if (VAR_5->pl_next == ((void*)0) && !VAR_10)
   (void) FUNC_0("%s", VAR_7);
  else if (VAR_10)
   (void) FUNC_0("%*s", VAR_5->pl_width, VAR_7);
  else
   (void) FUNC_0("%-*s", VAR_5->pl_width, VAR_7);
 }

 (void) FUNC_0("\n");
}
