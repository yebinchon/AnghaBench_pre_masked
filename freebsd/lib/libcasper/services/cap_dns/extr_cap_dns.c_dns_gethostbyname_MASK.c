
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,char*) ;
 struct hostent* FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (struct hostent*,int *) ;
 scalar_t__ FUNC_4 (int const*,char*) ;
 int FUNC_5 (int const*,char*) ;

__attribute__((used)) static int
FUNC_6(const nvlist_t *VAR_2, const nvlist_t *VAR_3,
    nvlist_t *VAR_4)
{
 struct hostent *VAR_5;
 int VAR_6;

 if (!FUNC_1(VAR_2, "NAME2ADDR") &&
     !FUNC_1(VAR_2, "NAME"))
  return (VAR_0);

 VAR_6 = (int)FUNC_4(VAR_3, "family");

 if (!FUNC_0(VAR_2, VAR_6))
  return (VAR_0);

 VAR_5 = FUNC_2(FUNC_5(VAR_3, "name"), VAR_6);
 if (VAR_5 == ((void*)0))
  return (VAR_1);
 FUNC_3(VAR_5, VAR_4);
 return (0);
}
