
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {int p_index; scalar_t__ p_procid; scalar_t__ p_jobid; char* p_command; struct process* p_next; } ;
struct TYPE_2__ {struct process* p_next; } ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 struct process* VAR_10 ;
 struct process* VAR_11 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 TYPE_1__ VAR_12 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;

struct process *
FUNC_6(Char *VAR_13)
{
    struct process *VAR_14, *VAR_15;

    if (VAR_13 == 0 || VAR_13[1] == 0 || FUNC_2(VAR_13, VAR_6) || FUNC_2(VAR_13, VAR_9)) {
 if (VAR_10 == ((void*)0))
     FUNC_5(VAR_4 | VAR_1);
 return (VAR_10);
    }
    if (FUNC_2(VAR_13, VAR_8) || FUNC_2(VAR_13, VAR_7)) {
 if (VAR_11 == ((void*)0))
     FUNC_5(VAR_4 | VAR_3);
 return (VAR_11);
    }
    if (FUNC_0(VAR_13[1])) {
 int VAR_16 = FUNC_1(FUNC_4(VAR_13 + 1));

 for (VAR_14 = VAR_12.p_next; VAR_14; VAR_14 = VAR_14->p_next)
     if (VAR_14->p_index == VAR_16 && VAR_14->p_procid == VAR_14->p_jobid)
  return (VAR_14);
 FUNC_5(VAR_4 | VAR_5);
    }
    VAR_15 = ((void*)0);
    for (VAR_14 = VAR_12.p_next; VAR_14; VAR_14 = VAR_14->p_next)
 if (VAR_14->p_procid == VAR_14->p_jobid) {
     if (VAR_13[1] == '?') {
  Char *VAR_17;

  for (VAR_17 = VAR_14->p_command; *VAR_17; VAR_17++) {
      if (*VAR_17 != VAR_13[2])
   continue;
      if (FUNC_3(VAR_13 + 2, VAR_17))
   goto match;
  }
     }
     else if (FUNC_3(VAR_13 + 1, VAR_14->p_command)) {
 match:
  if (VAR_15)
      FUNC_5(VAR_4 | VAR_0);
  VAR_15 = VAR_14;
     }
 }
    if (VAR_15)
 return (VAR_15);
    FUNC_5(VAR_4 | (VAR_13[1] == '?' ? VAR_2 : VAR_5));

    return (0);
}
