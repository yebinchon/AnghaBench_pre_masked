
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sshbuf {int dummy; } ;
struct kex {int server; int done; int * peer; int * my; int server_version_string; int client_version_string; int flags; int kex_type; int hostkey_nid; int hostkey_type; int hostkey_alg; int we_need; int session_id_len; int session_id; } ;


 int VAR_0 ;
 struct kex* FUNC_0 (int,int) ;
 int FUNC_1 (struct kex*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sshbuf*,int *,int *) ;
 int FUNC_4 (struct sshbuf*,int *,int *) ;
 int FUNC_5 (struct sshbuf*,int *) ;
 int FUNC_6 (struct sshbuf*,int *) ;
 void* FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(struct sshbuf *VAR_1, struct kex **VAR_2)
{
 struct kex *VAR_3;
 int VAR_4;

 if ((VAR_3 = FUNC_0(1, sizeof(struct kex))) == ((void*)0) ||
     (VAR_3->my = FUNC_7()) == ((void*)0) ||
     (VAR_3->peer = FUNC_7()) == ((void*)0)) {
  VAR_4 = VAR_0;
  goto out;
 }
 if ((VAR_4 = FUNC_4(VAR_1, &VAR_3->session_id, &VAR_3->session_id_len)) != 0 ||
     (VAR_4 = FUNC_6(VAR_1, &VAR_3->we_need)) != 0 ||
     (VAR_4 = FUNC_3(VAR_1, &VAR_3->hostkey_alg, ((void*)0))) != 0 ||
     (VAR_4 = FUNC_6(VAR_1, (u_int *)&VAR_3->hostkey_type)) != 0 ||
     (VAR_4 = FUNC_6(VAR_1, (u_int *)&VAR_3->hostkey_nid)) != 0 ||
     (VAR_4 = FUNC_6(VAR_1, &VAR_3->kex_type)) != 0 ||
     (VAR_4 = FUNC_5(VAR_1, VAR_3->my)) != 0 ||
     (VAR_4 = FUNC_5(VAR_1, VAR_3->peer)) != 0 ||
     (VAR_4 = FUNC_6(VAR_1, &VAR_3->flags)) != 0 ||
     (VAR_4 = FUNC_3(VAR_1, &VAR_3->client_version_string, ((void*)0))) != 0 ||
     (VAR_4 = FUNC_3(VAR_1, &VAR_3->server_version_string, ((void*)0))) != 0)
  goto out;
 VAR_3->server = 1;
 VAR_3->done = 1;
 VAR_4 = 0;
 out:
 if (VAR_4 != 0 || VAR_2 == ((void*)0)) {
  if (VAR_3 != ((void*)0)) {
   FUNC_2(VAR_3->my);
   FUNC_2(VAR_3->peer);
   FUNC_1(VAR_3);
  }
  if (VAR_2 != ((void*)0))
   *VAR_2 = ((void*)0);
 } else {
  *VAR_2 = VAR_3;
 }
 return VAR_4;
}
