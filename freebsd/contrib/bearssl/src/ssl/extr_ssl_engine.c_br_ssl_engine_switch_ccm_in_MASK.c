
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int in; } ;
struct TYPE_10__ {TYPE_2__ vtable; } ;
struct TYPE_11__ {TYPE_3__ ccm; } ;
struct TYPE_12__ {int incrypt; TYPE_4__ in; TYPE_1__* iccm_in; } ;
typedef TYPE_5__ br_ssl_engine_context ;
typedef int br_block_ctrcbc_class ;
struct TYPE_8__ {int (* init ) (int *,int const*,unsigned char*,size_t,unsigned char*,size_t) ;} ;


 int FUNC_0 (TYPE_5__*,int,size_t,unsigned char*) ;
 int FUNC_1 (int *,int const*,unsigned char*,size_t,unsigned char*,size_t) ;

void
FUNC_2(br_ssl_engine_context *VAR_0,
 int VAR_1, int VAR_2,
 const br_block_ctrcbc_class *VAR_3,
 size_t VAR_4, size_t VAR_5)
{
 unsigned char VAR_6[72];
 unsigned char *VAR_7, *VAR_8;

 FUNC_0(VAR_0, VAR_2, VAR_4 + 4, VAR_6);
 if (VAR_1) {
  VAR_7 = &VAR_6[VAR_4];
  VAR_8 = &VAR_6[(VAR_4 << 1) + 4];
 } else {
  VAR_7 = &VAR_6[0];
  VAR_8 = &VAR_6[VAR_4 << 1];
 }
 VAR_0->iccm_in->init(&VAR_0->in.ccm.vtable.in,
  VAR_3, VAR_7, VAR_4, VAR_8, VAR_5);
 VAR_0->incrypt = 1;
}
