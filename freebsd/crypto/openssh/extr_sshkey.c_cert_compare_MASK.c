
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey_cert {int certblob; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct sshkey_cert *VAR_0, struct sshkey_cert *VAR_1)
{
 if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0))
  return 1;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 0;
 if (FUNC_0(VAR_0->certblob) != FUNC_0(VAR_1->certblob))
  return 0;
 if (FUNC_2(FUNC_1(VAR_0->certblob), FUNC_1(VAR_1->certblob),
     FUNC_0(VAR_0->certblob)) != 0)
  return 0;
 return 1;
}
