
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sysset_t ;
typedef int sigset_t ;
struct TYPE_3__ {long si_signo; } ;
typedef TYPE_1__ siginfo_t ;
typedef int fltset_t ;
struct TYPE_4__ {char* name; long value; char* desc; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,...) ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (int,long,void*) ;
 TYPE_2__* VAR_20 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 int FUNC_5 (scalar_t__,long,int ) ;
 int FUNC_6 (scalar_t__,int *,int ) ;
 int FUNC_7 (scalar_t__,int *,int ) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 char* FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_23 ;

int
FUNC_9 (int VAR_24, long VAR_25, void *VAR_26, char *VAR_27, int VAR_28)
{
  int VAR_29 = 0;
  int VAR_30;
  int VAR_31;

  FUNC_3 ();

  if (VAR_22)
    {
      for (VAR_29 = 0; VAR_20[VAR_29].name != ((void*)0); VAR_29++)
 if (VAR_20[VAR_29].value == VAR_25)
   break;

      if (VAR_19)
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "%s:%d -- ", VAR_27, VAR_28);
      switch (VAR_25) {
      case 134:
 VAR_31 = VAR_26 ? *(long *) VAR_26 : 0;
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "ioctl (PIOCSET,   %s) %s\n",
   VAR_31 == VAR_16 ? "PR_FORK" :
   VAR_31 == VAR_17 ? "PR_RLC" :



   "<unknown flag>",
   VAR_19 ? VAR_20[VAR_29].desc : "");
 break;
      case 137:
 VAR_31 = VAR_26 ? *(long *) VAR_26 : 0;
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "ioctl (PIOCRESET, %s) %s\n",
   VAR_31 == VAR_16 ? "PR_FORK" :
   VAR_31 == VAR_17 ? "PR_RLC" :



   "<unknown flag>",
   VAR_19 ? VAR_20[VAR_29].desc : "");
 break;
      case 128:
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "ioctl (PIOCSTRACE) ");
 FUNC_6 (VAR_21 ? VAR_21 : VAR_23,
         (sigset_t *) VAR_26, 0);
 break;
      case 132:
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "ioctl (%s) ",
   VAR_25 == 132 ? "PIOCSFAULT" : "PIOCGFAULT");
 FUNC_4 (VAR_21 ? VAR_21 : VAR_23,
        (fltset_t *) VAR_26, 0);
 break;
      case 135:
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "ioctl (%s) ",
   VAR_25 == 135 ? "PIOCSENTRY" : "PIOCGENTRY");
 FUNC_7 (VAR_21 ? VAR_21 : VAR_23,
        (sysset_t *) VAR_26, 0);
 break;
      case 133:
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "ioctl (%s) ",
   VAR_25 == 133 ? "PIOCSEXIT" : "PIOCGEXIT");
 FUNC_7 (VAR_21 ? VAR_21 : VAR_23,
        (sysset_t *) VAR_26, 0);
 break;
      case 131:
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "ioctl (%s) ",
   VAR_25 == 131 ? "PIOCSHOLD" : "PIOCGHOLD");
 FUNC_6 (VAR_21 ? VAR_21 : VAR_23,
         (sigset_t *) VAR_26, 0);
 break;
      case 130:
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "ioctl (PIOCSSIG) ");
 FUNC_5 (VAR_21 ? VAR_21 : VAR_23,
      VAR_26 ? ((siginfo_t *) VAR_26)->si_signo : 0,
      0);
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "\n");
 break;
      case 136:
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "ioctl (PIOCRUN) ");

 VAR_31 = VAR_26 ? *(long *) VAR_26 : 0;
 if (VAR_31 & VAR_1)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "clearSig ");
 if (VAR_31 & VAR_0)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "clearFlt ");
 if (VAR_31 & VAR_13)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "setTrace ");
 if (VAR_31 & VAR_10)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "setHold ");
 if (VAR_31 & VAR_9)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "setFlt ");
 if (VAR_31 & VAR_14)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "setVaddr ");
 if (VAR_31 & VAR_11)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "step ");
 if (VAR_31 & VAR_8)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "syscallAbort ");
 if (VAR_31 & VAR_12)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "stopReq ");

 FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "\n");
 break;
      case 138:
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "ioctl (PIOCKILL) ");
 FUNC_5 (VAR_21 ? VAR_21 : VAR_23,
      VAR_26 ? *(long *) VAR_26 : 0, 0);
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "\n");
 break;

      case 129:
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
   "ioctl (PIOCSSPCACT) ");
 VAR_31 = VAR_26 ? *(long *) VAR_26 : 0;
 if (VAR_31 & VAR_4)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "stopFork ");
 if (VAR_31 & VAR_3)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "stopExec ");
 if (VAR_31 & VAR_6)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "stopTerm ");
 if (VAR_31 & VAR_5)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "stopThreadCreate ");
 if (VAR_31 & VAR_7)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "stopThreadTerm ");
 if (VAR_31 & VAR_2)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "killOnLastClose ");
 FUNC_1 (VAR_21 ? VAR_21 : VAR_23, "\n");
 break;

      default:
 if (VAR_20[VAR_29].name)
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
     "ioctl (%s) %s\n",
     VAR_20[VAR_29].name,
     VAR_19 ? VAR_20[VAR_29].desc : "");
 else
   FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
     "ioctl (<unknown %ld (0x%lx)) \n", VAR_25, VAR_25);
 break;
      }
      if (VAR_21)
 FUNC_0 (VAR_21);
    }
  VAR_18 = 0;
  VAR_30 = FUNC_2 (VAR_24, VAR_25, VAR_26);
  if (VAR_22 && VAR_30 < 0)
    {
      FUNC_1 (VAR_21 ? VAR_21 : VAR_23,
        "[ioctl (%s) FAILED! (%s)]\n",
        VAR_20[VAR_29].name != ((void*)0) ?
        VAR_20[VAR_29].name : "<unknown>",
        FUNC_8 (VAR_18));
      if (VAR_21)
 FUNC_0 (VAR_21);
    }

  return VAR_30;
}
