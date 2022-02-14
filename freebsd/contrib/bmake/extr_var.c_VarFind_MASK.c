
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; int val; int name; } ;
typedef TYPE_1__ Var ;
struct TYPE_10__ {int context; } ;
typedef int Hash_Entry ;
typedef TYPE_2__ GNode ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int *) ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;
 TYPE_2__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (char const*) ;
 scalar_t__ VAR_14 ;
 char* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static Var *
FUNC_10(const char *VAR_15, GNode *VAR_16, int VAR_17)
{
    Hash_Entry *VAR_18;
    Var *VAR_19;







 if (*VAR_15 == '.' && FUNC_7((unsigned char) VAR_15[1]))
  switch (VAR_15[1]) {
  case 'A':
   if (!FUNC_8(VAR_15, ".ALLSRC"))
    VAR_15 = VAR_0;
   if (!FUNC_8(VAR_15, ".ARCHIVE"))
    VAR_15 = VAR_1;
   break;
  case 'I':
   if (!FUNC_8(VAR_15, ".IMPSRC"))
    VAR_15 = VAR_5;
   break;
  case 'M':
   if (!FUNC_8(VAR_15, ".MEMBER"))
    VAR_15 = VAR_6;
   break;
  case 'O':
   if (!FUNC_8(VAR_15, ".OODATE"))
    VAR_15 = VAR_7;
   break;
  case 'P':
   if (!FUNC_8(VAR_15, ".PREFIX"))
    VAR_15 = VAR_8;
   break;
  case 'T':
   if (!FUNC_8(VAR_15, ".TARGET"))
    VAR_15 = VAR_9;
   break;
  }
    VAR_18 = FUNC_2(&VAR_16->context, VAR_15);

    if ((VAR_18 == ((void*)0)) && (VAR_17 & VAR_2) && (VAR_16 != VAR_10)) {
 VAR_18 = FUNC_2(&VAR_10->context, VAR_15);
    }
    if (!VAR_14 && (VAR_18 == ((void*)0)) && (VAR_17 & VAR_4) &&
 (VAR_16 != VAR_12))
    {
 VAR_18 = FUNC_2(&VAR_12->context, VAR_15);
 if ((VAR_18 == ((void*)0)) && (VAR_16 != VAR_13)) {

     VAR_18 = FUNC_2(&VAR_13->context, VAR_15);
 }
    }
    if ((VAR_18 == ((void*)0)) && (VAR_17 & VAR_3)) {
 char *VAR_20;

 if ((VAR_20 = FUNC_6(VAR_15)) != ((void*)0)) {
     int VAR_21;

     VAR_19 = FUNC_4(sizeof(Var));
     VAR_19->name = FUNC_5(VAR_15);

     VAR_21 = FUNC_9(VAR_20);

     FUNC_1(&VAR_19->val, VAR_21 + 1);
     FUNC_0(&VAR_19->val, VAR_21, VAR_20);

     VAR_19->flags = VAR_11;
     return (VAR_19);
 } else if (VAR_14 && (VAR_17 & VAR_4) &&
     (VAR_16 != VAR_12))
 {
     VAR_18 = FUNC_2(&VAR_12->context, VAR_15);
     if ((VAR_18 == ((void*)0)) && (VAR_16 != VAR_13)) {
  VAR_18 = FUNC_2(&VAR_13->context, VAR_15);
     }
     if (VAR_18 == ((void*)0)) {
  return ((void*)0);
     } else {
  return ((Var *)FUNC_3(VAR_18));
     }
 } else {
     return ((void*)0);
 }
    } else if (VAR_18 == ((void*)0)) {
 return ((void*)0);
    } else {
 return ((Var *)FUNC_3(VAR_18));
    }
}
