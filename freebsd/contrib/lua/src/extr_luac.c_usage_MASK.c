
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,char const*) ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(const char* VAR_4)
{
 if (*VAR_4=='-')
  FUNC_1(VAR_3,"%s: unrecognized option '%s'\n",VAR_2,VAR_4);
 else
  FUNC_1(VAR_3,"%s: %s\n",VAR_2,VAR_4);
 FUNC_1(VAR_3,
  "usage: %s [options] [filenames]\n"
  "Available options are:\n"
  "  -l       list (use -l -l for full listing)\n"
  "  -o name  output to file 'name' (default is \"%s\")\n"
  "  -p       parse only\n"
  "  -s       strip debug information\n"
  "  -v       show version information\n"
  "  --       stop handling options\n"
  "  -        stop handling options and process stdin\n"
  ,VAR_2,VAR_1);
 FUNC_0(VAR_0);
}
