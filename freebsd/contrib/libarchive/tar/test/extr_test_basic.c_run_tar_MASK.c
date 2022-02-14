
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char*,int ,char const*) ;
 int FUNC_5 (char*,int ,char const*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1, const char *VAR_2,
    const char *VAR_3, const char *VAR_4)
{
 int VAR_5;

 FUNC_3(VAR_1, 0775);


 VAR_5 = FUNC_5("%s cf - %s %s >%s/archive 2>%s/pack.err", VAR_0, VAR_2, VAR_4, VAR_1, VAR_1);
 FUNC_4("Error invoking %s cf -", VAR_0, VAR_2);
 FUNC_2(VAR_5, 0);

 FUNC_0(VAR_1);


 FUNC_1("pack.err");




 VAR_5 = FUNC_5("%s xf archive %s >unpack.out 2>unpack.err",
     VAR_0, VAR_3);
 FUNC_4("Error invoking %s xf archive %s", VAR_0, VAR_3);
 FUNC_2(VAR_5, 0);


 FUNC_1("unpack.err");
 FUNC_0("..");
}
