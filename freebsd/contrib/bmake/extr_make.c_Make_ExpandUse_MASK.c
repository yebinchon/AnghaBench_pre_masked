
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int flags; char* name; int cohort_num; int type; char* path; scalar_t__ unmade; int children; struct TYPE_15__* cohorts; } ;
typedef TYPE_1__* Lst ;
typedef TYPE_1__ GNode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_9 (int ,char*,TYPE_1__*,int ) ;
 int VAR_13 ;
 int FUNC_10 (int ,char*,char*,int) ;
 int FUNC_11 (char*,char*,int,scalar_t__) ;
 char* FUNC_12 (char*,char) ;

void
FUNC_13(Lst VAR_14)
{
    GNode *VAR_15;
    Lst VAR_16;

    VAR_16 = FUNC_5(VAR_14, ((void*)0));
    while (!FUNC_7 (VAR_16)) {
 VAR_15 = (GNode *)FUNC_3(VAR_16);

 if (VAR_15->flags & VAR_11)

     continue;
 VAR_15->flags |= VAR_11;
 if (FUNC_0(VAR_2))
     FUNC_10(VAR_13, "Make_ExpandUse: examine %s%d\n",
      VAR_15->name, VAR_15->cohort_num);

 if ((VAR_15->type & VAR_9) && !FUNC_7 (VAR_15->cohorts)) {

     Lst VAR_17;
     VAR_17 = FUNC_5(VAR_15->cohorts, ((void*)0));
     FUNC_2(VAR_17, VAR_16, VAR_1);
     VAR_16 = VAR_17;
 }







 if (VAR_15->type & VAR_8) {
     char *VAR_18, *VAR_19;
     VAR_18 = FUNC_12(VAR_15->name, '(');
     VAR_19 = FUNC_12(VAR_15->name, ')');
     if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0))
  continue;
     *VAR_18 = '\0';
     *VAR_19 = '\0';
     FUNC_9(VAR_3, VAR_18 + 1, VAR_15, 0);
     FUNC_9(VAR_0, VAR_15->name, VAR_15, 0);
     *VAR_18 = '(';
     *VAR_19 = ')';
 }

 (void)FUNC_1(VAR_15, 0);
 FUNC_9(VAR_12, VAR_15->path ? VAR_15->path : VAR_15->name, VAR_15, 0);
 FUNC_6(VAR_15->children, VAR_7, VAR_15);
 FUNC_6(VAR_15->children, VAR_6, VAR_15);

 if ((VAR_15->type & VAR_10) == 0)
     FUNC_8(VAR_15);
 else {

     FUNC_6(VAR_15->children, VAR_5, VAR_15);
     if (VAR_15->unmade != 0)
      FUNC_11("Warning: %s%s still has %d unmade children\n",
       VAR_15->name, VAR_15->cohort_num, VAR_15->unmade);
 }

 if (VAR_15->unmade != 0)
     FUNC_6(VAR_15->children, VAR_4, VAR_16);
    }

    FUNC_4(VAR_16, ((void*)0));
}
