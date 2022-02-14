
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int type; char* name; int parents; int children; int unmade; int order_succ; int order_pred; } ;
typedef int LstNode ;
typedef int Lst ;
typedef TYPE_1__ GNode ;


 int FUNC_0 (char**,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_13 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_14 (char*,TYPE_1__*,int,int*,void**) ;
 char* FUNC_15 (int *,char*,TYPE_1__*,int) ;
 int VAR_7 ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (char*) ;
 int * FUNC_18 (char*,char) ;
 char* VAR_8 ;

__attribute__((used)) static void
FUNC_19(LstNode VAR_9, GNode *VAR_10)
{
    GNode *VAR_11 = (GNode *)FUNC_3(VAR_9);
    GNode *VAR_12;
    char *VAR_13;

    if (!FUNC_8(VAR_11->order_pred) || !FUNC_8(VAR_11->order_succ))

 return;

    if (VAR_11->type & VAR_2)

 return;







    if (FUNC_18(VAR_11->name, '$') == ((void*)0)) {
 FUNC_12(VAR_9, VAR_10);
 return;
    }

    if (FUNC_1(VAR_3)) {
 FUNC_16(VAR_7, "Expanding \"%s\"...", VAR_11->name);
    }
    VAR_13 = FUNC_15(((void*)0), VAR_11->name, VAR_10, VAR_5|VAR_6);

    if (VAR_13 != ((void*)0)) {
 Lst VAR_14 = FUNC_6(VAR_0);

 if (VAR_11->type & VAR_1) {





     char *VAR_15 = VAR_13;

     (void)FUNC_0(&VAR_15, VAR_14, VAR_10);
 } else {







     char *VAR_16;
     char *VAR_17 = VAR_13;

     for (VAR_16 = VAR_13; *VAR_16 == ' ' || *VAR_16 == '\t'; VAR_16++)
  continue;
     for (VAR_13 = VAR_16; *VAR_13 != '\0'; VAR_13++) {
  if (*VAR_13 == ' ' || *VAR_13 == '\t') {




      *VAR_13++ = '\0';
      VAR_12 = FUNC_13(VAR_16, VAR_4);
      (void)FUNC_2(VAR_14, VAR_12);
      while (*VAR_13 == ' ' || *VAR_13 == '\t') {
   VAR_13++;
      }




      VAR_16 = VAR_13--;
  } else if (*VAR_13 == '$') {




      char *VAR_18;
      int VAR_19;
      void *VAR_20;

      VAR_18 = FUNC_14(VAR_13, VAR_10, VAR_5|VAR_6,
   &VAR_19, &VAR_20);
      if (VAR_18 != VAR_8) {
   VAR_13 += VAR_19 - 1;
      }

      FUNC_17(VAR_20);
  } else if (*VAR_13 == '\\' && VAR_13[1] != '\0') {



      VAR_13++;
  }
     }

     if (VAR_13 != VAR_16) {



  VAR_12 = FUNC_13(VAR_16, VAR_4);
  (void)FUNC_2(VAR_14, VAR_12);
     }




     VAR_13 = VAR_17;
 }




 while(!FUNC_8(VAR_14)) {
     VAR_12 = (GNode *)FUNC_4(VAR_14);

     if (FUNC_1(VAR_3)) {
  FUNC_16(VAR_7, "%s...", VAR_12->name);
     }

     (void)FUNC_7(VAR_10->children, VAR_9, VAR_12);
     (void)FUNC_2(VAR_12->parents, VAR_10);
     VAR_10->unmade++;

     FUNC_12(FUNC_10(VAR_9), VAR_10);
 }
 FUNC_5(VAR_14, ((void*)0));




 FUNC_17(VAR_13);
    }
    if (FUNC_1(VAR_3)) {
 FUNC_16(VAR_7, "\n");
    }





    VAR_10->unmade--;
    FUNC_11(VAR_10->children, VAR_9);
    FUNC_11(VAR_11->parents, FUNC_9(VAR_11->parents, VAR_10));
}
