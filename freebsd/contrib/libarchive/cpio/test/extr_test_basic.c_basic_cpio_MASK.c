
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char const*,char const*,...) ;
 int FUNC_5 (char*,int ,char const*,...) ;
 int VAR_0 ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_1,
    const char *VAR_2,
    const char *VAR_3,
    const char *VAR_4, const char *VAR_5)
{
 int VAR_6;

 if (!FUNC_2(VAR_1, 0775))
     return;


 VAR_6 = FUNC_5("%s -R 1000:1000 -o %s < filelist >%s/archive 2>%s/pack.err",
     VAR_0, VAR_2, VAR_1, VAR_1);
 FUNC_4("Error invoking %s -o %s", VAR_0, VAR_2);
 FUNC_1(VAR_6, 0);

 FUNC_0(VAR_1);


 FUNC_4("Expected: %s, options=%s", VAR_4, VAR_2);
 FUNC_3(VAR_4, "pack.err");




 VAR_6 = FUNC_5("%s -i %s< archive >unpack.out 2>unpack.err",
     VAR_0, VAR_3);
 FUNC_4("Error invoking %s -i %s", VAR_0, VAR_3);
 FUNC_1(VAR_6, 0);


 FUNC_4("Error invoking %s -i %s in dir %s", VAR_0, VAR_3, VAR_1);
 FUNC_3(VAR_5, "unpack.err");

 FUNC_6(VAR_2);

 FUNC_0("..");
}
