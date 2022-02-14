
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct var {int flags; int name_len; char* text; int (* func ) (char*) ;struct var* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 struct var* FUNC_3 (int) ;
 int FUNC_4 (char*,int,char*) ;
 struct var* FUNC_5 (char*,struct var***,int*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 struct var VAR_14 ;
 struct var VAR_15 ;

void
FUNC_12(char *VAR_16, int VAR_17)
{
 struct var *VAR_18, **VAR_19;
 int VAR_20;

 if (VAR_11)
  VAR_17 |= VAR_3;
 if (VAR_12 && !(VAR_17 & (VAR_6 | VAR_5)))
  FUNC_7(VAR_16);
 VAR_18 = FUNC_5(VAR_16, &VAR_19, &VAR_20);
 if (VAR_18 != ((void*)0)) {
  if (VAR_18->flags & VAR_7) {
   if ((VAR_17 & (VAR_9|VAR_8)) == 0)
    FUNC_2(VAR_16);
   FUNC_4("%.*s: is read only", VAR_18->name_len, VAR_18->text);
  }
  if (VAR_17 & VAR_6) {
   if ((VAR_17 & (VAR_9|VAR_8)) == 0)
    FUNC_2(VAR_16);
   return;
  }
  VAR_0;

  if (VAR_18->func && (VAR_17 & VAR_4) == 0)
   (*VAR_18->func)(VAR_16 + VAR_18->name_len + 1);

  if ((VAR_18->flags & (VAR_9|VAR_8)) == 0)
   FUNC_2(VAR_18->text);

  VAR_18->flags &= ~(VAR_9|VAR_8|VAR_10);
  VAR_18->flags |= VAR_17;
  VAR_18->text = VAR_16;
  if ((VAR_18 == &VAR_15 || (VAR_18 == &VAR_14 && ! FUNC_8())) &&
      VAR_13 == 1)
   FUNC_1(1);
  if ((VAR_18->flags & VAR_3) && FUNC_6(VAR_16)) {
   FUNC_0(VAR_16, 1);
   (void) FUNC_9(VAR_2, "");
   FUNC_11();
  }
  VAR_1;
  return;
 }

 if (VAR_17 & VAR_6) {
  if ((VAR_17 & (VAR_9|VAR_8)) == 0)
   FUNC_2(VAR_16);
  return;
 }
 VAR_0;
 VAR_18 = FUNC_3(sizeof (*VAR_18));
 VAR_18->flags = VAR_17;
 VAR_18->text = VAR_16;
 VAR_18->name_len = VAR_20;
 VAR_18->next = *VAR_19;
 VAR_18->func = ((void*)0);
 *VAR_19 = VAR_18;
 if ((VAR_18->flags & VAR_3) && FUNC_6(VAR_16)) {
  FUNC_0(VAR_16, 1);
  (void) FUNC_9(VAR_2, "");
  FUNC_11();
 }
 VAR_1;
}
