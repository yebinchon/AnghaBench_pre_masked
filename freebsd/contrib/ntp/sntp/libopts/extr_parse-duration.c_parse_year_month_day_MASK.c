
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
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int **,int *,int ) ;
 int * FUNC_1 (int *,char) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static time_t
FUNC_3 (cch_t * VAR_6, cch_t * VAR_7)
{
  time_t VAR_8 = 0;

  VAR_8 = FUNC_0 (0, &VAR_6, VAR_7, VAR_4);

  VAR_6++;
  VAR_7 = FUNC_1 (VAR_6, '-');
  if (VAR_7 == ((void*)0))
    {
      VAR_5 = VAR_1;
      return VAR_0;
    }
  VAR_8 = FUNC_0 (VAR_8, &VAR_6, VAR_7, VAR_3);

  VAR_6++;
  VAR_7 = VAR_6 + FUNC_2 (VAR_6);
  return FUNC_0 (VAR_8, &VAR_6, VAR_7, VAR_2);
}
