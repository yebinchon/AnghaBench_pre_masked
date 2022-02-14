
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; size_t ptr; size_t buf; } ;
typedef TYPE_1__ rng_fake_ctx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void*,size_t,size_t) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(rng_fake_ctx *VAR_2, void *VAR_3, size_t VAR_4)
{
 if (VAR_4 > (VAR_2->len - VAR_2->ptr)) {
  FUNC_1(VAR_1, "asking for more data than expected\n");
  FUNC_0(VAR_0);
 }
 FUNC_2(VAR_3, VAR_2->buf + VAR_2->ptr, VAR_4);
 VAR_2->ptr += VAR_4;
}
