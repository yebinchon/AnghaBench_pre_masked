
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cell_list {int * cell; struct cell_list* next; } ;
typedef int krb5_principal ;
struct TYPE_4__ {int num_strings; char** strings; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct cell_list* VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int ,int,char**,int*) ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,int ,int **) ;
 scalar_t__ FUNC_12 (int *,int **) ;
 scalar_t__ FUNC_13 (int *,scalar_t__,int **) ;
 int FUNC_14 (int **) ;
 int FUNC_15 (int *,scalar_t__,int *) ;
 int FUNC_16 (int *,char*,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char*,char) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_21 (int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_22 (char*,int *) ;

int
FUNC_23(int VAR_15, char **VAR_16)
{
    int VAR_17 = 0;
    int VAR_18;
    int VAR_19;
    int VAR_20 = 0;
    int VAR_21 = 0;
    struct cell_list *VAR_22;

    FUNC_18(VAR_16[0]);

    if(FUNC_7(VAR_1, VAR_11, VAR_15, VAR_16, &VAR_17))
 FUNC_21(1);
    if(VAR_8)
 FUNC_21(0);
    if(VAR_14) {
 FUNC_17(((void*)0));
 FUNC_5(0);
    }

    if(!FUNC_8())
 FUNC_4(1, "AFS does not seem to be present on this machine");

    if(VAR_12){
 FUNC_9();
 FUNC_5(0);
    }
    if (VAR_13)
 FUNC_10(VAR_10, ((void*)0));

    VAR_19 = 0;
    for(VAR_18 = 0; VAR_18 < VAR_7.num_strings; VAR_18++){
 FUNC_2(VAR_7.strings[VAR_18]);
 VAR_19++;
    }
    FUNC_6 (&VAR_7);
    for(VAR_18 = 0; VAR_18 < VAR_4.num_strings; VAR_18++){
 FUNC_1(VAR_4.strings[VAR_18], 1);
 VAR_19++;
    }
    FUNC_6 (&VAR_4);
    for(VAR_18 = VAR_17; VAR_18 < VAR_15; VAR_18++){
 VAR_19++;
 if(FUNC_20(VAR_16[VAR_18], ".") == 0 ||
    FUNC_20(VAR_16[VAR_18], "..") == 0 ||
    FUNC_19(VAR_16[VAR_18], '/') ||
    FUNC_0(VAR_16[VAR_18], VAR_0) == 0)
     FUNC_2(VAR_16[VAR_18]);
 else
     FUNC_1(VAR_16[VAR_18], 1);
    }
    if(VAR_19 == 0) {
 if(FUNC_3(((void*)0)))
     VAR_21++;
    } else
 for(VAR_22 = VAR_3; VAR_22; VAR_22 = VAR_22->next) {
     if(VAR_13)
  FUNC_22("Getting tokens for cell \"%s\"", VAR_22->cell);
     if(FUNC_3(VAR_22->cell))
  VAR_21++;
    }

    return VAR_21;
}
