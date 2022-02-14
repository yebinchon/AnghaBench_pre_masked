
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int flags; int type; } ;
struct property {int type; } ;
struct menu {int flags; struct symbol* sym; struct property* prompt; struct menu* next; struct menu* list; } ;
typedef enum prop_type { ____Placeholder_prop_type } prop_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct menu* VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct menu*) ;
 int VAR_8 ;
 int FUNC_4 (struct menu*) ;
 scalar_t__ FUNC_5 (struct menu*) ;
 int FUNC_6 (struct menu*,int ) ;
 int FUNC_7 (char*,...) ;
 struct menu VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_8(struct menu *VAR_15)
{
 struct symbol *VAR_16;
 struct property *VAR_17;
 struct menu *VAR_18;
 enum prop_type VAR_19;

 if (VAR_15 == &VAR_9) {
  VAR_8 = 1;
  VAR_7 = &VAR_9;
 }

 for (VAR_18 = VAR_15->list; VAR_18; VAR_18 = VAR_18->next) {
  VAR_17 = VAR_18->prompt;
  VAR_16 = VAR_18->sym;
  VAR_19 = VAR_17 ? VAR_17->type : VAR_3;

  if (VAR_16)
   VAR_16->flags &= ~VAR_6;

  if ((VAR_14 == VAR_5)
      && !(VAR_18->flags & VAR_1) && (VAR_11 == VAR_12))
   continue;

  if ((VAR_14 == VAR_5) && (VAR_18->flags & VAR_1)
      && (VAR_11 == VAR_13))
   continue;

  if (FUNC_5(VAR_18) || VAR_10)
   FUNC_6(VAR_18, FUNC_3(VAR_18));
  if ((VAR_14 != VAR_0) && (VAR_19 == VAR_2)
      && (VAR_11 == VAR_13))
   continue;




  if (((VAR_14 == VAR_4) && (VAR_15->flags & VAR_1))
      || (VAR_14 == VAR_0)
      || (VAR_14 == VAR_5)) {
   VAR_8++;
   FUNC_8(VAR_18);
   VAR_8--;
  }
 }
}
