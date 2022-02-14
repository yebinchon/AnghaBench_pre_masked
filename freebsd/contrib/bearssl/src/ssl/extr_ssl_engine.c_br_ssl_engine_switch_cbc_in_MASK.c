
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int vtable; } ;
struct TYPE_18__ {TYPE_3__ cbc; } ;
struct TYPE_15__ {scalar_t__ version; } ;
struct TYPE_19__ {int incrypt; TYPE_4__ in; TYPE_2__* icbc_in; TYPE_1__ session; } ;
typedef TYPE_5__ br_ssl_engine_context ;
struct TYPE_20__ {size_t desc; } ;
typedef TYPE_6__ br_hash_class ;
struct TYPE_21__ {size_t block_size; } ;
typedef TYPE_7__ br_block_cbcdec_class ;
struct TYPE_16__ {int (* init ) (int *,TYPE_7__ const*,unsigned char*,size_t,TYPE_6__ const*,unsigned char*,size_t,size_t,unsigned char*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*,int,size_t,unsigned char*) ;
 int FUNC_2 (int *,TYPE_7__ const*,unsigned char*,size_t,TYPE_6__ const*,unsigned char*,size_t,size_t,unsigned char*) ;

void
FUNC_3(br_ssl_engine_context *VAR_3,
 int VAR_4, int VAR_5, int VAR_6,
 const br_block_cbcdec_class *VAR_7, size_t VAR_8)
{
 unsigned char VAR_9[192];
 unsigned char *VAR_10, *VAR_11, *VAR_12;
 const br_hash_class *VAR_13;
 size_t VAR_14, VAR_15, VAR_16;

 VAR_13 = FUNC_0(VAR_3, VAR_6);
 VAR_15 = (VAR_13->desc >> VAR_1) & VAR_0;
 VAR_14 = VAR_15;




 if (VAR_3->session.version >= VAR_2) {
  VAR_16 = 0;
 } else {
  VAR_16 = VAR_7->block_size;
 }
 FUNC_1(VAR_3, VAR_5,
  VAR_14 + VAR_8 + VAR_16, VAR_9);
 if (VAR_4) {
  VAR_11 = &VAR_9[VAR_14];
  VAR_10 = &VAR_9[(VAR_14 << 1) + VAR_8];
  VAR_12 = &VAR_9[((VAR_14 + VAR_8) << 1) + VAR_16];
 } else {
  VAR_11 = &VAR_9[0];
  VAR_10 = &VAR_9[VAR_14 << 1];
  VAR_12 = &VAR_9[(VAR_14 + VAR_8) << 1];
 }
 if (VAR_16 == 0) {
  VAR_12 = ((void*)0);
 }
 VAR_3->icbc_in->init(&VAR_3->in.cbc.vtable,
  VAR_7, VAR_10, VAR_8,
  VAR_13, VAR_11, VAR_14, VAR_15, VAR_12);
 VAR_3->incrypt = 1;
}
