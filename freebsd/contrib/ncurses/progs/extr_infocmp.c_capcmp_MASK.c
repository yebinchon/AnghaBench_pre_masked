
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PredIdx ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_3(PredIdx VAR_2, const char *VAR_3, const char *VAR_4)

{
    if (!FUNC_0(VAR_3) && !FUNC_0(VAR_4))
 return (VAR_3 != VAR_4);
    else if (!FUNC_0(VAR_3) || !FUNC_0(VAR_4))
 return (1);

    if ((VAR_2 == VAR_0) || !VAR_1)
 return (FUNC_2(VAR_3, VAR_4));
    else
 return (FUNC_1(VAR_3, VAR_4));
}
