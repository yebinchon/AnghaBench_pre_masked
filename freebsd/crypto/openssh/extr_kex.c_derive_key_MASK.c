
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef char u_char ;
struct sshbuf {int dummy; } ;
struct ssh_digest_ctx {int dummy; } ;
struct ssh {struct kex* kex; } ;
struct kex {char* session_id; size_t session_id_len; int hash_alg; } ;


 int FUNC_0 (size_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (int ,char*,char) ;
 int FUNC_4 (char*) ;
 size_t FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct ssh_digest_ctx*,char*,size_t) ;
 int FUNC_7 (struct ssh_digest_ctx*) ;
 struct ssh_digest_ctx* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct ssh_digest_ctx*,char*,size_t) ;
 scalar_t__ FUNC_10 (struct ssh_digest_ctx*,struct sshbuf const*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_11(struct ssh *VAR_4, int VAR_5, u_int VAR_6, u_char *VAR_7, u_int VAR_8,
    const struct sshbuf *VAR_9, u_char **VAR_10)
{
 struct kex *VAR_11 = VAR_4->kex;
 struct ssh_digest_ctx *VAR_12 = ((void*)0);
 char VAR_13 = VAR_5;
 u_int VAR_14;
 size_t VAR_15;
 u_char *VAR_16;
 int VAR_17;

 if ((VAR_15 = FUNC_5(VAR_11->hash_alg)) == 0)
  return VAR_1;
 if ((VAR_16 = FUNC_1(1, FUNC_0(VAR_6, VAR_15))) == ((void*)0)) {
  VAR_17 = VAR_0;
  goto out;
 }


 if ((VAR_12 = FUNC_8(VAR_11->hash_alg)) == ((void*)0) ||
     FUNC_10(VAR_12, VAR_9) != 0 ||
     FUNC_9(VAR_12, VAR_7, VAR_8) != 0 ||
     FUNC_9(VAR_12, &VAR_13, 1) != 0 ||
     FUNC_9(VAR_12, VAR_11->session_id,
     VAR_11->session_id_len) != 0 ||
     FUNC_6(VAR_12, VAR_16, VAR_15) != 0) {
  VAR_17 = VAR_2;
  goto out;
 }
 FUNC_7(VAR_12);
 VAR_12 = ((void*)0);






 for (VAR_14 = VAR_15; VAR_6 > VAR_14; VAR_14 += VAR_15) {
  if ((VAR_12 = FUNC_8(VAR_11->hash_alg)) == ((void*)0) ||
      FUNC_10(VAR_12, VAR_9) != 0 ||
      FUNC_9(VAR_12, VAR_7, VAR_8) != 0 ||
      FUNC_9(VAR_12, VAR_16, VAR_14) != 0 ||
      FUNC_6(VAR_12, VAR_16 + VAR_14, VAR_15) != 0) {
   VAR_17 = VAR_2;
   goto out;
  }
  FUNC_7(VAR_12);
  VAR_12 = ((void*)0);
 }




 *VAR_10 = VAR_16;
 VAR_16 = ((void*)0);
 VAR_17 = 0;
 out:
 FUNC_4(VAR_16);
 FUNC_7(VAR_12);
 return VAR_17;
}
