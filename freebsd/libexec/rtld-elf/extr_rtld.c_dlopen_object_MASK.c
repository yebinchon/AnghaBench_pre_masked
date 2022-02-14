
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int z_nodelete; int ref_nodel; int linkmap; int dl_refcount; int path; int dagmembers; scalar_t__ static_tls; int refcount; } ;
typedef int RtldLockState ;
typedef int Objlist ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,TYPE_1__*,int *,int ,int ,char const*) ;
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
 int FUNC_2 (int *,int ) ;
 int VAR_10 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_14 (int *,int,int ,int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_16 (char const*,int,TYPE_1__*,int) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (int *,TYPE_1__*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (TYPE_1__*,int,int *,int ,int *) ;
 int VAR_17 ;
 int FUNC_27 (int *) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (int ,int *) ;

__attribute__((used)) static Obj_Entry *
FUNC_30(const char *VAR_18, int VAR_19, Obj_Entry *VAR_20, int VAR_21,
    int VAR_22, RtldLockState *VAR_23)
{
    Obj_Entry *VAR_24;
    Obj_Entry *VAR_25;
    Objlist VAR_26;
    RtldLockState VAR_27;
    int VAR_28;

    FUNC_22(&VAR_26);

    if (VAR_23 == ((void*)0) && !(VAR_21 & VAR_2)) {
 FUNC_29(VAR_17, &VAR_27);
 VAR_23 = &VAR_27;
    }
    FUNC_0(VAR_7,((void*)0));

    VAR_24 = FUNC_10(FUNC_2(&VAR_14, VAR_13));
    VAR_25 = ((void*)0);
    if (VAR_18 == ((void*)0) && VAR_19 == -1) {
 VAR_25 = VAR_15;
 VAR_25->refcount++;
    } else {
 VAR_25 = FUNC_16(VAR_18, VAR_19, VAR_20, VAR_21);
    }

    if (VAR_25) {
 VAR_25->dl_refcount++;
 if (VAR_22 & VAR_0 && FUNC_21(&VAR_12, VAR_25) == ((void*)0))
     FUNC_23(&VAR_12, VAR_25);
 if (FUNC_11(VAR_24) != ((void*)0)) {

     FUNC_5(FUNC_11(VAR_24) == VAR_25);
     VAR_28 = 0;
     if ((VAR_21 & VAR_2) == 0 && VAR_25->static_tls &&
       !FUNC_4(VAR_25)) {
  FUNC_3("%s: No space available "
    "for static Thread Local Storage", VAR_25->path);
  VAR_28 = -1;
     }
     if (VAR_28 != -1)
  VAR_28 = FUNC_15(VAR_25, VAR_21 & (VAR_1 |
      VAR_2));
     FUNC_12(VAR_25);
     FUNC_25(VAR_25);
     if (VAR_28 != -1)
  VAR_28 = FUNC_27(&VAR_25->dagmembers);
     if (VAR_28 != -1 && VAR_11)
  goto trace;
     if (VAR_28 == -1 || FUNC_26(VAR_25,
       (VAR_22 & VAR_5) == VAR_6, &VAR_16,
       (VAR_21 & VAR_2) ? VAR_9 : 0,
       VAR_23) == -1) {
  FUNC_8(VAR_25, VAR_23);
  VAR_25 = ((void*)0);
     } else if (VAR_21 & VAR_2) {
     } else {

  FUNC_13(VAR_25, VAR_25, &VAR_26);
     }






     if (VAR_25 != ((void*)0))
  FUNC_24(VAR_25);
 } else {






     FUNC_12(VAR_25);
     FUNC_25(VAR_25);

     if ((VAR_21 & VAR_4) != 0)
  goto trace;
 }
 if (VAR_25 != ((void*)0) && ((VAR_21 & VAR_3) != 0 ||
   VAR_25->z_nodelete) && !VAR_25->ref_nodel) {
     FUNC_6("obj %s nodelete", VAR_25->path);
     FUNC_25(VAR_25);
     VAR_25->z_nodelete = VAR_25->ref_nodel = 1;
 }
    }

    FUNC_1(VAR_10, VAR_25, ((void*)0), 0, VAR_25 ? VAR_25->dl_refcount : 0,
 VAR_18);
    FUNC_0(VAR_8,VAR_25 ? &VAR_25->linkmap : ((void*)0));

    if ((VAR_21 & VAR_2) == 0) {
 FUNC_18(VAR_23);
 if (VAR_25 != ((void*)0))
     FUNC_7(&VAR_26, VAR_23);
    }

    if (FUNC_14(&VAR_26, (VAR_22 & VAR_5) == VAR_6,
      (VAR_21 & VAR_2) ? VAR_9 : 0,
      VAR_23) == -1) {
 FUNC_20(&VAR_26);
 FUNC_8(VAR_25, VAR_23);
 if (VAR_23 == &VAR_27)
     FUNC_17(VAR_17, VAR_23);
 return (((void*)0));
    }

    if (!(VAR_21 & VAR_2)) {

 FUNC_19(&VAR_26, VAR_23);
    }
    FUNC_20(&VAR_26);
    if (VAR_23 == &VAR_27)
 FUNC_17(VAR_17, VAR_23);
    return VAR_25;
trace:
    FUNC_28(VAR_25);
    if (VAR_23 == &VAR_27)
 FUNC_17(VAR_17, VAR_23);
    FUNC_9(0);
}
