
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef char cch_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned long,int ,int) ;
 unsigned long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static time_t
FUNC_3 (time_t VAR_4, cch_t * VAR_5)
{
  int VAR_6 = 0;

  VAR_3 = 0;



  while ((*VAR_5 == ':') && (VAR_6++ <= 1))
    {
      unsigned long VAR_7 = FUNC_2 (VAR_5+1, &VAR_5, 10);

      if (VAR_3 != 0)
        return VAR_0;

      VAR_4 = FUNC_1 (VAR_7, VAR_4, 60);

      if (VAR_3 != 0)
        return VAR_0;
    }


  while (FUNC_0 ((unsigned char)*VAR_5))
    VAR_5++;
  if (*VAR_5 != VAR_2)
    {
      VAR_3 = VAR_1;
      return VAR_0;
    }

  return VAR_4;
}
