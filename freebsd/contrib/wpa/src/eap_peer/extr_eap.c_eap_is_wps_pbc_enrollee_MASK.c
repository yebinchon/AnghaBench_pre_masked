
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_peer_config {scalar_t__ identity_len; int * phase1; int identity; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int * FUNC_1 (int *,char*) ;

int FUNC_2(struct eap_peer_config *VAR_2)
{
 if (VAR_2->identity_len != VAR_1 ||
     FUNC_0(VAR_2->identity, VAR_0, VAR_1))
  return 0;

 if (VAR_2->phase1 == ((void*)0) || FUNC_1(VAR_2->phase1, "pbc=1") == ((void*)0))
  return 0;

 return 1;
}
