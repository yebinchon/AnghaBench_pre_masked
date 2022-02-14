
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct sshkey_cert {size_t nprincipals; int ** principals; int * signature_key; int valid_before; int valid_after; int * key_id; int type; int serial; int extensions; int critical; int certblob; } ;
struct sshkey {struct sshkey_cert* cert; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int ** FUNC_0 (size_t,int) ;
 int FUNC_1 (struct sshkey_cert*) ;
 struct sshkey_cert* FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int **) ;
 void* FUNC_5 (int *) ;

int
FUNC_6(const struct sshkey *VAR_4, struct sshkey *VAR_5)
{
 u_int VAR_6;
 const struct sshkey_cert *VAR_7;
 struct sshkey_cert *VAR_8;
 int VAR_9 = VAR_2;

 if (VAR_5->cert != ((void*)0)) {
  FUNC_1(VAR_5->cert);
  VAR_5->cert = ((void*)0);
 }

 if ((VAR_7 = VAR_4->cert) == ((void*)0))
  return VAR_3;

 if ((VAR_8 = VAR_5->cert = FUNC_2()) == ((void*)0))
  return VAR_1;

 if ((VAR_9 = FUNC_3(VAR_8->certblob, VAR_7->certblob)) != 0 ||
     (VAR_9 = FUNC_3(VAR_8->critical, VAR_7->critical)) != 0 ||
     (VAR_9 = FUNC_3(VAR_8->extensions, VAR_7->extensions)) != 0)
  return VAR_9;

 VAR_8->serial = VAR_7->serial;
 VAR_8->type = VAR_7->type;
 if (VAR_7->key_id == ((void*)0))
  VAR_8->key_id = ((void*)0);
 else if ((VAR_8->key_id = FUNC_5(VAR_7->key_id)) == ((void*)0))
  return VAR_1;
 VAR_8->valid_after = VAR_7->valid_after;
 VAR_8->valid_before = VAR_7->valid_before;
 if (VAR_7->signature_key == ((void*)0))
  VAR_8->signature_key = ((void*)0);
 else if ((VAR_9 = FUNC_4(VAR_7->signature_key,
     &VAR_8->signature_key)) != 0)
  return VAR_9;

 if (VAR_7->nprincipals > VAR_0)
  return VAR_3;
 if (VAR_7->nprincipals > 0) {
  if ((VAR_8->principals = FUNC_0(VAR_7->nprincipals,
      sizeof(*VAR_8->principals))) == ((void*)0))
   return VAR_1;
  for (VAR_6 = 0; VAR_6 < VAR_7->nprincipals; VAR_6++) {
   VAR_8->principals[VAR_6] = FUNC_5(VAR_7->principals[VAR_6]);
   if (VAR_8->principals[VAR_6] == ((void*)0)) {
    VAR_8->nprincipals = VAR_6;
    return VAR_1;
   }
  }
 }
 VAR_8->nprincipals = VAR_7->nprincipals;
 return 0;
}
