
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tms_cstime; scalar_t__ tms_cutime; int tms_stime; int tms_utime; } ;
struct process {scalar_t__ p_procid; scalar_t__ p_jobid; int p_flags; int p_reason; int p_index; struct process* p_friends; TYPE_1__* p_cwd; int **** p_btime; int **** p_etime; int p_stime; int p_utime; TYPE_2__ p_rusage; int p_command; } ;
struct TYPE_9__ {int di_name; } ;
struct TYPE_8__ {int pname; } ;
struct TYPE_6__ {int di_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,char*) ;
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
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_5__* VAR_17 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_2__ VAR_21 ;
 TYPE_3__* VAR_22 ;
 struct process* VAR_23 ;
 struct process* VAR_24 ;
 int FUNC_5 (int *,TYPE_2__*,int ***,int ***) ;
 int FUNC_6 (struct process*) ;
 int FUNC_7 (scalar_t__) ;
 char* FUNC_8 (char*,int ,int) ;
 int VAR_25 ;
 int FUNC_9 (char const*,...) ;
 int FUNC_10 (char) ;
 int VAR_26 ;

__attribute__((used)) static int
FUNC_11(struct process *VAR_27, int VAR_28)
{
    int VAR_29, VAR_30;
    struct process *VAR_31;
    int VAR_32, VAR_33, VAR_34;
    const char *VAR_35;
    int VAR_36;






    while (VAR_27->p_procid != VAR_27->p_jobid)
 VAR_27 = VAR_27->p_friends;
    if (VAR_27 == VAR_27->p_friends && (VAR_27->p_flags & VAR_11)) {
 VAR_27->p_flags &= ~VAR_11;
 VAR_27->p_flags |= VAR_12;
    }
    VAR_31 = VAR_27;
    VAR_29 = VAR_30 = -1;
    VAR_32 = 0;
    VAR_36 = VAR_18;

    VAR_18 = !(VAR_28 & VAR_4);
    do {
 VAR_34 = (VAR_31 != VAR_27);


 VAR_32 |= VAR_27->p_flags;
 VAR_33 = (int) (VAR_27->p_flags & VAR_7);
 if (VAR_34 && VAR_20 != VAR_19 && !(VAR_28 & VAR_2) &&
     ((VAR_33 == VAR_29 && VAR_27->p_reason == VAR_30) ||
      !(VAR_28 & VAR_13)))
     FUNC_10(' ');
 else {
     if (VAR_34 && VAR_20 != VAR_19)
  FUNC_10('\n');
     if (VAR_28 & VAR_6) {




  VAR_34 = (VAR_27 == VAR_31);

  if (VAR_34)
      FUNC_9("[%d]%s %c ", VAR_27->p_index,
       VAR_27->p_index < 10 ? " " : "",
       VAR_27 == VAR_23 ? '+' :
       (VAR_27 == VAR_24 ? '-' : ' '));
  else
      FUNC_9("       ");
     }
     if (VAR_28 & VAR_2) {
  FUNC_9("%5d ", VAR_27->p_procid);



     }
     if (VAR_28 & (VAR_13 | VAR_1)) {
  if (VAR_28 & VAR_5)
      VAR_35 = "%-30s";
  else
      VAR_35 = "%s";
  if (VAR_33 == VAR_29) {
      if (VAR_27->p_reason == VAR_30) {
   FUNC_9(VAR_35, "");
   goto prcomd;
      }
      else
   VAR_30 = (int) VAR_27->p_reason;
  }
  else {
      VAR_29 = VAR_33;
      VAR_30 = (int) VAR_27->p_reason;
  }
  switch (VAR_29) {

  case 130:
      FUNC_9(VAR_35, FUNC_0(17, 4, "Running "));
      break;

  case 132:
  case 128:
  case 129:





      if ((VAR_28 & VAR_13)
   || ((VAR_28 & VAR_1)
       && VAR_30 != VAR_15
       && (VAR_30 != VAR_16
    || (VAR_27->p_flags & VAR_10) == 0))) {
   char *VAR_37;
   int VAR_38;

   VAR_38 = 0;
   VAR_37 = (char *)(intptr_t)VAR_22[VAR_27->p_reason & 0177].pname;
   if (VAR_37 == ((void*)0)) {
       VAR_37 = FUNC_8("%s %d", FUNC_0(17, 5, "Signal"),
         VAR_27->p_reason & 0177);
       FUNC_1(VAR_37, VAR_25);
       VAR_38 = 1;
   }
   FUNC_9(VAR_35, VAR_37);
   if (VAR_38 != 0)
       FUNC_2(VAR_37);
      }
      else
   VAR_30 = -1;
      break;

  case 131:
  case 133:
      if (VAR_28 & VAR_13) {
   if (VAR_27->p_reason)
       FUNC_9(FUNC_0(17, 6, "Exit %-25d"), VAR_27->p_reason);
   else
       FUNC_9(VAR_35, FUNC_0(17, 7, "Done"));
      }
      break;

  default:
      FUNC_9(FUNC_0(17, 8, "BUG: status=%-9o"),
       VAR_29);
  }
     }
 }
prcomd:
 if (VAR_28 & VAR_5) {
     FUNC_9("%S", VAR_27->p_command);
     if (VAR_27->p_flags & VAR_10)
  FUNC_9(" |");
     if (VAR_27->p_flags & VAR_8)
  FUNC_9("&");
 }
 if (VAR_28 & (VAR_13 | VAR_1) && VAR_27->p_flags & VAR_9)
     FUNC_9("%s", FUNC_0(17, 9, " (core dumped)"));
 if (VAR_31 == VAR_27->p_friends) {
     if (VAR_28 & VAR_0)
  FUNC_9(" &");
     if (VAR_28 & VAR_3 &&
  !FUNC_4(VAR_31->p_cwd->di_name, VAR_17->di_name)) {
  FUNC_9("%s", FUNC_0(17, 10, " (wd: "));
  FUNC_3(VAR_31->p_cwd->di_name);
  FUNC_9(")");
     }
 }
 if (VAR_27->p_flags & VAR_11 && !(VAR_29 & (128 | 130))) {
     if (VAR_20 != VAR_19)
  FUNC_9("\n\t");




     VAR_21.tms_utime = VAR_27->p_utime;
     VAR_21.tms_stime = VAR_27->p_stime;
     VAR_21.tms_cutime = 0;
     VAR_21.tms_cstime = 0;
     FUNC_5(&VAR_26, &VAR_21, *VAR_27->p_etime,
      *VAR_27->p_btime);


 }




 VAR_34 = (VAR_31 == VAR_27->p_friends);

 if (VAR_34) {
     if (VAR_20 != VAR_19)
  FUNC_10('\n');
     if (VAR_28 & VAR_14 && !FUNC_4(VAR_31->p_cwd->di_name, VAR_17->di_name)) {
  FUNC_9("%s", FUNC_0(17, 11, "(wd now: "));
  FUNC_3(VAR_17->di_name);
  FUNC_9(")\n");
     }
 }
 VAR_34 = ((VAR_27 = VAR_27->p_friends) != VAR_31);

    } while (VAR_34);

    if (VAR_32 & VAR_12 && (VAR_32 & (128 | 130)) == 0) {
 if (VAR_32 & VAR_6)
     FUNC_9("       ");
 FUNC_6(VAR_31);
    }
    VAR_18 = VAR_36;
    return (VAR_32);
}
