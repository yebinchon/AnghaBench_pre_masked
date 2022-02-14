
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pl_prop; char* pl_width; struct TYPE_4__* pl_next; int pl_user_prop; } ;
typedef TYPE_1__ zprop_list_t ;
typedef int zfs_handle_t ;
typedef int property ;
typedef int nvlist_t ;
struct TYPE_5__ {scalar_t__ cb_scripted; int cb_literal; TYPE_1__* cb_proplist; } ;
typedef TYPE_2__ list_cbdata_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int ,char**) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *,scalar_t__,char*,int,int *,int *,int ,int ) ;
 scalar_t__ FUNC_9 (int *,int ,char*,int,int ) ;
 scalar_t__ FUNC_10 (int *,int ,char*,int,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(zfs_handle_t *VAR_6, list_cbdata_t *VAR_7)
{
 zprop_list_t *VAR_8 = VAR_7->cb_proplist;
 boolean_t VAR_9 = VAR_1;
 char VAR_10[VAR_2];
 nvlist_t *VAR_11 = FUNC_6(VAR_6);
 nvlist_t *VAR_12;
 char *VAR_13;
 boolean_t VAR_14;

 for (; VAR_8 != ((void*)0); VAR_8 = VAR_8->pl_next) {
  if (!VAR_9) {
   if (VAR_7->cb_scripted)
    (void) FUNC_2("\t");
   else
    (void) FUNC_2("  ");
  } else {
   VAR_9 = VAR_0;
  }

  if (VAR_8->pl_prop == VAR_3) {
   (void) FUNC_3(VAR_10, FUNC_5(VAR_6),
       sizeof (VAR_10));
   VAR_13 = VAR_10;
   VAR_14 = FUNC_7(VAR_8->pl_prop);
  } else if (VAR_8->pl_prop != VAR_4) {
   if (FUNC_8(VAR_6, VAR_8->pl_prop, VAR_10,
       sizeof (VAR_10), ((void*)0), ((void*)0), 0,
       VAR_7->cb_literal) != 0)
    VAR_13 = "-";
   else
    VAR_13 = VAR_10;
   VAR_14 = FUNC_7(VAR_8->pl_prop);
  } else if (FUNC_11(VAR_8->pl_user_prop)) {
   if (FUNC_9(VAR_6, VAR_8->pl_user_prop,
       VAR_10, sizeof (VAR_10), VAR_7->cb_literal) != 0)
    VAR_13 = "-";
   else
    VAR_13 = VAR_10;
   VAR_14 = VAR_1;
  } else if (FUNC_12(VAR_8->pl_user_prop)) {
   if (FUNC_10(VAR_6, VAR_8->pl_user_prop,
       VAR_10, sizeof (VAR_10), VAR_7->cb_literal) != 0)
    VAR_13 = "-";
   else
    VAR_13 = VAR_10;
   VAR_14 = VAR_1;
  } else {
   if (FUNC_0(VAR_11,
       VAR_8->pl_user_prop, &VAR_12) != 0)
    VAR_13 = "-";
   else
    FUNC_4(FUNC_1(VAR_12,
        VAR_5, &VAR_13) == 0);
   VAR_14 = VAR_0;
  }






  if (VAR_7->cb_scripted || (VAR_8->pl_next == ((void*)0) && !VAR_14))
   (void) FUNC_2("%s", VAR_13);
  else if (VAR_14)
   (void) FUNC_2("%*s", VAR_8->pl_width, VAR_13);
  else
   (void) FUNC_2("%-*s", VAR_8->pl_width, VAR_13);
 }

 (void) FUNC_2("\n");
}
