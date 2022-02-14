
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int out; } ;
struct TYPE_10__ {TYPE_2__ vtable; } ;
struct TYPE_11__ {TYPE_3__ gcm; } ;
struct TYPE_12__ {int ighash; TYPE_4__ out; TYPE_1__* igcm_out; } ;
typedef TYPE_5__ br_ssl_engine_context ;
typedef int br_block_ctr_class ;
struct TYPE_8__ {int (* init ) (int *,int const*,unsigned char*,size_t,int ,unsigned char*) ;} ;


 int FUNC_0 (TYPE_5__*,int,size_t,unsigned char*) ;
 int FUNC_1 (int *,int const*,unsigned char*,size_t,int ,unsigned char*) ;

void
FUNC_2(br_ssl_engine_context *VAR_0,
 int VAR_1, int VAR_2,
 const br_block_ctr_class *VAR_3, size_t VAR_4)
{
 unsigned char VAR_5[72];
 unsigned char *VAR_6, *VAR_7;

 FUNC_0(VAR_0, VAR_2, VAR_4 + 4, VAR_5);
 if (VAR_1) {
  VAR_6 = &VAR_5[0];
  VAR_7 = &VAR_5[VAR_4 << 1];
 } else {
  VAR_6 = &VAR_5[VAR_4];
  VAR_7 = &VAR_5[(VAR_4 << 1) + 4];
 }
 VAR_0->igcm_out->init(&VAR_0->out.gcm.vtable.out,
  VAR_3, VAR_6, VAR_4, VAR_0->ighash, VAR_7);
}
