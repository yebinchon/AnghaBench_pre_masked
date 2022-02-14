
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void
FUNC_1(char *VAR_3, int *VAR_4)
{
 if (!FUNC_0(VAR_3, "krb5"))
  *VAR_4 |= VAR_1;
 else if (!FUNC_0(VAR_3, "krb5i"))
  *VAR_4 |= (VAR_1 | VAR_0);
 else if (!FUNC_0(VAR_3, "krb5p"))
  *VAR_4 |= (VAR_1 | VAR_2);
}
