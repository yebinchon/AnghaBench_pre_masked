
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ldns_status ;
typedef int ldns_signing_algorithm ;
struct TYPE_7__ {int key; } ;
struct TYPE_8__ {TYPE_1__ _key; } ;
typedef TYPE_2__ ldns_key ;
typedef scalar_t__ ldns_algorithm ;
typedef int ENGINE ;


 int FUNC_0 (int *,char*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int ) ;

ldns_status
FUNC_5(ldns_key **VAR_4, ENGINE *VAR_5, char *VAR_6, ldns_algorithm VAR_7)
{
 ldns_key *VAR_8;

 VAR_8 = FUNC_3();
        if(!VAR_8) return VAR_2;

 VAR_8->_key.key = FUNC_0(VAR_5, VAR_6, FUNC_1(), ((void*)0));
        if(!VAR_8->_key.key) {
                FUNC_2(VAR_8);
                return VAR_1;
        }
 FUNC_4(VAR_8, (ldns_signing_algorithm) VAR_7);
 if (!VAR_8->_key.key) {
                FUNC_2(VAR_8);
  return VAR_0;
 }

 *VAR_4 = VAR_8;
 return VAR_3;
}
