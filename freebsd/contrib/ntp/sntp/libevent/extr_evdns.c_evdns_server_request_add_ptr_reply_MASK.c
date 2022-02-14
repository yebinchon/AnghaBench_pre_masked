
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct in_addr {int s_addr; } ;
struct evdns_server_request {int dummy; } ;
typedef int buf ;
typedef scalar_t__ a ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evdns_server_request*,int ,char const*,int ,int ,int,int,int,char const*) ;
 int FUNC_1 (char*,int,char*,int,int,int,int) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct evdns_server_request *VAR_3, struct in_addr *VAR_4, const char *VAR_5, const char *VAR_6, int VAR_7)
{
 u32 VAR_8;
 char VAR_9[32];
 if (VAR_4 && VAR_5)
  return -1;
 else if (!VAR_4 && !VAR_5)
  return -1;
 if (VAR_4) {
  VAR_8 = FUNC_2(VAR_4->s_addr);
  FUNC_1(VAR_9, sizeof(VAR_9), "%d.%d.%d.%d.in-addr.arpa",
    (int)(u8)((VAR_8 )&0xff),
    (int)(u8)((VAR_8>>8 )&0xff),
    (int)(u8)((VAR_8>>16)&0xff),
    (int)(u8)((VAR_8>>24)&0xff));
  VAR_5 = VAR_9;
 }
 return FUNC_0(
    VAR_3, VAR_1, VAR_5, VAR_2, VAR_0,
    VAR_7, -1, 1, VAR_6);
}
