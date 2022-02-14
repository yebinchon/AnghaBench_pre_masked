
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 char* FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,char const*,int) ;
 scalar_t__ FUNC_12 (char const*,char) ;
 scalar_t__ FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static tree
FUNC_15 (tree VAR_5, bool VAR_6)
{
  int VAR_7 = 0;


   const char *VAR_8 = FUNC_2 (FUNC_1 (VAR_5));
  char *VAR_9;
  char *VAR_10;
  tree VAR_11;


  if (*VAR_8 == '*' || FUNC_12 (VAR_8, '@'))
    return FUNC_1 (VAR_5);

  VAR_11 = FUNC_7 (FUNC_5 (VAR_5));
  if (VAR_11 != VAR_2)
    {



      if (FUNC_6 (FUNC_14 (VAR_11)) != VAR_4)
        return FUNC_1 (VAR_5);



      while (FUNC_6 (VAR_11) != VAR_4
      && FUNC_0 (FUNC_6 (VAR_11)))
 {
   int VAR_12
     = FUNC_4 (FUNC_8 (FUNC_6 (VAR_11)));


   VAR_12 = ((VAR_12 + VAR_3 - 1)
         / VAR_3 * VAR_3);
   VAR_7 += VAR_12;
   VAR_11 = FUNC_3 (VAR_11); }

     }


  VAR_9 = FUNC_9 (1 + FUNC_13 (VAR_8) + 1 + 8 + 1);
  VAR_10 = VAR_9;
  if (VAR_6)
    *VAR_10++ = VAR_1;
  FUNC_11 (VAR_10, "%s@%d", VAR_8, VAR_7/VAR_0);
  return FUNC_10 (VAR_9);
}
