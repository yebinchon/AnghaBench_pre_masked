
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ibss_rsn_peer {int own_auth_tx; int authentication_status; } ;
struct ibss_rsn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,struct ibss_rsn_peer*,int *) ;
 int FUNC_1 (struct ibss_rsn*,struct ibss_rsn_peer*) ;
 int VAR_1 ;
 struct ibss_rsn_peer* FUNC_2 (struct ibss_rsn*,int const*) ;
 struct ibss_rsn_peer* FUNC_3 (struct ibss_rsn*,int const*) ;
 int FUNC_4 (struct ibss_rsn*,int const*,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ibss_rsn *VAR_2, const u8 *VAR_3)
{
 struct ibss_rsn_peer *VAR_4;
 int VAR_5;

 if (!VAR_2)
  return -1;


 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  return 0;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  return -1;


 VAR_5 = FUNC_4(VAR_2, VAR_3, 1);
 if (VAR_5) {




  VAR_4->authentication_status |= VAR_0;
  return FUNC_1(VAR_2, VAR_4);
 } else {
  FUNC_5(&VAR_4->own_auth_tx);
  FUNC_0(1, 0, VAR_1, VAR_4, ((void*)0));
 }

 return 0;
}
