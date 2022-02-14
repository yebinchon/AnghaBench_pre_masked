
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_msg_size; } ;
struct TYPE_3__ {int tv_sec; scalar_t__ tv_usec; } ;
struct snmp_client {int retries; int txbuflen; int rxbuflen; int fd; TYPE_2__ engine; scalar_t__ next_reqid; scalar_t__ min_reqid; int max_reqid; scalar_t__ dump_pdus; TYPE_1__ timeout; int cname; int security_model; int write_community; int read_community; int * cport; int * chost; int trans; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snmp_client*,int ,int) ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2(struct snmp_client *VAR_4)
{
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->version = VAR_3;
 VAR_4->trans = VAR_2;
 VAR_4->chost = ((void*)0);
 VAR_4->cport = ((void*)0);

 FUNC_1(VAR_4->read_community, "public");
 FUNC_1(VAR_4->write_community, "private");

 VAR_4->security_model = VAR_1;
 FUNC_1(VAR_4->cname, "");

 VAR_4->timeout.tv_sec = 3;
 VAR_4->timeout.tv_usec = 0;
 VAR_4->retries = 3;
 VAR_4->dump_pdus = 0;
 VAR_4->txbuflen = VAR_4->rxbuflen = 10000;

 VAR_4->fd = -1;

 VAR_4->max_reqid = VAR_0;
 VAR_4->min_reqid = 0;
 VAR_4->next_reqid = 0;

 VAR_4->engine.max_msg_size = 1500;
}
