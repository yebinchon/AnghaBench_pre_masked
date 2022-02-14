
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (char*,int ,char const*,char const*,char const*) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_1)
{
 int VAR_2;

 if (!FUNC_2(VAR_1, 0775))
  return;




 VAR_2 = FUNC_5("%s -p %s <filelist >%s/stdout 2>%s/stderr",
     VAR_0, VAR_1, VAR_1, VAR_1);
 FUNC_4("Error invoking %s -p", VAR_0);
 FUNC_1(VAR_2, 0);

 FUNC_0(VAR_1);


 FUNC_4("Error invoking %s -p in dir %s",
     VAR_0, VAR_1);
 FUNC_3("1 block\n", "stderr");

 FUNC_6("passthrough");
 FUNC_0("..");
}
