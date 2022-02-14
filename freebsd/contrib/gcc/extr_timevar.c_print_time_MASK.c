
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*,long,long,long) ;
 long FUNC_2 () ;
 int VAR_0 ;

void
FUNC_3 (const char *VAR_1, long VAR_2)
{
  long VAR_3 = FUNC_2 ();
  FUNC_1 (VAR_0,
    FUNC_0("time in %s: %ld.%06ld (%ld%%)\n"),
    VAR_1, VAR_2 / 1000000, VAR_2 % 1000000,
    VAR_3 == 0 ? 0
    : (long) (((100.0 * (double) VAR_2) / (double) VAR_3) + .5));
}
