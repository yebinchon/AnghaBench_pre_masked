
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {int exp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct table_elt*,int) ;
 struct table_elt** VAR_2 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  int VAR_3;
  struct table_elt *VAR_4;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    for (VAR_4 = VAR_2[VAR_3]; VAR_4; VAR_4 = VAR_2[VAR_3])
      {


 if (FUNC_0 (VAR_4->exp))
   FUNC_1 (VAR_4->exp, VAR_1);
 else
   FUNC_2 (VAR_4, VAR_3);
      }
}
