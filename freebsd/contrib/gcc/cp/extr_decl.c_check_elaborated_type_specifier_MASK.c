
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;
typedef enum tag_types { ____Placeholder_tag_types } tag_types ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*,char*,...) ;
 char* VAR_5 ;
 char* FUNC_9 (int) ;
 int VAR_6 ;

tree
FUNC_10 (enum tag_types VAR_7,
     tree VAR_8,
     bool VAR_9)
{
  tree VAR_10;







  if (FUNC_4 (VAR_8))
    VAR_8 = FUNC_7 (FUNC_6 (VAR_8));

  VAR_10 = FUNC_6 (VAR_8);



  if (FUNC_5 (VAR_10) == VAR_2)
    {
      FUNC_8 ("using template type parameter %qT after %qs",
      VAR_10, FUNC_9 (VAR_7));
      return VAR_5;
    }
  else if (!FUNC_2 (VAR_8)
    && VAR_7 != VAR_6)
    {
      FUNC_8 ("using typedef-name %qD after %qs", VAR_8, FUNC_9 (VAR_7));
      FUNC_8 ("%q+D has a previous declaration here", VAR_8);
      return VAR_5;
    }
  else if (FUNC_5 (VAR_10) != VAR_1
    && FUNC_5 (VAR_10) != VAR_3
    && VAR_7 != VAR_4
    && VAR_7 != VAR_6)
    {
      FUNC_8 ("%qT referred to as %qs", VAR_10, FUNC_9 (VAR_7));
      FUNC_8 ("%q+T has a previous declaration here", VAR_10);
      return VAR_5;
    }
  else if (FUNC_5 (VAR_10) != VAR_0
    && VAR_7 == VAR_4)
    {
      FUNC_8 ("%qT referred to as enum", VAR_10);
      FUNC_8 ("%q+T has a previous declaration here", VAR_10);
      return VAR_5;
    }
  else if (!VAR_9
    && FUNC_5 (VAR_10) == VAR_1
    && FUNC_0 (VAR_10))
    {







      FUNC_8 ("template argument required for %<%s %T%>",
      FUNC_9 (VAR_7),
      FUNC_3 (FUNC_1 (VAR_10)));
      return VAR_5;
    }

  return VAR_10;
}
