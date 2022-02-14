
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tblentry {scalar_t__ cmdtype; } ;


 scalar_t__ VAR_0 ;
 struct tblentry* FUNC_0 (char const*,int ) ;

int
FUNC_1(const char *VAR_1)
{
 struct tblentry *VAR_2;
 VAR_2 = FUNC_0(VAR_1, 0);
 return (VAR_2 != ((void*)0) && VAR_2->cmdtype == VAR_0);
}
