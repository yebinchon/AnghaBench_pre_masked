
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 () ;
 int VAR_0 ;

void
FUNC_3(void)
{
 const char *VAR_1;

 VAR_1 = FUNC_2();

 FUNC_1(VAR_0, "Usage:\n");
 FUNC_1(VAR_0, "  List:    %s -tf <archive-filename>\n", VAR_1);
 FUNC_1(VAR_0, "  Extract: %s -xf <archive-filename>\n", VAR_1);
 FUNC_1(VAR_0, "  Create:  %s -cf <archive-filename> [filenames...]\n", VAR_1);
 FUNC_1(VAR_0, "  Help:    %s --help\n", VAR_1);
 FUNC_0(1);
}
