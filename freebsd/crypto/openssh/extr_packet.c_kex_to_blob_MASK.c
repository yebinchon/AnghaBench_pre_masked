
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int dummy; } ;
struct kex {int server_version_string; int client_version_string; int flags; int peer; int my; int kex_type; int hostkey_nid; int hostkey_type; int hostkey_alg; int we_need; int session_id_len; int session_id; } ;


 int FUNC_0 (struct sshbuf*,int ) ;
 int FUNC_1 (struct sshbuf*,int ,int ) ;
 int FUNC_2 (struct sshbuf*,int ) ;
 int FUNC_3 (struct sshbuf*,int ) ;

__attribute__((used)) static int
FUNC_4(struct sshbuf *VAR_0, struct kex *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0, VAR_1->session_id,
     VAR_1->session_id_len)) != 0 ||
     (VAR_2 = FUNC_3(VAR_0, VAR_1->we_need)) != 0 ||
     (VAR_2 = FUNC_0(VAR_0, VAR_1->hostkey_alg)) != 0 ||
     (VAR_2 = FUNC_3(VAR_0, VAR_1->hostkey_type)) != 0 ||
     (VAR_2 = FUNC_3(VAR_0, VAR_1->hostkey_nid)) != 0 ||
     (VAR_2 = FUNC_3(VAR_0, VAR_1->kex_type)) != 0 ||
     (VAR_2 = FUNC_2(VAR_0, VAR_1->my)) != 0 ||
     (VAR_2 = FUNC_2(VAR_0, VAR_1->peer)) != 0 ||
     (VAR_2 = FUNC_3(VAR_0, VAR_1->flags)) != 0 ||
     (VAR_2 = FUNC_0(VAR_0, VAR_1->client_version_string)) != 0 ||
     (VAR_2 = FUNC_0(VAR_0, VAR_1->server_version_string)) != 0)
  return VAR_2;
 return 0;
}
