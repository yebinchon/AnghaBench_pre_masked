
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr_un {scalar_t__ sun_path; void* sun_family; } ;
struct sockaddr {int dummy; } ;
struct eap_sim_db_data {int sock; int * local_sock; scalar_t__ fname; } ;
typedef int addr ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int VAR_4 ;
 int FUNC_3 (int,int ,struct eap_sim_db_data*,int *) ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sockaddr_un*,int ,int) ;
 int FUNC_7 (scalar_t__,int,char*,int ,int ) ;
 int * FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,int) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,char*,int) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*,int *,int ) ;
 int FUNC_16 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_17(struct eap_sim_db_data *VAR_6)
{
 struct sockaddr_un VAR_7;
 static int VAR_8 = 0;

 if (FUNC_11(VAR_6->fname, "unix:", 5) != 0)
  return -1;

 VAR_6->sock = FUNC_12(VAR_2, VAR_3, 0);
 if (VAR_6->sock < 0) {
  FUNC_16(VAR_1, "socket(eap_sim_db): %s", FUNC_13(VAR_5));
  return -1;
 }

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.sun_family = VAR_0;
 FUNC_7(VAR_7.sun_path, sizeof(VAR_7.sun_path),
      "/tmp/eap_sim_db_%d-%d", FUNC_4(), VAR_8++);
 FUNC_5(VAR_6->local_sock);
 VAR_6->local_sock = FUNC_8(VAR_7.sun_path);
 if (VAR_6->local_sock == ((void*)0)) {
  FUNC_1(VAR_6->sock);
  VAR_6->sock = -1;
  return -1;
 }
 if (FUNC_0(VAR_6->sock, (struct sockaddr *) &VAR_7, sizeof(VAR_7)) < 0) {
  FUNC_16(VAR_1, "bind(eap_sim_db): %s", FUNC_13(VAR_5));
  FUNC_1(VAR_6->sock);
  VAR_6->sock = -1;
  return -1;
 }

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.sun_family = VAR_0;
 FUNC_9(VAR_7.sun_path, VAR_6->fname + 5, sizeof(VAR_7.sun_path));
 if (FUNC_2(VAR_6->sock, (struct sockaddr *) &VAR_7, sizeof(VAR_7)) < 0) {
  FUNC_16(VAR_1, "connect(eap_sim_db): %s",
      FUNC_13(VAR_5));
  FUNC_15(VAR_1, "HLR/AuC GW socket",
      (u8 *) VAR_7.sun_path,
      FUNC_10(VAR_7.sun_path));
  FUNC_1(VAR_6->sock);
  VAR_6->sock = -1;
  FUNC_14(VAR_6->local_sock);
  FUNC_5(VAR_6->local_sock);
  VAR_6->local_sock = ((void*)0);
  return -1;
 }

 FUNC_3(VAR_6->sock, VAR_4, VAR_6, ((void*)0));

 return 0;
}
