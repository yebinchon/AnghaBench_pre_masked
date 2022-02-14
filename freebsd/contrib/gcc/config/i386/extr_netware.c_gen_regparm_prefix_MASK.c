
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 char* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,char*,unsigned int,char const*) ;
 scalar_t__ FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static tree
FUNC_15 (tree VAR_4, unsigned VAR_5)
{
  unsigned VAR_6 = 0;


  const char *VAR_7 = FUNC_2 (FUNC_1 (VAR_4));
  char *VAR_8;
  tree VAR_9 = FUNC_7 (FUNC_5 (VAR_4));

  if (VAR_9 != VAR_1)
    {

      if (FUNC_6 (FUNC_14 (VAR_9)) != VAR_3)
 return VAR_1;



      while (FUNC_6 (VAR_9) != VAR_3
      && FUNC_0 (FUNC_6 (VAR_9)))
 {
   unsigned VAR_10
     = FUNC_4 (FUNC_8 (FUNC_6 (VAR_9)));



   VAR_10 = ((VAR_10 + VAR_2 - 1)
         / VAR_2 * VAR_2);
   VAR_6 += VAR_10;
   VAR_9 = FUNC_3 (VAR_9);
 }
    }

  if (VAR_5 > VAR_6 / VAR_0)
    VAR_5 = VAR_6 / VAR_0;
  FUNC_10 (VAR_5 <= 9);
  VAR_8 = FUNC_9 (3 + FUNC_13 (VAR_7) + 1);
  return FUNC_11 (VAR_8,
         FUNC_12 (VAR_8,
           "_%u@%s",
           VAR_5,
           VAR_7));
}
