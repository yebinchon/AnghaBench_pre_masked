
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_24__ {int type; int made; int commands; } ;
struct TYPE_23__ {scalar_t__ job_state; int flags; void* cmdFILE; TYPE_2__* node; int * tailCmds; int * inPollfd; } ;
typedef TYPE_1__ Job ;
typedef TYPE_2__ GNode ;
typedef scalar_t__ Boolean ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,char**) ;
 int FUNC_5 (TYPE_1__*,char**) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (int ,int ,TYPE_1__*) ;
 int FUNC_12 (int ,int *,int ,TYPE_2__*) ;
 int VAR_14 ;
 int FUNC_13 (void*,TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_16 (TYPE_2__*,int *) ;
 int FUNC_17 (char*,...) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_18 (TYPE_2__*) ;
 scalar_t__ FUNC_19 (TYPE_2__*) ;
 scalar_t__ VAR_20 ;
 int FUNC_20 (char*) ;
 int FUNC_21 (void*) ;
 int FUNC_22 (int ,int ,int ) ;
 void* FUNC_23 (int,char*) ;
 int FUNC_24 (void*) ;
 int FUNC_25 (char*) ;
 TYPE_1__* VAR_21 ;
 TYPE_1__* VAR_22 ;
 TYPE_2__* VAR_23 ;
 int FUNC_26 (TYPE_1__*,int ,int) ;
 int FUNC_27 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_28 (int ,char**) ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;

__attribute__((used)) static int
FUNC_29(GNode *VAR_30, int VAR_31)
{
    Job *VAR_32;
    char *VAR_33[10];
    Boolean VAR_34;
    Boolean VAR_35;
    int VAR_36;

    for (VAR_32 = VAR_21; VAR_32 < VAR_22; VAR_32++) {
 if (VAR_32->job_state == VAR_10)
     break;
    }
    if (VAR_32 >= VAR_22)
 FUNC_17("JobStart no job slots vacant");

    FUNC_26(VAR_32, 0, sizeof *VAR_32);
    VAR_32->job_state = VAR_11;
    if (VAR_30->type & VAR_16)
 VAR_31 |= VAR_9;

    VAR_32->node = VAR_30;
    VAR_32->tailCmds = ((void*)0);






    VAR_32->flags = 0;
    if (FUNC_18(VAR_30)) {
 VAR_32->flags |= VAR_6;
    }
    if (FUNC_19(VAR_30)) {
 VAR_32->flags |= VAR_8;
    }
    VAR_32->flags |= VAR_31;





    VAR_34 = FUNC_8(VAR_30, VAR_0);

    VAR_32->inPollfd = ((void*)0);






    if (((VAR_30->type & VAR_15) && !(VAR_25)) ||
     (!VAR_24 && !VAR_28)) {





 char *VAR_37;
 sigset_t VAR_38;




 if (!VAR_34) {
     FUNC_16(VAR_30, ((void*)0));
     FUNC_1();
 }

 FUNC_6(&VAR_38);
 VAR_36 = FUNC_28(VAR_18, &VAR_37);
 if (!FUNC_0(VAR_17))
  (void)FUNC_20(VAR_37);
 FUNC_7(&VAR_38);

 VAR_32->cmdFILE = FUNC_23(VAR_36, "w+");
 if (VAR_32->cmdFILE == ((void*)0)) {
     FUNC_17("Could not fdopen %s", VAR_37);
 }
 (void)FUNC_22(FUNC_2(VAR_32->cmdFILE), VAR_3, VAR_2);




 VAR_35 = VAR_1;
 VAR_26 = 0;
 FUNC_11(VAR_30->commands, VAR_12, VAR_32);





 if (VAR_26 == 0) {
     VAR_35 = VAR_19;
 }

 FUNC_25(VAR_37);
    } else if (FUNC_15(VAR_30)) {




 if (VAR_23 != VAR_30) {
     FUNC_13(VAR_27, VAR_30);
     VAR_23 = VAR_30;
 }
 VAR_32->cmdFILE = VAR_27;





 if (VAR_34) {
     FUNC_11(VAR_30->commands, VAR_12, VAR_32);
 }



 VAR_35 = VAR_19;
    } else {






 VAR_32->cmdFILE = VAR_27;
     FUNC_10(VAR_30, VAR_32->flags&VAR_8);
 VAR_35 = VAR_19;
    }

    (void)FUNC_24(VAR_32->cmdFILE);




    if (VAR_35) {
 if (!(VAR_32->flags & VAR_9))
     FUNC_9();



 if (VAR_32->cmdFILE != VAR_27) {
     if (VAR_32->cmdFILE != ((void*)0)) {
  (void)FUNC_21(VAR_32->cmdFILE);
  VAR_32->cmdFILE = ((void*)0);
     }
 }





 if (VAR_34 && VAR_20 == 0) {
     if (VAR_32->tailCmds != ((void*)0)) {
  FUNC_12(VAR_32->node->commands, VAR_32->tailCmds,
    VAR_13,
          VAR_32->node);
     }
     VAR_32->node->made = VAR_14;
     FUNC_14(VAR_32->node);
 }
 VAR_32->job_state = VAR_10;
 return VAR_34 ? VAR_5 : VAR_4;
    }





    FUNC_5(VAR_32, VAR_33);


    FUNC_3(VAR_32, 3);

    FUNC_4(VAR_32, VAR_33);
    return(VAR_7);
}
