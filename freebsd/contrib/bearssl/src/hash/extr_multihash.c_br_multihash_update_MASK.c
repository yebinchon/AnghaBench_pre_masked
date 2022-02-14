
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int vtable; } ;
typedef TYPE_1__ gen_hash_context ;
struct TYPE_6__ {scalar_t__ buf; scalar_t__ count; TYPE_3__** impl; } ;
typedef TYPE_2__ br_multihash_context ;
struct TYPE_7__ {int (* state ) (int *,unsigned char*) ;int (* update ) (int *,scalar_t__,int) ;int (* set_state ) (int *,unsigned char*,scalar_t__) ;} ;
typedef TYPE_3__ br_hash_class ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,unsigned char const*,size_t) ;
 int FUNC_2 (int *,unsigned char*,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 int FUNC_4 (int *,unsigned char*) ;

void
FUNC_5(br_multihash_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3;
 size_t VAR_4;

 VAR_3 = VAR_1;
 VAR_4 = (size_t)VAR_0->count & 127;
 while (VAR_2 > 0) {
  size_t VAR_5;

  VAR_5 = 128 - VAR_4;
  if (VAR_5 > VAR_2) {
   VAR_5 = VAR_2;
  }
  FUNC_1(VAR_0->buf + VAR_4, VAR_3, VAR_5);
  VAR_4 += VAR_5;
  VAR_3 += VAR_5;
  VAR_2 -= VAR_5;
  VAR_0->count += (uint64_t)VAR_5;
  if (VAR_4 == 128) {
   int VAR_6;

   for (VAR_6 = 1; VAR_6 <= 6; VAR_6 ++) {
    const br_hash_class *VAR_7;

    VAR_7 = VAR_0->impl[VAR_6 - 1];
    if (VAR_7 != ((void*)0)) {
     gen_hash_context VAR_8;
     unsigned char *VAR_9;

     VAR_9 = (unsigned char *)VAR_0
      + FUNC_0(VAR_6);
     VAR_7->set_state(&VAR_8.vtable,
      VAR_9, VAR_0->count - 128);
     VAR_7->update(&VAR_8.vtable, VAR_0->buf, 128);
     VAR_7->state(&VAR_8.vtable, VAR_9);
    }
   }
   VAR_4 = 0;
  }
 }
}
