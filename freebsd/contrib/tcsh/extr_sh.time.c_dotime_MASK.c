
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timeval_t ;
typedef int time_t ;
struct tms {scalar_t__ tms_cutime; scalar_t__ tms_cstime; int tms_utime; int tms_stime; } ;
struct sysrusage {scalar_t__ tms_cutime; scalar_t__ tms_cstime; int tms_utime; int tms_stime; } ;
struct rusage {int dummy; } ;
struct process_stats {scalar_t__ tms_cutime; scalar_t__ tms_cstime; int tms_utime; int tms_stime; } ;
typedef int * command ;
typedef int ruch ;
typedef int ru1 ;
typedef int * clock_t ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int ,struct tms*,struct tms*) ;
 int FUNC_2 (int ,struct rusage*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct tms*,int ,int) ;
 int FUNC_5 (int *,struct tms*,int *,int ****) ;
 int VAR_3 ;
 int FUNC_6 (struct tms*,struct tms*) ;
 int **** VAR_4 ;
 int * FUNC_7 (struct tms*) ;
 int VAR_5 ;

void
FUNC_8(Char **VAR_6, struct command *VAR_7)
{
    time_t VAR_8;




    struct tms VAR_9;

    VAR_8 = *FUNC_7(&VAR_9);
    VAR_9.tms_stime += VAR_9.tms_cstime;
    VAR_9.tms_utime += VAR_9.tms_cutime;
    VAR_9.tms_cstime = 0;
    VAR_9.tms_cutime = 0;
    FUNC_5(&VAR_5, &VAR_9, &VAR_8, VAR_4);


    FUNC_0(VAR_7);
    FUNC_0(VAR_6);
}
