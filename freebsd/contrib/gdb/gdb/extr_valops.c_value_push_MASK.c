
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 int FUNC_4 (scalar_t__,int ,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_5 (CORE_ADDR VAR_4, struct value *VAR_5)
{
  int VAR_6 = FUNC_1 (FUNC_3 (VAR_5));
  int VAR_7 = VAR_6;
  int VAR_8;


  if (VAR_1)
    VAR_7 = ((VAR_6 + VAR_1 / VAR_3 - 1)
       & ~(VAR_1 / VAR_3 - 1));


  if (VAR_2 == VAR_0)
    VAR_8 = VAR_7 - VAR_6;
  else
    VAR_8 = 0;

  if (FUNC_0 (1, 2))
    {

      VAR_4 -= VAR_7;
      FUNC_4 (VAR_4 + VAR_8, FUNC_2 (VAR_5), VAR_6);
    }
  else
    {

      FUNC_4 (VAR_4 + VAR_8, FUNC_2 (VAR_5), VAR_6);
      VAR_4 += VAR_7;
    }

  return VAR_4;
}
