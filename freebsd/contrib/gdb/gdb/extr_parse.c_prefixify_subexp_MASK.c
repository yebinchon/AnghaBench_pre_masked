
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expression {int * elts; } ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct expression*,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct expression*,int,int*,int*) ;

__attribute__((used)) static void
FUNC_5 (struct expression *VAR_0,
    struct expression *VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4;
  int VAR_5;
  int VAR_6;
  int *VAR_7;
  enum exp_opcode VAR_8;

  FUNC_4 (VAR_0, VAR_2, &VAR_4, &VAR_5);



  VAR_2 -= VAR_4;
  FUNC_3 (&VAR_1->elts[VAR_3], &VAR_0->elts[VAR_2],
   FUNC_0 (VAR_4));
  VAR_3 += VAR_4;


  VAR_7 = (int *) FUNC_1 (VAR_5 * sizeof (int));
  for (VAR_6 = VAR_5 - 1; VAR_6 >= 0; VAR_6--)
    {
      VAR_4 = FUNC_2 (VAR_0, VAR_2);
      VAR_7[VAR_6] = VAR_4;
      VAR_2 -= VAR_4;
    }







  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
      VAR_4 = VAR_7[VAR_6];
      VAR_2 += VAR_4;
      FUNC_5 (VAR_0, VAR_1, VAR_2, VAR_3);
      VAR_3 += VAR_4;
    }
}
