
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pingpong_dest {int sockfd; int srqn; int send_psn; int send_qpn; int recv_qpn; int lid; int gid; } ;
typedef int gid ;
struct TYPE_2__ {struct pingpong_dest* rem_dest; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int ,int ,int ,int ,int ,char*) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,int ,int *,int *,int *,int *,int *,char*) ;
 int VAR_5 ;
 int FUNC_6 (char*,int *) ;

__attribute__((used)) static int FUNC_7(int VAR_6, int VAR_7)
{
 struct pingpong_dest *VAR_8;
 char VAR_9[VAR_2];
 char VAR_10[33];
 int VAR_11 = 0, VAR_12;

 while (VAR_11 < VAR_2) {
  VAR_12 = FUNC_4(VAR_6, VAR_9 + VAR_11, VAR_2 - VAR_11);
  if (VAR_12 < 0) {
   FUNC_2("client read");
   FUNC_0(VAR_5,
    "%d/%d: Couldn't read remote address [%d]\n",
    VAR_11, VAR_2, VAR_7);
   return -1;
  }
  VAR_11 += VAR_12;
 }

 VAR_8 = &VAR_4.rem_dest[VAR_7];
 FUNC_5(VAR_9, VAR_3, &VAR_8->lid, &VAR_8->recv_qpn,
  &VAR_8->send_qpn, &VAR_8->send_psn, &VAR_8->srqn, VAR_10);

 FUNC_6(VAR_10, &VAR_8->gid);
 FUNC_1(VAR_1, &VAR_8->gid, VAR_10, sizeof(VAR_10));
 FUNC_3(VAR_0, "remote", VAR_8->lid, VAR_8->recv_qpn,
  VAR_8->send_qpn, VAR_8->send_psn, VAR_8->srqn,
  VAR_10);

 VAR_8->sockfd = VAR_6;
 return 0;
}
