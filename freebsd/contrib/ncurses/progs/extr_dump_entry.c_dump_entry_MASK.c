
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int term_names; void** Strings; } ;
typedef TYPE_1__ TERMTYPE ;
typedef int PredFunc ;


 void* VAR_0 ;
 char* FUNC_0 (TYPE_1__*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,...) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (void*) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (void*) ;
 int VAR_9 ;
 char* FUNC_6 (int ) ;
 void* VAR_10 ;
 int FUNC_7 (int ,char*,char*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_12 (char const*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (int ,int ) ;

void
FUNC_14(TERMTYPE *VAR_17,
    int VAR_18,
    int VAR_19,
    int VAR_20,
    PredFunc VAR_21)
{
    TERMTYPE VAR_22;
    int VAR_23, VAR_24;
    const char *VAR_25;
    bool VAR_26;

    if (VAR_11 == VAR_3 || VAR_11 == VAR_2) {
 VAR_24 = VAR_4;
 VAR_25 = "older termcap";
 VAR_26 = VAR_1;
 FUNC_11(VAR_17);
    } else {
 VAR_24 = VAR_5;
 VAR_25 = "terminfo";
 VAR_26 = VAR_8;
    }

    VAR_12 = VAR_13;

    if ((FUNC_1() > VAR_24)
 && VAR_19) {

 VAR_22 = *VAR_17;
 if (!VAR_18) {
     FUNC_3("# (untranslatable capabilities removed to fit entry within %d bytes)\n",
       VAR_24);
     VAR_18 = VAR_8;
 }
 if (FUNC_1() > VAR_24) {





     bool VAR_27 = VAR_1;
     if (FUNC_5(VAR_13)) {
  VAR_13 = VAR_0;
  FUNC_3("# (sgr removed to fit entry within %d bytes)\n",
    VAR_24);
  VAR_27 = VAR_8;
     }
     if (!VAR_27 || (FUNC_1() > VAR_24)) {
  if (FUNC_10(VAR_17)) {
      VAR_10 = VAR_0;
      FUNC_3("# (acsc removed to fit entry within %d bytes)\n",
        VAR_24);
      VAR_27 = VAR_8;
  }
     }
     if (!VAR_27 || (FUNC_1() > VAR_24)) {
  int VAR_28 = VAR_16;

  VAR_16 = VAR_9;
  FUNC_3("# (terminfo-only capabilities suppressed to fit entry within %d bytes)\n",
    VAR_24);

  VAR_23 = FUNC_1();
  if (VAR_23 > VAR_24
      && FUNC_9(VAR_17, VAR_23 - VAR_24)) {
      FUNC_3("# (some labels capabilities suppressed to fit entry within %d bytes)\n",
        VAR_24);
      VAR_23 = FUNC_1();
  }
  if (VAR_23 > VAR_24
      && FUNC_8(VAR_17, VAR_23 - VAR_24)) {
      FUNC_3("# (some function-key capabilities suppressed to fit entry within %d bytes)\n",
        VAR_24);
      VAR_23 = FUNC_1();
  }
  if (VAR_23 > VAR_24) {
      (void) FUNC_7(VAR_14,
       "warning: %s entry is %d bytes long\n",
       FUNC_6(VAR_17->term_names),
       VAR_23);
      FUNC_3("# WARNING: this entry, %d bytes long, may core-dump %s libraries!\n",
        VAR_23, VAR_25);
  }
  VAR_16 = VAR_28;
     }
     VAR_13 = VAR_12;
     *VAR_17 = VAR_22;
 }
    } else if (!FUNC_13(VAR_7, FUNC_4(VAR_10))) {
 VAR_22 = *VAR_17;
 if (FUNC_10(VAR_17)) {
     (void) FUNC_1();
 }
 *VAR_17 = VAR_22;
    }
}
