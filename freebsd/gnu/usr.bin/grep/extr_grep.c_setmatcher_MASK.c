
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int,int ,char*) ;
 char const* VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static void
FUNC_3 (char const *VAR_1)
{
  if (VAR_0 && FUNC_2 (VAR_0, VAR_1) != 0)
    FUNC_1 (2, 0, FUNC_0("conflicting matchers specified"));
  VAR_0 = VAR_1;
}
