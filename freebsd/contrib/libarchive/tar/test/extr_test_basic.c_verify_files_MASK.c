
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*,int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*,char const*) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_0)
{
 FUNC_0(VAR_0);


 FUNC_9("%s", VAR_0);
 FUNC_6("file", -1);
 FUNC_9("%s", VAR_0);
 FUNC_3("file", 10);
 FUNC_9("%s", VAR_0);
 FUNC_1("123456789", 10, "file");
 FUNC_9("%s", VAR_0);
 FUNC_2("file", 2);


 FUNC_9("%s", VAR_0);
 FUNC_6("linkfile", -1);
 FUNC_9("%s", VAR_0);
 FUNC_3("linkfile", 10);
 FUNC_1("123456789", 10, "linkfile");
 FUNC_2("linkfile", 2);
 FUNC_5("file", "linkfile");


 if (FUNC_8())
  FUNC_7("symlink", "file", 0);


 FUNC_9("%s", VAR_0);
 FUNC_4("dir", 0775);
 FUNC_0("..");
}
