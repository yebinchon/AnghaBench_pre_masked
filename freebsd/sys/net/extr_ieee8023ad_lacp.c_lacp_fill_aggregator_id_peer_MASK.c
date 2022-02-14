
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lacp_peerinfo {int lip_key; int lip_systemid; } ;


 int FUNC_0 (struct lacp_peerinfo*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct lacp_peerinfo *VAR_0,
    const struct lacp_peerinfo *VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->lip_systemid = VAR_1->lip_systemid;
 VAR_0->lip_key = VAR_1->lip_key;
}
