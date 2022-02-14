
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_4 (void)
{
  FUNC_3 ();
  FUNC_2 (&VAR_6);
  FUNC_1 ("proc", VAR_0,
     "Show /proc process information about any running process.\nSpecify process id, or use the program being debugged by default.\nSpecify keyword 'mappings' for detailed info on memory mappings.");


  FUNC_0 ("proc-trace-entry", VAR_1, VAR_2,
    "Give a trace of entries into the syscall.");
  FUNC_0 ("proc-trace-exit", VAR_1, VAR_3,
    "Give a trace of exits from the syscall.");
  FUNC_0 ("proc-untrace-entry", VAR_1, VAR_4,
    "Cancel a trace of entries into the syscall.");
  FUNC_0 ("proc-untrace-exit", VAR_1, VAR_5,
    "Cancel a trace of exits from the syscall.");
}
