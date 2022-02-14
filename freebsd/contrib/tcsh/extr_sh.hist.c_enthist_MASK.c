
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wordent {TYPE_2__* prev; TYPE_1__* next; } ;
struct Hist {scalar_t__ Htime; int Hnum; int Href; struct wordent Hlex; struct Hist* Hnext; scalar_t__ Hhash; int * histline; struct Hist* Hprev; } ;
struct TYPE_6__ {int s; } ;
struct TYPE_5__ {struct wordent* next; } ;
struct TYPE_4__ {struct wordent* prev; } ;
typedef int Char ;


 struct Hist VAR_0 ;
 scalar_t__ VAR_1 ;
 int const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct Hist*,struct Hist*) ;
 int FUNC_3 (struct wordent*,struct wordent*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int const*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct Hist* FUNC_7 (struct wordent*,unsigned int) ;
 unsigned int FUNC_8 (struct wordent*) ;
 scalar_t__ FUNC_9 (struct wordent*,struct wordent*) ;
 int FUNC_10 (struct Hist*) ;
 int FUNC_11 (struct Hist*,struct Hist*) ;
 TYPE_3__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_12 (struct Hist*) ;
 int FUNC_13 (struct Hist*,unsigned int) ;
 struct Hist* FUNC_14 (struct Hist*,struct Hist*) ;
 int FUNC_15 (struct Hist*) ;
 int FUNC_16 (scalar_t__*) ;
 int * FUNC_17 (int ) ;
 struct Hist* FUNC_18 (int) ;

struct Hist *
FUNC_19(
  int VAR_11,
  struct wordent *VAR_12,
  int VAR_13,
  int VAR_14,
  int VAR_15)
{
    struct Hist *VAR_16 = ((void*)0), *VAR_17 = &VAR_0, *VAR_18 = ((void*)0);
    struct Hist *VAR_19;
    const Char *VAR_20;
    unsigned VAR_21 = 0;

    if ((VAR_20 = FUNC_17(VAR_5)) != VAR_2) {
 if (FUNC_6(VAR_20, VAR_4)) {

            FUNC_4(VAR_15);
            VAR_21 = FUNC_8(VAR_12);
            FUNC_1(VAR_21 != 0);
            VAR_16 = FUNC_7(VAR_12, VAR_21);
            if (VAR_16) {
  if (VAR_1 != 0 && VAR_16->Htime > VAR_1)
      VAR_1 = VAR_16->Htime;


                if (VAR_14 && VAR_1 != 0 && VAR_16->Hprev->Htime >= VAR_1)
                    VAR_18 = VAR_16->Hprev;
  if (!VAR_8)
      FUNC_15(VAR_16);
                FUNC_12(VAR_16);
  FUNC_10(VAR_16);
                VAR_16 = ((void*)0);
     }
 }
 else if (FUNC_6(VAR_20, VAR_3)) {
            FUNC_4(VAR_15);
            VAR_21 = FUNC_8(VAR_12);
            FUNC_1(VAR_21 != 0);
            VAR_16 = FUNC_7(VAR_12, VAR_21);
     if (VAR_16)
  VAR_7--;
 }
 else if (FUNC_6(VAR_20, VAR_6)) {
     if (VAR_17->Hnext && FUNC_9(VAR_12, &(VAR_17->Hnext->Hlex))) {
  VAR_16 = VAR_17->Hnext;
  VAR_7--;
     }
 }
    }

    VAR_19 = VAR_16 ? VAR_16 : FUNC_18(sizeof(*VAR_19));


    if (VAR_1 != 0) {
 VAR_19->Htime = VAR_1;
 VAR_1 = 0;
    }
    else
        (void) FUNC_16(&(VAR_19->Htime));

    if (VAR_16 == VAR_19)
        return VAR_19;


    VAR_19->Hnum = VAR_19->Href = VAR_11;
    if (VAR_13) {
        FUNC_3(&VAR_19->Hlex, VAR_12);
 if (VAR_10)
     VAR_19->histline = FUNC_0(VAR_9.s);
 else
     VAR_19->histline = ((void*)0);
    }
    else {
 VAR_19->Hlex.next = VAR_12->next;
 VAR_12->next->prev = &VAR_19->Hlex;
 VAR_19->Hlex.prev = VAR_12->prev;
        VAR_12->prev->next = &VAR_19->Hlex;
        VAR_19->histline = ((void*)0);
    }
    VAR_19->Hhash = 0;




    if (VAR_14) {
        VAR_17 = FUNC_14(VAR_19, VAR_18);
        for (VAR_16 = VAR_17->Hnext; VAR_16 && VAR_16->Htime == VAR_19->Htime; VAR_17 = VAR_16, VAR_16 = VAR_16->Hnext) {
            if (FUNC_9(&VAR_16->Hlex, &VAR_19->Hlex)) {
                VAR_7--;
                FUNC_10(VAR_19);
                return (VAR_16);
              }
          }

 if (!VAR_8) {


     FUNC_2(VAR_19, VAR_17);
 }
    }
    else
        VAR_17 = &VAR_0;
    FUNC_11(VAR_19, VAR_17);
    if (VAR_21 && VAR_15 != 0)
        FUNC_13(VAR_19, VAR_21);
    else
        FUNC_5();
    return (VAR_19);
}
