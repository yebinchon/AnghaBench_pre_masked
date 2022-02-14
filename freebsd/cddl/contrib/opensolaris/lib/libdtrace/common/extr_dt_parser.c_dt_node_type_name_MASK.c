
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dn_flags; int dn_type; int dn_ctfp; int * dn_ident; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_6__ {int di_kind; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 char const* FUNC_3 (int ,int ,char*,size_t) ;
 size_t FUNC_4 (char*,size_t,char*,...) ;

const char *
FUNC_5(const dt_node_t *VAR_1, char *VAR_2, size_t VAR_3)
{
 if (FUNC_2(VAR_1) && VAR_1->dn_ident != ((void*)0)) {
  (void) FUNC_4(VAR_2, VAR_3, "%s",
      FUNC_1(FUNC_0(VAR_1->dn_ident)->di_kind));
  return (VAR_2);
 }

 if (VAR_1->dn_flags & VAR_0) {
  size_t VAR_4 = FUNC_4(VAR_2, VAR_3, "userland ");
  VAR_3 = VAR_3 > VAR_4 ? VAR_3 - VAR_4 : 0;
  (void) FUNC_3(VAR_1->dn_ctfp, VAR_1->dn_type, VAR_2 + VAR_4, VAR_3);
  return (VAR_2);
 }

 return (FUNC_3(VAR_1->dn_ctfp, VAR_1->dn_type, VAR_2, VAR_3));
}
