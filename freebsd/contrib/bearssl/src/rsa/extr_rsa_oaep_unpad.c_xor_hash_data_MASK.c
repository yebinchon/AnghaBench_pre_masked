
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__ const* vtable; } ;
typedef TYPE_1__ br_hash_compat_context ;
struct TYPE_9__ {int (* out ) (TYPE_2__ const**,unsigned char*) ;int (* update ) (TYPE_2__ const**,void const*,size_t) ;int (* init ) (TYPE_2__ const**) ;} ;
typedef TYPE_2__ br_hash_class ;


 size_t FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (TYPE_2__ const**) ;
 int FUNC_2 (TYPE_2__ const**,void const*,size_t) ;
 int FUNC_3 (TYPE_2__ const**,unsigned char*) ;

__attribute__((used)) static void
FUNC_4(const br_hash_class *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 br_hash_compat_context VAR_4;
 unsigned char VAR_5[64];
 unsigned char *VAR_6;
 size_t VAR_7, VAR_8;

 VAR_4.vtable = VAR_0;
 VAR_0->init(&VAR_4.vtable);
 VAR_0->update(&VAR_4.vtable, VAR_2, VAR_3);
 VAR_0->out(&VAR_4.vtable, VAR_5);
 VAR_6 = VAR_1;
 VAR_8 = FUNC_0(VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7 ++) {
  VAR_6[VAR_7] ^= VAR_5[VAR_7];
 }
}
