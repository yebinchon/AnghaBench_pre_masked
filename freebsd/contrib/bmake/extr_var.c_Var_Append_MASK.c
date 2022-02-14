
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int flags; int val; } ;
typedef TYPE_1__ Var ;
struct TYPE_12__ {char* name; int context; } ;
typedef int Hash_Entry ;
typedef TYPE_2__ GNode ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,int ,char const*) ;
 char* FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_4 (int *,char const*,int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* FUNC_6 (char const*,TYPE_2__*,int) ;
 int FUNC_7 (char const*,char const*,TYPE_2__*,int ) ;
 char* FUNC_8 (int *,char const*,TYPE_2__*,int ) ;
 int VAR_8 ;
 int FUNC_9 (int ,char*,char const*,char const*,...) ;
 int FUNC_10 (char*) ;
 int * FUNC_11 (char const*,char) ;
 int FUNC_12 (char const*) ;

void
FUNC_13(const char *VAR_9, const char *VAR_10, GNode *VAR_11)
{
    Var *VAR_12;
    Hash_Entry *VAR_13;
    char *VAR_14 = ((void*)0);

    if (FUNC_11(VAR_9, '$') != ((void*)0)) {
 VAR_14 = FUNC_8(((void*)0), VAR_9, VAR_11, VAR_3);
 if (VAR_14[0] == 0) {
     if (FUNC_3(VAR_2)) {
  FUNC_9(VAR_8, "Var_Append(\"%s\", \"%s\", ...) "
   "name expands to empty string - ignored\n",
   VAR_9, VAR_10);
     }
     FUNC_10(VAR_14);
     return;
 }
 VAR_9 = VAR_14;
    }

    VAR_12 = FUNC_6(VAR_9, VAR_11, (VAR_11 == VAR_7) ? (VAR_0|VAR_1) : 0);

    if (VAR_12 == ((void*)0)) {
 FUNC_7(VAR_9, VAR_10, VAR_11, 0);
    } else if (VAR_11 == VAR_4 || !(VAR_12->flags & VAR_5)) {
 FUNC_0(&VAR_12->val, ' ');
 FUNC_1(&VAR_12->val, FUNC_12(VAR_10), VAR_10);

 if (FUNC_3(VAR_2)) {
     FUNC_9(VAR_8, "%s:%s = %s\n", VAR_11->name, VAR_9,
     FUNC_2(&VAR_12->val, ((void*)0)));
 }

 if (VAR_12->flags & VAR_6) {






     VAR_12->flags &= ~VAR_6;
     VAR_13 = FUNC_4(&VAR_11->context, VAR_9, ((void*)0));
     FUNC_5(VAR_13, VAR_12);
 }
    }
    FUNC_10(VAR_14);
}
