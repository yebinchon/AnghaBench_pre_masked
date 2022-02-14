
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpointer ;
typedef int gchar ;
typedef int GtkFileSelection ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(GtkFileSelection * VAR_0, gpointer VAR_1)
{
 const gchar *VAR_2;

 VAR_2 = FUNC_4(FUNC_0
          (VAR_1));

 if (FUNC_3(VAR_2))
  FUNC_6(FUNC_2("Error"), FUNC_2("Unable to save configuration !"));

 FUNC_5(FUNC_1(VAR_1));
}
