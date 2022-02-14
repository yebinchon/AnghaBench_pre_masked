
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkWidget ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ,int ,int ,char*,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6 (GtkWidget *VAR_3, const char *VAR_4)
{
 GtkWidget *VAR_5;

 VAR_5 = FUNC_3(FUNC_1(VAR_3), 0,
         VAR_1,
         VAR_0,
         "Could not grab %s. "
         "A malicious client may be eavesdropping "
         "on your session.", VAR_4);
 FUNC_5(FUNC_1(VAR_5), VAR_2);

 FUNC_2(FUNC_0(VAR_5));

 FUNC_4(VAR_5);
}
