
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ldns_rr ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_1__ ldns_rbnode_t ;
struct TYPE_10__ {int names; int * hashed_names; int * _nsec3params; } ;
typedef TYPE_2__ ldns_dnssec_zone ;
typedef int ldns_dnssec_name ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int *,int *) ;
 int VAR_2 ;
 int * FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_7(
  ldns_dnssec_zone* VAR_3, ldns_rr* VAR_4)
{
 ldns_rbnode_t* VAR_5;
 ldns_dnssec_name* VAR_6;

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_4 != ((void*)0));

 if (VAR_3->hashed_names) {
  FUNC_6(VAR_3->hashed_names,
    VAR_2, ((void*)0));
  FUNC_0(VAR_3->hashed_names);
 }
 VAR_3->_nsec3params = VAR_4;




 VAR_3->hashed_names = FUNC_3(VAR_1);
 if (VAR_3->hashed_names == ((void*)0)) {
  return;
 }
 for ( VAR_5 = FUNC_4(VAR_3->names)
     ; VAR_5 != VAR_0
     ; VAR_5 = FUNC_5(VAR_5)
     ) {
  VAR_6 = (ldns_dnssec_name *) VAR_5->data;
  FUNC_2(VAR_3, VAR_6, VAR_4);

 }
}
