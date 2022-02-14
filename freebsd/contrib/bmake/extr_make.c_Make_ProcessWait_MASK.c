
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flags; int type; char* name; int children; int cohorts; } ;
typedef int * LstNode ;
typedef int Lst ;
typedef TYPE_1__ GNode ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_1__* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,TYPE_1__*) ;
 int FUNC_11 (int ,int *,int ,TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_3 ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 () ;
 TYPE_1__* FUNC_18 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_19 (int ,char*,char*) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_20(Lst VAR_12)
{
    GNode *VAR_13;
    GNode *VAR_14;
    LstNode VAR_15;
    Lst VAR_16;
    LstNode VAR_17;







    VAR_13 = FUNC_18(".MAIN");
    VAR_13->flags = VAR_8;
    VAR_13->type = VAR_6 | VAR_4;

    FUNC_2(FUNC_17(), VAR_13);

    FUNC_10(VAR_12, VAR_11, VAR_13);


    FUNC_16(VAR_13, ((void*)0));

    VAR_16 = FUNC_12(VAR_1);
    FUNC_1(VAR_16, VAR_13);

    while (!FUNC_13 (VAR_16)) {
 VAR_13 = FUNC_6(VAR_16);


 if (VAR_13->flags & VAR_0)
     continue;
 VAR_13->flags |= VAR_0;
 if (FUNC_0(VAR_3))
     FUNC_19(VAR_10, "Make_ProcessWait: examine %s\n", VAR_13->name);

 if ((VAR_13->type & VAR_5) && !FUNC_13 (VAR_13->cohorts)) {

     Lst VAR_18;
     VAR_18 = FUNC_8(VAR_13->cohorts, ((void*)0));
     FUNC_4(VAR_18, VAR_16, VAR_2);
     VAR_16 = VAR_18;
 }

 VAR_15 = FUNC_9(VAR_13->children);
 FUNC_15(VAR_13->children);
 for (; (VAR_17 = FUNC_14(VAR_13->children)) != ((void*)0); ) {
     VAR_14 = FUNC_5(VAR_17);
     if (VAR_14->type & VAR_7) {

  FUNC_11(VAR_13->children, VAR_15, VAR_9, VAR_14);
  VAR_15 = VAR_17;
     } else {
  FUNC_1(VAR_16, VAR_14);
     }
 }
 FUNC_3(VAR_13->children);
    }

    FUNC_7(VAR_16, ((void*)0));
}
