
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct field {int type; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1 (struct field *VAR_0, int VAR_1, int VAR_2)
{
  if (VAR_0 != ((void*)0))
    {
      int VAR_3;

      for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 FUNC_0 (VAR_0[VAR_3].type, VAR_2 + 2);
    }
}
