
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int cch_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int **,int *,int) ;
 int * FUNC_1 (int *,char) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static time_t
FUNC_3 (cch_t * VAR_5, cch_t * VAR_6)
{
  time_t VAR_7 = 0;

  VAR_7 = FUNC_0 (0, &VAR_5, VAR_6, VAR_2);

  VAR_5++;
  VAR_6 = FUNC_1 (VAR_5, ':');
  if (VAR_6 == ((void*)0))
    {
      VAR_4 = VAR_1;
      return VAR_0;
    }

  VAR_7 = FUNC_0 (VAR_7, &VAR_5, VAR_6, VAR_3);

  VAR_5++;
  VAR_6 = VAR_5 + FUNC_2 (VAR_5);
  return FUNC_0 (VAR_7, &VAR_5, VAR_6, 1);
}
