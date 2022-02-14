
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int ;
struct TYPE_5__ {TYPE_2__* x_private; int * x_ops; } ;
typedef TYPE_1__ XDR ;
struct TYPE_6__ {int sendsize; int recvsize; int (* readit ) (void*,void*,int) ;int (* writeit ) (void*,void*,int) ;int in_size; char* in_hdrp; scalar_t__ in_received; scalar_t__ in_reclen; void* nonblock; int in_header; scalar_t__ in_hdrlen; void* in_haveheader; int last_frag; scalar_t__ fbtbc; int * in_boundry; scalar_t__ in_finger; int * in_base; void* frag_sent; struct TYPE_6__* out_boundry; struct TYPE_6__* out_finger; struct TYPE_6__* out_base; int * frag_header; void* tcp_handle; } ;
typedef TYPE_2__ RECSTREAM ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;

void
FUNC_4(XDR *VAR_3, u_int VAR_4, u_int VAR_5, void *VAR_6,
    int (*VAR_7)(void *, void *, int), int (*VAR_8)(void *, void *, int))
{
 RECSTREAM *VAR_9 = FUNC_1(sizeof(RECSTREAM));

 if (VAR_9 == ((void*)0)) {
  FUNC_3("xdrrec_create: out of memory");




  return;
 }
 VAR_9->sendsize = VAR_4 = FUNC_0(VAR_4);
 VAR_9->out_base = FUNC_1(VAR_9->sendsize);
 if (VAR_9->out_base == ((void*)0)) {
  FUNC_3("xdrrec_create: out of memory");
  FUNC_2(VAR_9, sizeof(RECSTREAM));
  return;
 }
 VAR_9->recvsize = VAR_5 = FUNC_0(VAR_5);
 VAR_9->in_base = FUNC_1(VAR_5);
 if (VAR_9->in_base == ((void*)0)) {
  FUNC_3("xdrrec_create: out of memory");
  FUNC_2(VAR_9->out_base, VAR_4);
  FUNC_2(VAR_9, sizeof(RECSTREAM));
  return;
 }



 VAR_3->x_ops = &VAR_2;
 VAR_3->x_private = VAR_9;
 VAR_9->tcp_handle = VAR_6;
 VAR_9->readit = VAR_7;
 VAR_9->writeit = VAR_8;
 VAR_9->out_finger = VAR_9->out_boundry = VAR_9->out_base;
 VAR_9->frag_header = (u_int32_t *)(void *)VAR_9->out_base;
 VAR_9->out_finger += sizeof(u_int32_t);
 VAR_9->out_boundry += VAR_4;
 VAR_9->frag_sent = VAR_0;
 VAR_9->in_size = VAR_5;
 VAR_9->in_boundry = VAR_9->in_base;
 VAR_9->in_finger = (VAR_9->in_boundry += VAR_5);
 VAR_9->fbtbc = 0;
 VAR_9->last_frag = VAR_1;
 VAR_9->in_haveheader = VAR_0;
 VAR_9->in_hdrlen = 0;
 VAR_9->in_hdrp = (char *)(void *)&VAR_9->in_header;
 VAR_9->nonblock = VAR_0;
 VAR_9->in_reclen = 0;
 VAR_9->in_received = 0;
}
