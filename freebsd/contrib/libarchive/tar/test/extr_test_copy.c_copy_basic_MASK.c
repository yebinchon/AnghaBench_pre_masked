
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_2;







 FUNC_2("plain", 0775);
 FUNC_1(0, FUNC_3("plain"));




 VAR_2 = FUNC_5("%s cf archive -C ../original f d l m s >pack.out 2>pack.err",
     VAR_1);
 FUNC_4("Error invoking \"%s cf\"", VAR_1);
 FUNC_1(VAR_2, 0);


 FUNC_0("pack.err");
 FUNC_0("pack.out");




 VAR_2 = FUNC_5("%s xf archive >unpack.out 2>unpack.err", VAR_1);
 FUNC_4("Error invoking %s xf archive", VAR_1);
 FUNC_1(VAR_2, 0);


 FUNC_0("unpack.err");
 FUNC_0("unpack.out");

 FUNC_6(VAR_0);
 FUNC_1(0, FUNC_3(".."));
}
