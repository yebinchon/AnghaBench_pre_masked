
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_30__ {int ti_offset; int ti_module; } ;
typedef TYPE_1__ tls_index ;
struct TYPE_31__ {char* name; } ;
typedef TYPE_2__ Ver_Entry ;
struct TYPE_35__ {int st_value; int st_info; } ;
struct TYPE_34__ {void* relocbase; int tlsindex; int dagmembers; scalar_t__ mainprog; scalar_t__ marker; } ;
struct TYPE_33__ {int env; } ;
struct TYPE_32__ {int flags; TYPE_5__* defobj_out; TYPE_6__* sym_out; TYPE_4__* lockstate; TYPE_2__ const* ventry; } ;
typedef TYPE_3__ SymLook ;
typedef TYPE_4__ RtldLockState ;
typedef TYPE_5__ Obj_Entry ;
typedef TYPE_6__ Elf_Sym ;
typedef int DoneList ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,void*,int ,int ,char const*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_5__* FUNC_3 (TYPE_5__ const*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 TYPE_5__* FUNC_7 (void*) ;
 int FUNC_8 (int *) ;
 TYPE_5__* FUNC_9 (TYPE_5__ const*) ;
 int FUNC_10 (int ,TYPE_4__*) ;
 int FUNC_11 (int ,TYPE_4__*) ;
 void* FUNC_12 (TYPE_6__ const*,TYPE_5__ const*) ;
 int VAR_10 ;
 TYPE_5__* FUNC_13 (void*) ;
 TYPE_5__ const VAR_11 ;
 int FUNC_14 (int ,TYPE_4__*) ;
 int VAR_12 ;
 void* FUNC_15 (TYPE_5__ const*,TYPE_6__ const*) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (TYPE_3__*,TYPE_5__ const*) ;
 int FUNC_18 (TYPE_3__*,int *) ;
 int FUNC_19 (TYPE_3__*,char const*) ;
 int FUNC_20 (TYPE_3__*,int *,int *) ;
 int FUNC_21 (TYPE_3__*,TYPE_5__ const*) ;

__attribute__((used)) static void *
FUNC_22(void *VAR_13, const char *VAR_14, void *VAR_15, const Ver_Entry *VAR_16,
    int VAR_17)
{
    DoneList VAR_18;
    const Obj_Entry *VAR_19, *VAR_20;
    const Elf_Sym *VAR_21;
    SymLook VAR_22;
    RtldLockState VAR_23;
    tls_index VAR_24;
    void *VAR_25;
    int VAR_26;

    VAR_21 = ((void*)0);
    VAR_20 = ((void*)0);
    FUNC_19(&VAR_22, VAR_14);
    VAR_22.ventry = VAR_16;
    VAR_22.flags = VAR_17 | VAR_7;
    VAR_22.lockstate = &VAR_23;

    FUNC_2(VAR_8, VAR_13, ((void*)0), 0, 0, VAR_14);
    FUNC_14(VAR_12, &VAR_23);
    if (FUNC_16(VAR_23.env, 0) != 0)
     FUNC_11(VAR_12, &VAR_23);
    if (VAR_13 == ((void*)0) || VAR_13 == VAR_1 ||
 VAR_13 == VAR_0 || VAR_13 == VAR_2) {

 if ((VAR_19 = FUNC_13(VAR_15)) == ((void*)0)) {
     FUNC_5("Cannot determine caller's shared object");
     FUNC_10(VAR_12, &VAR_23);
     FUNC_2(VAR_9, VAR_13, ((void*)0), 0, 0, VAR_14);
     return ((void*)0);
 }
 if (VAR_13 == ((void*)0)) {
     VAR_26 = FUNC_21(&VAR_22, VAR_19);
     if (VAR_26 == 0) {
  VAR_21 = VAR_22.sym_out;
  VAR_20 = VAR_22.defobj_out;
     }
 } else if (VAR_13 == VAR_1 ||
     VAR_13 == VAR_2) {
     if (VAR_13 == VAR_1)
  VAR_19 = FUNC_9(VAR_19);
     for (; VAR_19 != ((void*)0); VAR_19 = FUNC_3(VAR_19, VAR_10)) {
  if (VAR_19->marker)
      continue;
  VAR_26 = FUNC_21(&VAR_22, VAR_19);
  if (VAR_26 == 0) {
      if (VAR_21 == ((void*)0) ||
        FUNC_0(VAR_22.sym_out->st_info) != VAR_3) {
   VAR_21 = VAR_22.sym_out;
   VAR_20 = VAR_22.defobj_out;
   if (FUNC_0(VAR_21->st_info) != VAR_3)
       break;
      }
  }
     }





     if (VAR_21 == ((void*)0) || FUNC_0(VAR_21->st_info) == VAR_3) {
  VAR_26 = FUNC_21(&VAR_22, &VAR_11);
  if (VAR_26 == 0) {
      VAR_21 = VAR_22.sym_out;
      VAR_20 = VAR_22.defobj_out;
  }
     }
 } else {
     FUNC_6(VAR_13 == VAR_0);
     VAR_26 = FUNC_17(&VAR_22, VAR_19);
     if (VAR_26 == 0) {
  VAR_20 = VAR_22.defobj_out;
  VAR_21 = VAR_22.sym_out;
     }
 }
    } else {
 if ((VAR_19 = FUNC_7(VAR_13)) == ((void*)0)) {
     FUNC_10(VAR_12, &VAR_23);
     FUNC_2(VAR_9, VAR_13, ((void*)0), 0, 0, VAR_14);
     return ((void*)0);
 }

 FUNC_8(&VAR_18);
 if (VAR_19->mainprog) {

     VAR_26 = FUNC_18(&VAR_22, &VAR_18);
     if (VAR_26 == 0) {
  VAR_21 = VAR_22.sym_out;
  VAR_20 = VAR_22.defobj_out;
     }





     if (VAR_21 == ((void*)0) || FUNC_0(VAR_21->st_info) == VAR_3) {
  VAR_26 = FUNC_21(&VAR_22, &VAR_11);
  if (VAR_26 == 0) {
      VAR_21 = VAR_22.sym_out;
      VAR_20 = VAR_22.defobj_out;
  }
     }
 }
 else {

     VAR_26 = FUNC_20(&VAR_22, &VAR_19->dagmembers, &VAR_18);
     if (VAR_26 == 0) {
  VAR_21 = VAR_22.sym_out;
  VAR_20 = VAR_22.defobj_out;
     }
 }
    }

    if (VAR_21 != ((void*)0)) {
 FUNC_10(VAR_12, &VAR_23);






 if (FUNC_1(VAR_21->st_info) == VAR_4)
     VAR_25 = FUNC_12(VAR_21, VAR_20);
 else if (FUNC_1(VAR_21->st_info) == VAR_5)
     VAR_25 = FUNC_15(VAR_20, VAR_21);
 else if (FUNC_1(VAR_21->st_info) == VAR_6) {
     VAR_24.ti_module = VAR_20->tlsindex;
     VAR_24.ti_offset = VAR_21->st_value;
     VAR_25 = FUNC_4(&VAR_24);
 } else
     VAR_25 = VAR_20->relocbase + VAR_21->st_value;
 FUNC_2(VAR_9, VAR_13, VAR_25, 0, 0, VAR_14);
 return (VAR_25);
    }

    FUNC_5("Undefined symbol \"%s%s%s\"", VAR_14, VAR_16 != ((void*)0) ? "@" : "",
      VAR_16 != ((void*)0) ? VAR_16->name : "");
    FUNC_10(VAR_12, &VAR_23);
    FUNC_2(VAR_9, VAR_13, ((void*)0), 0, 0, VAR_14);
    return ((void*)0);
}
