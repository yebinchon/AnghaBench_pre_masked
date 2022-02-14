
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u_char ;
struct sshkey {TYPE_1__* cert; } ;
struct sshbuf {int dummy; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_4__ {scalar_t__ type; char* key_id; scalar_t__ nprincipals; char** principals; struct sshbuf* certblob; TYPE_2__* signature_key; struct sshbuf* extensions; struct sshbuf* critical; int valid_before; int valid_after; int serial; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 char** FUNC_1 (char**,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct sshbuf*) ;
 int FUNC_3 (struct sshbuf*,struct sshbuf**) ;
 int FUNC_4 (struct sshbuf*,char**,size_t*) ;
 int FUNC_5 (struct sshbuf*,char**,size_t*) ;
 int FUNC_6 (struct sshbuf*,int *,int *) ;
 int FUNC_7 (struct sshbuf*,scalar_t__*) ;
 int FUNC_8 (struct sshbuf*,int *) ;
 scalar_t__ FUNC_9 (struct sshbuf*) ;
 int FUNC_10 (struct sshbuf*) ;
 int FUNC_11 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_12 (struct sshbuf*) ;
 scalar_t__ FUNC_13 (struct sshbuf*,TYPE_2__**,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,char*,size_t,int ,size_t,int *,int ) ;

__attribute__((used)) static int
FUNC_16(struct sshbuf *VAR_8, struct sshkey *VAR_9, struct sshbuf *VAR_10)
{
 struct sshbuf *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 struct sshbuf *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 u_char *VAR_15 = ((void*)0);
 size_t VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
 int VAR_19 = VAR_4;


 if ((VAR_19 = FUNC_11(VAR_9->cert->certblob, VAR_10)) != 0)
  return VAR_19;


 if ((VAR_19 = FUNC_8(VAR_8, &VAR_9->cert->serial)) != 0 ||
     (VAR_19 = FUNC_7(VAR_8, &VAR_9->cert->type)) != 0 ||
     (VAR_19 = FUNC_4(VAR_8, &VAR_9->cert->key_id, &VAR_18)) != 0 ||
     (VAR_19 = FUNC_3(VAR_8, &VAR_11)) != 0 ||
     (VAR_19 = FUNC_8(VAR_8, &VAR_9->cert->valid_after)) != 0 ||
     (VAR_19 = FUNC_8(VAR_8, &VAR_9->cert->valid_before)) != 0 ||
     (VAR_19 = FUNC_3(VAR_8, &VAR_12)) != 0 ||
     (VAR_19 = FUNC_3(VAR_8, &VAR_13)) != 0 ||
     (VAR_19 = FUNC_6(VAR_8, ((void*)0), ((void*)0))) != 0 ||
     (VAR_19 = FUNC_3(VAR_8, &VAR_14)) != 0) {

  VAR_19 = VAR_5;
  goto out;
 }


 VAR_16 = FUNC_9(VAR_9->cert->certblob) - FUNC_9(VAR_8);

 if ((VAR_19 = FUNC_5(VAR_8, &VAR_15, &VAR_17)) != 0) {
  VAR_19 = VAR_5;
  goto out;
 }

 if (VAR_9->cert->type != VAR_1 &&
     VAR_9->cert->type != VAR_0) {
  VAR_19 = VAR_7;
  goto out;
 }


 while (FUNC_9(VAR_11) > 0) {
  char *VAR_20 = ((void*)0);
  char **VAR_21 = ((void*)0);

  if (VAR_9->cert->nprincipals >= VAR_2) {
   VAR_19 = VAR_5;
   goto out;
  }
  if ((VAR_19 = FUNC_4(VAR_11, &VAR_20,
      ((void*)0))) != 0) {
   VAR_19 = VAR_5;
   goto out;
  }
  VAR_21 = VAR_9->cert->principals;
  VAR_9->cert->principals = FUNC_1(VAR_9->cert->principals,
      VAR_9->cert->nprincipals, VAR_9->cert->nprincipals + 1,
      sizeof(*VAR_9->cert->principals));
  if (VAR_9->cert->principals == ((void*)0)) {
   FUNC_0(VAR_20);
   VAR_9->cert->principals = VAR_21;
   VAR_19 = VAR_3;
   goto out;
  }
  VAR_9->cert->principals[VAR_9->cert->nprincipals++] = VAR_20;
 }





 if ((VAR_19 = FUNC_11(VAR_9->cert->critical, VAR_12)) != 0 ||
     (VAR_13 != ((void*)0) &&
     (VAR_19 = FUNC_11(VAR_9->cert->extensions, VAR_13)) != 0))
  goto out;




 while (FUNC_9(VAR_12) != 0) {
  if ((VAR_19 = FUNC_6(VAR_12, ((void*)0), ((void*)0))) != 0 ||
      (VAR_19 = FUNC_6(VAR_12, ((void*)0), ((void*)0))) != 0) {
   FUNC_12(VAR_9->cert->critical);
   VAR_19 = VAR_5;
   goto out;
  }
 }
 while (VAR_13 != ((void*)0) && FUNC_9(VAR_13) != 0) {
  if ((VAR_19 = FUNC_6(VAR_13, ((void*)0), ((void*)0))) != 0 ||
      (VAR_19 = FUNC_6(VAR_13, ((void*)0), ((void*)0))) != 0) {
   FUNC_12(VAR_9->cert->extensions);
   VAR_19 = VAR_5;
   goto out;
  }
 }


 if (FUNC_13(VAR_14, &VAR_9->cert->signature_key, 0) != 0) {
  VAR_19 = VAR_6;
  goto out;
 }
 if (!FUNC_14(VAR_9->cert->signature_key->type)) {
  VAR_19 = VAR_6;
  goto out;
 }
 if ((VAR_19 = FUNC_15(VAR_9->cert->signature_key, VAR_15, VAR_17,
     FUNC_10(VAR_9->cert->certblob), VAR_16, ((void*)0), 0)) != 0)
  goto out;


 VAR_19 = 0;
 out:
 FUNC_2(VAR_14);
 FUNC_2(VAR_12);
 FUNC_2(VAR_13);
 FUNC_2(VAR_11);
 FUNC_0(VAR_15);
 return VAR_19;
}
