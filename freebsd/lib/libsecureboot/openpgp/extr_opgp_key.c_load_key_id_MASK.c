
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OpenPGP_key ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (char const*) ;
 int * FUNC_2 (char const*) ;

OpenPGP_key *
FUNC_3(const char *VAR_0)
{
 OpenPGP_key *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_0);

 FUNC_0(2, ("load_key_id(%s): %s\n", VAR_0, VAR_1 ? "found" : "nope"));
 return (VAR_1);
}
