
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char const* const,char*,char const* const,char*,char const* const,char*,char const* const,char const* const,char*,char const* const,char const* const) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2()
{
 const char *const VAR_1 =
     "[-b blocksize] [-f file | -P pipecommand] [-s fileno]";
 const char *const VAR_2 = "[file ...]";

 (void)FUNC_1(VAR_0, "usage:\t%s %s\n\t%s %s\n\t%s %s\n"
     "\t%s %s %s\n\t%s %s %s\n",
     "restore -i [-dhmNuvy]", VAR_1,
     "restore -R [-dNuvy]", VAR_1,
     "restore -r [-dNuvy]", VAR_1,
     "restore -t [-dhNuvy]", VAR_1, VAR_2,
     "restore -x [-dhmNuvy]", VAR_1, VAR_2);
 FUNC_0(1);
}
