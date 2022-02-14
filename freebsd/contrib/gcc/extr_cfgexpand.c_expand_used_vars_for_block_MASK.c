
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (size_t,size_t) ;
 int FUNC_8 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_9 (size_t) ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_10 (tree VAR_2, bool VAR_3)
{
  size_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
  tree VAR_9;

  VAR_6 = VAR_3 ? 0 : VAR_1;


  for (VAR_9 = FUNC_2 (VAR_2); VAR_9 ; VAR_9 = FUNC_4 (VAR_9))
    if (FUNC_6 (VAR_9)



 || (!VAR_0 && FUNC_5 (VAR_9)
     && FUNC_3 (VAR_9)))
      FUNC_8 (VAR_9, VAR_3);

  VAR_7 = VAR_1;


  for (VAR_9 = FUNC_1 (VAR_2); VAR_9 ; VAR_9 = FUNC_0 (VAR_9))
    FUNC_10 (VAR_9, 0);






  if (VAR_6 < VAR_7)
    {
      VAR_8 = VAR_1;
      FUNC_9 (VAR_8);

      for (VAR_4 = VAR_6; VAR_4 < VAR_8; ++VAR_4)
 for (VAR_5 = VAR_4 < VAR_7 ? VAR_4+1 : VAR_7; VAR_5-- > VAR_6 ;)
   FUNC_7 (VAR_4, VAR_5);
    }
}
