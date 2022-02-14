
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int keyid_t ;


 int FUNC_0 (int ,int,int const*,size_t,int *) ;
 size_t FUNC_1 (char const*) ;

int
FUNC_2(
 keyid_t VAR_0,
 int VAR_1,
 const u_char *VAR_2
 )
{
 size_t VAR_3;

 VAR_3 = FUNC_1((const char *)VAR_2);
 if (0 == VAR_3)
  return 0;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0));
 return 1;
}
