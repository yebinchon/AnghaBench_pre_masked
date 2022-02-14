
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct sshmac {size_t key_len; int key; int enabled; int name; } ;
struct sshenc {size_t key_len; size_t iv_len; int * cipher; int name; int iv; int key; int block_size; int enabled; } ;
struct sshcomp {int name; int type; } ;
struct sshbuf {int dummy; } ;
struct ssh {TYPE_1__* kex; } ;
struct newkeys {struct sshcomp comp; struct sshmac mac; struct sshenc enc; } ;
struct TYPE_2__ {struct newkeys** newkeys; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct newkeys* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct newkeys*) ;
 int FUNC_4 (struct sshmac*,int ) ;
 int FUNC_5 (struct sshbuf*,int ) ;
 int FUNC_6 (struct sshbuf*) ;
 int FUNC_7 (struct sshbuf*,struct sshbuf**) ;
 int FUNC_8 (struct sshbuf*,int *,int *) ;
 int FUNC_9 (struct sshbuf*,int *,size_t*) ;
 int FUNC_10 (struct sshbuf*,int *) ;
 scalar_t__ FUNC_11 (struct sshbuf*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_12(struct sshbuf *VAR_3, struct ssh *VAR_4, int VAR_5)
{
 struct sshbuf *VAR_6 = ((void*)0);
 struct sshcomp *VAR_7;
 struct sshenc *VAR_8;
 struct sshmac *VAR_9;
 struct newkeys *VAR_10 = ((void*)0);
 size_t VAR_11, VAR_12, VAR_13;
 int VAR_14;

 if ((VAR_10 = FUNC_0(1, sizeof(*VAR_10))) == ((void*)0)) {
  VAR_14 = VAR_0;
  goto out;
 }
 if ((VAR_14 = FUNC_7(VAR_3, &VAR_6)) != 0)
  goto out;



 VAR_8 = &VAR_10->enc;
 VAR_9 = &VAR_10->mac;
 VAR_7 = &VAR_10->comp;

 if ((VAR_14 = FUNC_8(VAR_6, &VAR_8->name, ((void*)0))) != 0 ||
     (VAR_14 = FUNC_10(VAR_6, (u_int *)&VAR_8->enabled)) != 0 ||
     (VAR_14 = FUNC_10(VAR_6, &VAR_8->block_size)) != 0 ||
     (VAR_14 = FUNC_9(VAR_6, &VAR_8->key, &VAR_11)) != 0 ||
     (VAR_14 = FUNC_9(VAR_6, &VAR_8->iv, &VAR_12)) != 0)
  goto out;
 if ((VAR_8->cipher = FUNC_2(VAR_8->name)) == ((void*)0)) {
  VAR_14 = VAR_1;
  goto out;
 }
 if (FUNC_1(VAR_8->cipher) == 0) {
  if ((VAR_14 = FUNC_8(VAR_6, &VAR_9->name, ((void*)0))) != 0)
   goto out;
  if ((VAR_14 = FUNC_4(VAR_9, VAR_9->name)) != 0)
   goto out;
  if ((VAR_14 = FUNC_10(VAR_6, (u_int *)&VAR_9->enabled)) != 0 ||
      (VAR_14 = FUNC_9(VAR_6, &VAR_9->key, &VAR_13)) != 0)
   goto out;
  if (VAR_13 > VAR_9->key_len) {
   VAR_14 = VAR_1;
   goto out;
  }
  VAR_9->key_len = VAR_13;
 }
 if ((VAR_14 = FUNC_10(VAR_6, &VAR_7->type)) != 0 ||
     (VAR_14 = FUNC_8(VAR_6, &VAR_7->name, ((void*)0))) != 0)
  goto out;
 if (FUNC_11(VAR_6) != 0) {
  VAR_14 = VAR_1;
  goto out;
 }
 VAR_8->key_len = VAR_11;
 VAR_8->iv_len = VAR_12;
 VAR_4->kex->newkeys[VAR_5] = VAR_10;
 VAR_10 = ((void*)0);
 VAR_14 = 0;
 out:
 FUNC_3(VAR_10);
 FUNC_6(VAR_6);
 return VAR_14;
}
