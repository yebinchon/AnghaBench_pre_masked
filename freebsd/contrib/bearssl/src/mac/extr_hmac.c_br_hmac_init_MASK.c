
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_10__ {int kso; int ksi; TYPE_4__* dig_vtable; } ;
typedef TYPE_2__ br_hmac_key_context ;
struct TYPE_9__ {int vtable; } ;
struct TYPE_11__ {size_t out_len; int kso; TYPE_1__ dig; } ;
typedef TYPE_3__ br_hmac_context ;
struct TYPE_12__ {int (* set_state ) (int *,int ,int ) ;int (* init ) (int *) ;} ;
typedef TYPE_4__ br_hash_class ;


 size_t FUNC_0 (TYPE_4__ const*) ;
 size_t FUNC_1 (TYPE_4__ const*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;

void
FUNC_5(br_hmac_context *VAR_0,
 const br_hmac_key_context *VAR_1, size_t VAR_2)
{
 const br_hash_class *VAR_3;
 size_t VAR_4, VAR_5;

 VAR_3 = VAR_1->dig_vtable;
 VAR_4 = FUNC_0(VAR_3);
 VAR_3->init(&VAR_0->dig.vtable);
 VAR_3->set_state(&VAR_0->dig.vtable, VAR_1->ksi, (uint64_t)VAR_4);
 FUNC_2(VAR_0->kso, VAR_1->kso, sizeof VAR_1->kso);
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_2 > 0 && VAR_2 < VAR_5) {
  VAR_5 = VAR_2;
 }
 VAR_0->out_len = VAR_5;
}
