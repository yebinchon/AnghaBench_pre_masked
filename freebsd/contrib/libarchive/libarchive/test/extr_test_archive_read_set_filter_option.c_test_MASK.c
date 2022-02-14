
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 struct archive* FUNC_1 () ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*,int ,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_4(int VAR_2)
{
 struct archive* VAR_3 = FUNC_1();

 if (!VAR_2)
  FUNC_2(VAR_3);

 FUNC_3(VAR_3, VAR_1, ((void*)0), ((void*)0), ((void*)0));
 FUNC_3(VAR_3, VAR_1, "", "", "");

 FUNC_3(VAR_3, VAR_0, ((void*)0), "fubar", ((void*)0));
 FUNC_3(VAR_3, VAR_0, ((void*)0), "fubar", "snafu");
 FUNC_3(VAR_3, VAR_0, "fubar", "snafu", ((void*)0));
 FUNC_3(VAR_3, VAR_0, "fubar", "snafu", "betcha");

 FUNC_0(VAR_3);
}
