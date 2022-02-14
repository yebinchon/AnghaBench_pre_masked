
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stoken {int length; int ptr; } ;
struct expression {int * elts; } ;
typedef int LONGEST ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct expression* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,scalar_t__) ;

void
FUNC_6 (struct stoken VAR_3)
{
  int VAR_4 = VAR_3.length;
  int VAR_5;
  char *VAR_6;






  VAR_5 = 2 + FUNC_0 (VAR_4 + 1);




  if ((VAR_1 + VAR_5) >= VAR_2)
    {
      VAR_2 = FUNC_2 (VAR_2 * 2, VAR_1 + VAR_5 + 10);
      VAR_0 = (struct expression *)
 FUNC_5 ((char *) VAR_0, (sizeof (struct expression)
        + FUNC_1 (VAR_2)));
    }






  FUNC_4 ((LONGEST) VAR_4);
  VAR_6 = (char *) &VAR_0->elts[VAR_1];
  FUNC_3 (VAR_6, VAR_3.ptr, VAR_4);
  *(VAR_6 + VAR_4) = '\0';
  VAR_1 += VAR_5 - 2;
  FUNC_4 ((LONGEST) VAR_4);
}
