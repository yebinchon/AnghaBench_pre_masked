
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OpenPGP_key ;


 int FUNC_0 (unsigned char*) ;
 int * FUNC_1 (unsigned char*,size_t) ;
 int FUNC_2 (int *) ;
 unsigned char* FUNC_3 (char const*,size_t*) ;

OpenPGP_key *
FUNC_4(const char *VAR_0)
{
 unsigned char *VAR_1 = ((void*)0);
 size_t VAR_2;
 OpenPGP_key *VAR_3;

 VAR_1 = FUNC_3(VAR_0, &VAR_2);
 VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_1);
 FUNC_2(VAR_3);
 return (VAR_3);
}
