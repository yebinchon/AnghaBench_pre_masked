
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int ecdsa_nid; int type; } ;


 char const* FUNC_0 (int ,int ) ;

const char *
FUNC_1(const struct sshkey *VAR_0)
{
 return FUNC_0(VAR_0->type, VAR_0->ecdsa_nid);
}
