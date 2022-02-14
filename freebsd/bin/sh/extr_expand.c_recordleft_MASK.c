
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char const*) ;
 char const* VAR_0 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1, const char *VAR_2, char *VAR_3)
{
 int VAR_4;

 VAR_4 = ((VAR_1 - 1) - (VAR_2 - VAR_3)) - VAR_0;
 FUNC_0(VAR_4, VAR_0);
 while (VAR_2 != VAR_1 - 1)
  *VAR_3++ = *VAR_2++;
}
