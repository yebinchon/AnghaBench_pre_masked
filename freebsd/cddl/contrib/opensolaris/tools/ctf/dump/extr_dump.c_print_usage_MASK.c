
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 char* FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_1, int VAR_2)
{
 (void) FUNC_0(VAR_1, "Usage: %s [-dfhlsSt] [-u file] file\n", FUNC_1());

 if (VAR_2) {
  (void) FUNC_0(VAR_1,
      "\t-d  dump data object section\n"
      "\t-f  dump function section\n"
      "\t-h  dump file header\n"
      "\t-l  dump label table\n"
      "\t-s  dump string table\n"
      "\t-S  dump statistics\n"
      "\t-t  dump type section\n"
      "\t-u  save uncompressed CTF to a file\n");
 }

 return (VAR_0);
}
