
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listen_dnsport {scalar_t__ dnscrypt_udp_buff; scalar_t__ udp_buff; int cps; } ;


 int FUNC_0 (struct listen_dnsport*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_4(struct listen_dnsport* VAR_2)
{
 if(!VAR_2)
  return;
 FUNC_1(VAR_2->cps);






 FUNC_3(VAR_2->udp_buff);
 FUNC_0(VAR_2);
 if(VAR_1) {
  VAR_1 = 0;
  FUNC_2(&VAR_0);
 }
}
