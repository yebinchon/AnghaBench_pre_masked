
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int ecdsa_nid; int type; } ;


 char const* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

const char *
FUNC_2(const struct sshkey *VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0->type),
     VAR_0->ecdsa_nid);
}
