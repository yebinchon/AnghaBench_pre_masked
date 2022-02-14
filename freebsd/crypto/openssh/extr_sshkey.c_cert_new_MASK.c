
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey_cert {int * signature_key; int * principals; int * key_id; int * extensions; int * critical; int * certblob; } ;


 struct sshkey_cert* FUNC_0 (int,int) ;
 int FUNC_1 (struct sshkey_cert*) ;
 void* FUNC_2 () ;

__attribute__((used)) static struct sshkey_cert *
FUNC_3(void)
{
 struct sshkey_cert *VAR_0;

 if ((VAR_0 = FUNC_0(1, sizeof(*VAR_0))) == ((void*)0))
  return ((void*)0);
 if ((VAR_0->certblob = FUNC_2()) == ((void*)0) ||
     (VAR_0->critical = FUNC_2()) == ((void*)0) ||
     (VAR_0->extensions = FUNC_2()) == ((void*)0)) {
  FUNC_1(VAR_0);
  return ((void*)0);
 }
 VAR_0->key_id = ((void*)0);
 VAR_0->principals = ((void*)0);
 VAR_0->signature_key = ((void*)0);
 return VAR_0;
}
