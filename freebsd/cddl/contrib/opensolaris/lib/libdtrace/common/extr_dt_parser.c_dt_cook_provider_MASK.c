
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint_t ;
typedef int dt_provider_t ;
typedef int dt_probe_t ;
struct TYPE_9__ {scalar_t__ dn_kind; TYPE_1__* dn_ident; int dn_provname; scalar_t__ dn_provred; struct TYPE_9__* dn_list; struct TYPE_9__* dn_probes; int * dn_provider; } ;
typedef TYPE_2__ dt_node_t ;
struct TYPE_8__ {char* di_name; int di_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int ,char const*,...) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *,TYPE_2__*,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,char const*) ;

__attribute__((used)) static dt_node_t *
FUNC_6(dt_node_t *VAR_3, uint_t VAR_4)
{
 dt_provider_t *VAR_5 = VAR_3->dn_provider;
 dt_node_t *VAR_6;






 for (VAR_6 = VAR_3->dn_probes; VAR_6 != ((void*)0); VAR_6 = VAR_6->dn_list) {
  const char *VAR_7 = VAR_6->dn_ident->di_name;
  dt_probe_t *VAR_8 = FUNC_5(VAR_5, VAR_7);

  FUNC_0(VAR_6->dn_kind == VAR_0);

  if (VAR_8 != ((void*)0) && VAR_3->dn_provred) {
   FUNC_3(VAR_5, VAR_6,
       VAR_8, VAR_6->dn_ident->di_data);
  } else if (VAR_8 == ((void*)0) && VAR_3->dn_provred) {
   FUNC_1(VAR_6, VAR_1,
       "provider interface mismatch: %s\n"
       "\t current: probe %s:%s defined\n"
       "\tprevious: probe %s:%s not defined\n",
       VAR_3->dn_provname, VAR_3->dn_provname,
       VAR_7, VAR_3->dn_provname, VAR_7);
  } else if (VAR_8 != ((void*)0)) {
   FUNC_1(VAR_6, VAR_2, "probe redeclared: %s:%s\n",
       VAR_3->dn_provname, VAR_7);
  } else
   FUNC_4(VAR_5, VAR_6->dn_ident->di_data);

  FUNC_2(VAR_6, VAR_5);
 }

 return (VAR_3);
}
