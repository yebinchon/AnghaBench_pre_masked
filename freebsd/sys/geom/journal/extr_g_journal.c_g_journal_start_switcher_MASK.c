
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_class {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct g_class*,int **,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct g_class *VAR_4)
{
 int VAR_5;

 FUNC_2();
 FUNC_1(VAR_2 == ((void*)0));
 VAR_3 = VAR_0;
 VAR_5 = FUNC_3(VAR_1, VAR_4, &VAR_2,
     0, 0, "g_journal switcher");
 FUNC_0(VAR_5 == 0, ("Cannot create switcher thread."));
}
