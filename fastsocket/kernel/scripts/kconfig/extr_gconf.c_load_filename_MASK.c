
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpointer ;
typedef int gchar ;
typedef int GtkFileSelection ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(GtkFileSelection * VAR_1, gpointer VAR_2)
{
 const gchar *VAR_3;

 VAR_3 = FUNC_4(FUNC_0
          (VAR_2));

 if (FUNC_2(VAR_3))
  FUNC_5(FUNC_1("Error"), FUNC_1("Unable to load configuration !"));
 else
  FUNC_3(&VAR_0);
}
