
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * vtable; } ;
struct TYPE_8__ {size_t ibuf_len; size_t obuf_len; size_t max_frag_len; unsigned int log_max_frag_len; TYPE_1__ out; scalar_t__ peer_log_max_frag_len; void* obuf; int * ibuf; scalar_t__ record_type_out; scalar_t__ version_out; scalar_t__ record_type_in; scalar_t__ version_in; int err; scalar_t__ incrypt; int iomode; } ;
typedef TYPE_2__ br_ssl_engine_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(br_ssl_engine_context *VAR_6,
 void *VAR_7, size_t VAR_8, void *VAR_9, size_t VAR_10)
{
 VAR_6->iomode = VAR_2;
 VAR_6->incrypt = 0;
 VAR_6->err = VAR_1;
 VAR_6->version_in = 0;
 VAR_6->record_type_in = 0;
 VAR_6->version_out = 0;
 VAR_6->record_type_out = 0;
 if (VAR_7 == ((void*)0)) {
  if (VAR_6->ibuf == ((void*)0)) {
   FUNC_0(VAR_6, VAR_0);
  }
 } else {
  unsigned VAR_11;

  VAR_6->ibuf = VAR_7;
  VAR_6->ibuf_len = VAR_8;
  if (VAR_9 == ((void*)0)) {
   VAR_9 = VAR_7;
   VAR_10 = VAR_8;
  }
  VAR_6->obuf = VAR_9;
  VAR_6->obuf_len = VAR_10;
  for (VAR_11 = 14; VAR_11 >= 9; VAR_11 --) {
   size_t VAR_12;

   VAR_12 = (size_t)1 << VAR_11;
   if (VAR_10 >= VAR_12 + VAR_4
    && VAR_8 >= VAR_12 + VAR_3)
   {
    break;
   }
  }
  if (VAR_11 == 8) {
   FUNC_0(VAR_6, VAR_0);
   return;
  } else if (VAR_11 == 13) {
   VAR_11 = 12;
  }
  VAR_6->max_frag_len = (size_t)1 << VAR_11;
  VAR_6->log_max_frag_len = VAR_11;
  VAR_6->peer_log_max_frag_len = 0;
 }
 VAR_6->out.vtable = &VAR_5;
 FUNC_1(VAR_6);
 FUNC_2(VAR_6);
}
