
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udpiphdr {int ui_dst; int ui_src; int ui_len; int ui_pr; } ;
struct udphdr {int uh_sum; int uh_ulen; int uh_dport; int uh_sport; } ;
struct ip {int dummy; } ;
struct iodesc {int destip; int myip; int destport; int myport; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct udpiphdr*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct udpiphdr*,size_t) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,size_t) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct iodesc*,struct udphdr*,size_t,int ) ;

ssize_t
FUNC_8(struct iodesc *VAR_2, void *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 struct udpiphdr *VAR_6;
 struct udphdr *VAR_7;
 VAR_6 = (struct udpiphdr *)VAR_3 - 1;
 FUNC_0(VAR_6, sizeof(*VAR_6));

 VAR_7 = (struct udphdr *)VAR_3 - 1;
 VAR_4 += sizeof(*VAR_7);

 VAR_7->uh_sport = VAR_2->myport;
 VAR_7->uh_dport = VAR_2->destport;
 VAR_7->uh_ulen = FUNC_1(VAR_4);

 VAR_6->ui_pr = VAR_0;
 VAR_6->ui_len = VAR_7->uh_ulen;
 VAR_6->ui_src = VAR_2->myip;
 VAR_6->ui_dst = VAR_2->destip;


 VAR_7->uh_sum = FUNC_2(VAR_6, VAR_4 + sizeof (struct ip));


 VAR_5 = FUNC_7(VAR_2, VAR_7, VAR_4, VAR_0);
 if (VAR_5 == -1)
  return (-1);
 if (VAR_5 != VAR_4)
  FUNC_5("sendudp: bad write (%zd != %zd)", VAR_5, VAR_4);
 return (VAR_5 - sizeof(*VAR_7));
}
