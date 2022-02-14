
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*,int ,int ,char*,char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_3 (void)
{
  FUNC_2
    (FUNC_1 ("remotecache", VAR_0, VAR_5,
    (char *) &VAR_1,
    "Set cache use for remote targets.\nWhen on, use data caching for remote targets.  For many remote targets\nthis option can offer better throughput for reading target memory.\nUnfortunately, gdb does not currently know anything about volatile\nregisters and thus data caching will produce incorrect results with\nvolatile registers are in use.  By default, this option is off.",






    &VAR_3),
     &VAR_4);

  FUNC_0 ("dcache", VAR_2,
     "Print information on the dcache performance.");

}
