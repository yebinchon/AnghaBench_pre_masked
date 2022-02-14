
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {TYPE_2__ const* vtable; } ;
typedef TYPE_1__ br_hash_compat_context ;
struct TYPE_10__ {int (* out ) (TYPE_2__ const**,unsigned char*) ;int (* update ) (TYPE_2__ const**,unsigned char*,int) ;int (* init ) (TYPE_2__ const**) ;} ;
typedef TYPE_2__ br_hash_class ;


 size_t FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (unsigned char*,scalar_t__) ;
 int FUNC_2 (TYPE_2__ const**) ;
 int FUNC_3 (TYPE_2__ const**,void const*,size_t) ;
 int FUNC_4 (TYPE_2__ const**,unsigned char*,int) ;
 int FUNC_5 (TYPE_2__ const**,unsigned char*) ;

void
FUNC_6(void *VAR_0, size_t VAR_1,
 const br_hash_class *VAR_2, const void *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5;
 size_t VAR_6, VAR_7;
 uint32_t VAR_8;

 VAR_5 = VAR_0;
 VAR_7 = FUNC_0(VAR_2);
 for (VAR_6 = 0, VAR_8 = 0; VAR_6 < VAR_1; VAR_6 += VAR_7, VAR_8 ++) {
  br_hash_compat_context VAR_9;
  unsigned char VAR_10[64];
  size_t VAR_11;

  VAR_9.vtable = VAR_2;
  VAR_2->init(&VAR_9.vtable);
  VAR_2->update(&VAR_9.vtable, VAR_3, VAR_4);
  FUNC_1(VAR_10, VAR_8);
  VAR_2->update(&VAR_9.vtable, VAR_10, 4);
  VAR_2->out(&VAR_9.vtable, VAR_10);
  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11 ++) {
   if ((VAR_6 + VAR_11) >= VAR_1) {
    break;
   }
   VAR_5[VAR_6 + VAR_11] ^= VAR_10[VAR_11];
  }
 }
}
