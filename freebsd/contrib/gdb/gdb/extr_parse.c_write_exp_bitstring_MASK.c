
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stoken {int length; int ptr; } ;
struct expression {int * elts; } ;
typedef int LONGEST ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 struct expression* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,scalar_t__) ;

void
FUNC_6 (struct stoken VAR_4)
{
  int VAR_5 = VAR_4.length;
  int VAR_6 = (VAR_5 + VAR_0 - 1) / VAR_0;
  int VAR_7;
  char *VAR_8;





  VAR_7 = 2 + FUNC_0 (VAR_6);




  if ((VAR_2 + VAR_7) >= VAR_3)
    {
      VAR_3 = FUNC_2 (VAR_3 * 2, VAR_2 + VAR_7 + 10);
      VAR_1 = (struct expression *)
 FUNC_5 ((char *) VAR_1, (sizeof (struct expression)
        + FUNC_1 (VAR_3)));
    }





  FUNC_4 ((LONGEST) VAR_5);
  VAR_8 = (char *) &VAR_1->elts[VAR_2];
  FUNC_3 (VAR_8, VAR_4.ptr, VAR_6);
  VAR_2 += VAR_7 - 2;
  FUNC_4 ((LONGEST) VAR_5);
}
