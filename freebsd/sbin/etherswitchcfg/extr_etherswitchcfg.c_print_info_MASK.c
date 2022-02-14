
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* es_name; int es_nports; int es_nvlangroups; int es_vlan_caps; } ;
struct cfg {char* controlfile; TYPE_1__ info; scalar_t__ verbose; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfg*) ;
 int FUNC_1 (struct cfg*,int) ;
 int FUNC_2 (struct cfg*,int) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static void
FUNC_6(struct cfg *VAR_1)
{
 const char *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_5(VAR_1->controlfile, '/');
 if (VAR_2 != ((void*)0))
  VAR_2 = VAR_2 + 1;
 else
  VAR_2 = VAR_1->controlfile;
 if (VAR_1->verbose) {
  FUNC_4("%s: %s with %d ports and %d VLAN groups\n", VAR_2,
      VAR_1->info.es_name, VAR_1->info.es_nports,
      VAR_1->info.es_nvlangroups);
  FUNC_4("%s: ", VAR_2);
  FUNC_3("VLAN capabilities", VAR_1->info.es_vlan_caps,
      VAR_0);
  FUNC_4("\n");
 }
 FUNC_0(VAR_1);
 for (VAR_3=0; VAR_3<VAR_1->info.es_nports; VAR_3++) {
  FUNC_1(VAR_1, VAR_3);
 }
 for (VAR_3=0; VAR_3<VAR_1->info.es_nvlangroups; VAR_3++) {
  FUNC_2(VAR_1, VAR_3);
 }
}
