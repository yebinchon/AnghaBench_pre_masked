
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; scalar_t__ ptr; int buf; int * vtable; } ;
typedef TYPE_1__ rng_fake_ctx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int FUNC_2 (int ,void const*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(rng_fake_ctx *VAR_3, const void *VAR_4,
 const void *VAR_5, size_t VAR_6)
{
 (void)VAR_4;
 if (VAR_6 > sizeof VAR_3->buf) {
  FUNC_1(VAR_2, "seed is too large (%lu bytes)\n",
   (unsigned long)VAR_6);
  FUNC_0(VAR_0);
 }
 VAR_3->vtable = &VAR_1;
 FUNC_2(VAR_3->buf, VAR_5, VAR_6);
 VAR_3->ptr = 0;
 VAR_3->len = VAR_6;
}
