
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* time_t ;
struct tm {int tm_hour; int tm_min; void* tm_sec; } ;
struct sched_event {scalar_t__ t_when; int t_lex; struct sched_event* t_next; } ;
struct command {int dummy; } ;
typedef char Char ;


 char* FUNC_0 (int,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char) ;
 char const* VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct command*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int (*) (struct sched_event*)) ;
 int FUNC_7 (char*) ;
 struct tm* FUNC_8 (void**) ;
 int FUNC_9 (char**) ;
 struct sched_event* VAR_9 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (void**) ;
 char* FUNC_14 (int ,char const*,int ,scalar_t__,int*) ;
 char* FUNC_15 (int ) ;
 struct sched_event* FUNC_16 (int,int) ;
 int FUNC_17 (struct sched_event*) ;
 int FUNC_18 (int ) ;

void
FUNC_19(Char **VAR_10, struct command *VAR_11)
{
    struct sched_event *VAR_12, **VAR_13;
    time_t VAR_14;
    int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    Char *VAR_20;
    int VAR_21;
    struct tm *VAR_22;

    FUNC_2(VAR_11);
    VAR_10++;
    VAR_20 = *VAR_10++;
    if (VAR_20 == ((void*)0)) {
 const Char *VAR_23;
 if ((VAR_23 = FUNC_15(VAR_8)) == VAR_7)
     VAR_23 = FUNC_12("%h\t%T\t%R\n");

 for (VAR_15 = 1, VAR_12 = VAR_9; VAR_12; VAR_15++, VAR_12 = VAR_12->t_next) {
     Char *VAR_24, *VAR_25;

     VAR_24 = FUNC_4(VAR_12->t_lex);
     FUNC_6(VAR_24, FUNC_17);
     VAR_25 = FUNC_14(VAR_6, VAR_23, FUNC_10(VAR_24), VAR_12->t_when, &VAR_15);
     FUNC_7(VAR_24);
     FUNC_6(VAR_25, FUNC_17);
     for (VAR_20 = VAR_25; *VAR_20;)
  FUNC_18(*VAR_20++);
     FUNC_7(VAR_25);
 }
 return;
    }

    if (*VAR_20 == '-') {

 if (!VAR_9)
     FUNC_11(VAR_0);
 if (*VAR_10)
     FUNC_11(VAR_5);
 VAR_15 = FUNC_3(FUNC_10(++VAR_20));
 if (VAR_15 <= 0)
     FUNC_11(VAR_5);
 VAR_13 = &VAR_9;
 VAR_12 = VAR_9;
 while (--VAR_15) {
     if (VAR_12->t_next == 0)
  break;
     else {
  VAR_13 = &VAR_12->t_next;
  VAR_12 = VAR_12->t_next;
     }
 }
 if (VAR_15)
     FUNC_11(VAR_2);
 *VAR_13 = VAR_12->t_next;
 FUNC_5(VAR_12->t_lex);
 FUNC_17(VAR_12);
 return;
    }


    if (!*VAR_10)
 FUNC_11(VAR_1);
    VAR_21 = 0;
    if (!FUNC_1(*VAR_20)) {
 if (*VAR_20 != '+')
     FUNC_11(VAR_5);
 VAR_20++, VAR_21++;
    }
    VAR_17 = 0;
    VAR_16 = FUNC_3(FUNC_10(VAR_20));
    while (*VAR_20 && *VAR_20 != ':' && *VAR_20 != 'a' && *VAR_20 != 'p')
 VAR_20++;
    if (*VAR_20 && *VAR_20 == ':')
 VAR_17 = FUNC_3(FUNC_10(++VAR_20));
    if ((VAR_16 < 0) || (VAR_17 < 0) ||
 (VAR_16 > 23) || (VAR_17 > 59))
 FUNC_11(VAR_4);
    while (*VAR_20 && *VAR_20 != 'p' && *VAR_20 != 'a')
 VAR_20++;
    if (*VAR_20 && VAR_21)
 FUNC_11(VAR_3);
    if (*VAR_20 == 'p')
 VAR_16 += 12;
    (void) FUNC_13(&VAR_14);
    VAR_22 = FUNC_8(&VAR_14);
    if (VAR_21) {
 VAR_18 = VAR_16;
 VAR_19 = VAR_17;
    }
    else {
 if ((VAR_18 = VAR_16 - VAR_22->tm_hour) < 0)
     VAR_18 += 24;
 if ((VAR_19 = VAR_17 - VAR_22->tm_min) < 0) {
     VAR_19 += 60;
     if ((--VAR_18) < 0)
  VAR_18 = 23;
 }
    }
    VAR_12 = FUNC_16(1, sizeof *VAR_12);



    VAR_12->t_when = VAR_14 - VAR_22->tm_sec + VAR_18 * 3600L + VAR_19 * 60L;


    for (VAR_13 = &VAR_9; *VAR_13 != ((void*)0) && VAR_12->t_when >= (*VAR_13)->t_when;
  VAR_13 = &(*VAR_13)->t_next)
 ;
    VAR_12->t_next = *VAR_13;
    *VAR_13 = VAR_12;
    VAR_12->t_lex = FUNC_9(VAR_10);
}
