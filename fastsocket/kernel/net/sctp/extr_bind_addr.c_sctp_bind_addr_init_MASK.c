
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_bind_addr {int port; int address_list; scalar_t__ malloced; } ;
typedef int __u16 ;


 int FUNC_0 (int *) ;

void FUNC_1(struct sctp_bind_addr *VAR_0, __u16 VAR_1)
{
 VAR_0->malloced = 0;

 FUNC_0(&VAR_0->address_list);
 VAR_0->port = VAR_1;
}
