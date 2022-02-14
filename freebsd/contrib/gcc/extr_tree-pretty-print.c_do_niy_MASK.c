
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int pretty_printer ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int ,int,int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 char** VAR_0 ;

__attribute__((used)) static void
FUNC_7 (pretty_printer *VAR_1, tree VAR_2)
{
  int VAR_3, VAR_4;

  FUNC_6 (VAR_1, "<<< Unknown tree: ");
  FUNC_6 (VAR_1, VAR_0[(int) FUNC_1 (VAR_2)]);

  if (FUNC_0 (VAR_2))
    {
      VAR_4 = FUNC_2 (FUNC_1 (VAR_2));
      for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
 {
   FUNC_5 (VAR_1, 2);
   FUNC_4 (VAR_1, FUNC_3 (VAR_2, VAR_3), 2, 0, 0);
 }
    }

  FUNC_6 (VAR_1, " >>>\n");
}
