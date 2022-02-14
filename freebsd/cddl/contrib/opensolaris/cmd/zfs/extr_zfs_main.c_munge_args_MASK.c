
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline const char *
FUNC_2(int VAR_1, char **VAR_2, boolean_t VAR_3, size_t VAR_4,
    char **VAR_5)
{
 if (VAR_3 && VAR_1 == VAR_4 - 1)
  *VAR_5 = ((void*)0);
 else if (VAR_1 == VAR_4)
  *VAR_5 = VAR_2[VAR_1 - 2];
 else
  FUNC_0(VAR_3, VAR_0,
      FUNC_1("wrong number of parameters\n"));

 return (VAR_2[VAR_1 - 1]);
}
