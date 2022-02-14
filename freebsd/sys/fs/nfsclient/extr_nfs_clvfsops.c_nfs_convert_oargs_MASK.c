
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onfs_args {int hostname; int readahead; int retrans; int timeo; int readdirsize; int rsize; int wsize; int flags; int fhsize; int fh; int proto; int sotype; int addrlen; int addr; } ;
struct nfs_args {int hostname; int readahead; int retrans; int timeo; int readdirsize; int rsize; int wsize; int flags; int fhsize; int fh; int proto; int sotype; int addrlen; int addr; int version; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct nfs_args *VAR_1, struct onfs_args *VAR_2)
{

 VAR_1->version = VAR_0;
 VAR_1->addr = VAR_2->addr;
 VAR_1->addrlen = VAR_2->addrlen;
 VAR_1->sotype = VAR_2->sotype;
 VAR_1->proto = VAR_2->proto;
 VAR_1->fh = VAR_2->fh;
 VAR_1->fhsize = VAR_2->fhsize;
 VAR_1->flags = VAR_2->flags;
 VAR_1->wsize = VAR_2->wsize;
 VAR_1->rsize = VAR_2->rsize;
 VAR_1->readdirsize = VAR_2->readdirsize;
 VAR_1->timeo = VAR_2->timeo;
 VAR_1->retrans = VAR_2->retrans;
 VAR_1->readahead = VAR_2->readahead;
 VAR_1->hostname = VAR_2->hostname;
}
