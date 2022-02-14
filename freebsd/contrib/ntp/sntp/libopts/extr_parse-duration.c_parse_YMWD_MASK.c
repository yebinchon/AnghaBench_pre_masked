
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef scalar_t__ cch_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__**,scalar_t__*,int ) ;
 scalar_t__* FUNC_2 (scalar_t__*,char) ;

__attribute__((used)) static time_t
FUNC_3 (cch_t * VAR_8)
{
  time_t VAR_9 = 0;
  cch_t * VAR_10 = FUNC_2 (VAR_8, 'Y');
  if (VAR_10 != ((void*)0))
    {
      VAR_9 = FUNC_1 (0, &VAR_8, VAR_10, VAR_6);
      VAR_8++;
    }

  VAR_10 = FUNC_2 (VAR_8, 'M');
  if (VAR_10 != ((void*)0))
    {
      VAR_9 = FUNC_1 (VAR_9, &VAR_8, VAR_10, VAR_4);
      VAR_8++;
    }

  VAR_10 = FUNC_2 (VAR_8, 'W');
  if (VAR_10 != ((void*)0))
    {
      VAR_9 = FUNC_1 (VAR_9, &VAR_8, VAR_10, VAR_5);
      VAR_8++;
    }

  VAR_10 = FUNC_2 (VAR_8, 'D');
  if (VAR_10 != ((void*)0))
    {
      VAR_9 = FUNC_1 (VAR_9, &VAR_8, VAR_10, VAR_3);
      VAR_8++;
    }

  while (FUNC_0 ((unsigned char)*VAR_8))
    VAR_8++;
  if (*VAR_8 != VAR_2)
    {
      VAR_7 = VAR_1;
      return VAR_0;
    }

  return VAR_9;
}
