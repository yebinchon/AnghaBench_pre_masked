
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session_conf {char* isc_initiator; char* isc_initiator_addr; char* isc_initiator_alias; char* isc_target; char* isc_target_addr; char* isc_user; char* isc_secret; char* isc_mutual_user; char* isc_mutual_secret; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct iscsi_session_conf *VAR_4)
{







 VAR_4->isc_initiator[VAR_2 - 1] = '\0';
 VAR_4->isc_initiator_addr[VAR_0 - 1] = '\0';
 VAR_4->isc_initiator_alias[VAR_1 - 1] = '\0';
 VAR_4->isc_target[VAR_2 - 1] = '\0';
 VAR_4->isc_target_addr[VAR_0 - 1] = '\0';
 VAR_4->isc_user[VAR_2 - 1] = '\0';
 VAR_4->isc_secret[VAR_3 - 1] = '\0';
 VAR_4->isc_mutual_user[VAR_2 - 1] = '\0';
 VAR_4->isc_mutual_secret[VAR_3 - 1] = '\0';
}
