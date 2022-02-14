
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct gss_api_mech {int * gm_upcall_enctypes; } ;


 struct gss_api_mech* FUNC_0 (char*) ;
 int FUNC_1 (struct gss_api_mech*) ;
 int FUNC_2 (struct seq_file*,int *) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct gss_api_mech *VAR_2;

 VAR_2 = FUNC_0("krb5");
 if (VAR_2 == ((void*)0))
  goto out;
 if (VAR_2->gm_upcall_enctypes != ((void*)0))
  FUNC_2(VAR_0, VAR_2->gm_upcall_enctypes);
 FUNC_1(VAR_2);
out:
 return 0;
}
