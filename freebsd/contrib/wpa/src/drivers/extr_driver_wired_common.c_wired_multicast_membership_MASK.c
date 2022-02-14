
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct packet_mreq {int mr_ifindex; int mr_address; int mr_alen; int mr_type; } ;
typedef int mreq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct packet_mreq*,int ,int) ;
 scalar_t__ FUNC_2 (int,int ,int ,struct packet_mreq*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;

int FUNC_5(int VAR_7, int VAR_8, const u8 *VAR_9, int VAR_10)
{

 struct packet_mreq VAR_11;

 if (VAR_7 < 0)
  return -1;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.mr_ifindex = VAR_8;
 VAR_11.mr_type = VAR_4;
 VAR_11.mr_alen = VAR_0;
 FUNC_0(VAR_11.mr_address, VAR_9, VAR_0);

 if (FUNC_2(VAR_7, VAR_5,
         VAR_10 ? VAR_2 : VAR_3,
         &VAR_11, sizeof(VAR_11)) < 0) {
  FUNC_4(VAR_1, "setsockopt: %s", FUNC_3(VAR_6));
  return -1;
 }
 return 0;



}
