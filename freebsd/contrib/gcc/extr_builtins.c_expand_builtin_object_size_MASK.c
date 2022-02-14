
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;
typedef int rtx ;
typedef int location_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,int) ;
 char* FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,int *,char*) ;
 int FUNC_8 () ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int ,int ,int ) ;

rtx
FUNC_13 (tree VAR_6)
{
  tree VAR_7;
  int VAR_8;
  tree VAR_9 = FUNC_9 (VAR_6);
  tree VAR_10 = FUNC_4 (VAR_6, 1);
  location_t VAR_11 = FUNC_0 (VAR_6);

  if (!FUNC_12 (VAR_10, VAR_2, VAR_1, VAR_3))
    {
      FUNC_7 ("%Hfirst argument of %D must be a pointer, second integer constant",
      &VAR_11, VAR_9);
      FUNC_8 ();
      return VAR_4;
    }

  VAR_7 = FUNC_5 (FUNC_2 (VAR_10));
  FUNC_1 (VAR_7);

  if (FUNC_3 (VAR_7) != VAR_0
      || FUNC_10 (VAR_7) < 0
      || FUNC_6 (VAR_7, 3) > 0)
    {
      FUNC_7 ("%Hlast argument of %D is not integer constant between 0 and 3",
      &VAR_11, VAR_9);
      FUNC_8 ();
      return VAR_4;
    }

  VAR_8 = FUNC_11 (VAR_7, 0);

  return VAR_8 < 2 ? VAR_5 : VAR_4;
}
