
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef scalar_t__ strtol_error ;
typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char const*,char**,int ,scalar_t__*,int ) ;

__attribute__((used)) static void
FUNC_2 (int VAR_5, char **VAR_6, char VAR_7)
{
  uintmax_t VAR_8;
  off_t VAR_9;
  char const *VAR_10 = *VAR_6;
  strtol_error VAR_11 = FUNC_1 (VAR_10, VAR_6, 0, &VAR_8, VAR_4);
  if (! (VAR_11 == VAR_1
  || (VAR_11 == VAR_0 && **VAR_6 == VAR_7))
      || (VAR_9 = VAR_8) < 0 || VAR_9 != VAR_8 || VAR_8 == VAR_2)
    FUNC_0 ("invalid --ignore-initial value `%s'", VAR_10);
  if (VAR_3[VAR_5] < VAR_9)
    VAR_3[VAR_5] = VAR_9;
}
