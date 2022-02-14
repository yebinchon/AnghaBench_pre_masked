
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ htab_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int,int ,int ,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__,char const*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (int) ;

unsigned int
FUNC_9 (tree VAR_9, const char *VAR_10, int VAR_11)
{
  static htab_t VAR_12;
  unsigned int VAR_13;
  unsigned int **VAR_14;




  if (!VAR_12)
    VAR_12 = FUNC_5 (31, VAR_8, VAR_7, ((void*)0));

  if (VAR_9 && FUNC_2 (VAR_9) == VAR_0)
    VAR_13 = VAR_2;
  else if (VAR_9 && FUNC_3 (VAR_9, VAR_11))
    VAR_13 = 0;
  else
    {
      VAR_13 = VAR_5;

      if (VAR_9 && FUNC_2 (VAR_9) == VAR_6
   && FUNC_7 ("shared", FUNC_0 (VAR_9)))
 VAR_13 |= VAR_4;
    }

  if (VAR_9 && FUNC_1 (VAR_9))
    VAR_13 |= VAR_3;


  VAR_14 = (unsigned int **) FUNC_6 (VAR_12, VAR_10, VAR_1);
  if (!*VAR_14)
    {
      *VAR_14 = (unsigned int *) FUNC_8 (sizeof (unsigned int));
      **VAR_14 = VAR_13;
    }
  else
    {
      if (VAR_9 && **VAR_14 != VAR_13)
 FUNC_4 ("%q+D causes a section type conflict", VAR_9);
    }

  return VAR_13;
}
