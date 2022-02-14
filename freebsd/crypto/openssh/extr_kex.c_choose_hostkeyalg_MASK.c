
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kex {char* hostkey_alg; scalar_t__ hostkey_type; int hostkey_nid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char*,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct kex *VAR_3, char *VAR_4, char *VAR_5)
{
 VAR_3->hostkey_alg = FUNC_1(VAR_4, VAR_5, ((void*)0));

 FUNC_0("kex: host key algorithm: %s",
     VAR_3->hostkey_alg ? VAR_3->hostkey_alg : "(no match)");
 if (VAR_3->hostkey_alg == ((void*)0))
  return VAR_2;
 VAR_3->hostkey_type = FUNC_3(VAR_3->hostkey_alg);
 if (VAR_3->hostkey_type == VAR_0)
  return VAR_1;
 VAR_3->hostkey_nid = FUNC_2(VAR_3->hostkey_alg);
 return 0;
}
