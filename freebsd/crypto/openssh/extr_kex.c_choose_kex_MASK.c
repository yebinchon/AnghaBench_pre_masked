
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kexalg {int ec_nid; int hash_alg; int type; } ;
struct kex {char* name; int ec_nid; int hash_alg; int kex_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 struct kexalg* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*,int *) ;

__attribute__((used)) static int
FUNC_3(struct kex *VAR_2, char *VAR_3, char *VAR_4)
{
 const struct kexalg *VAR_5;

 VAR_2->name = FUNC_2(VAR_3, VAR_4, ((void*)0));

 FUNC_0("kex: algorithm: %s", VAR_2->name ? VAR_2->name : "(no match)");
 if (VAR_2->name == ((void*)0))
  return VAR_1;
 if ((VAR_5 = FUNC_1(VAR_2->name)) == ((void*)0))
  return VAR_0;
 VAR_2->kex_type = VAR_5->type;
 VAR_2->hash_alg = VAR_5->hash_alg;
 VAR_2->ec_nid = VAR_5->ec_nid;
 return 0;
}
