
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* zc_word; } ;
typedef TYPE_1__ zio_cksum_t ;
typedef scalar_t__ uint64_t ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

int
FUNC_2(void *VAR_0, size_t VAR_1, void *VAR_2)
{
 zio_cksum_t *VAR_3 = VAR_2;

 const uint64_t *VAR_4 = VAR_0;
 const uint64_t *VAR_5 = VAR_4 + (VAR_1 / sizeof (uint64_t));
 uint64_t VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = VAR_3->zc_word[0];
 VAR_8 = VAR_3->zc_word[1];
 VAR_7 = VAR_3->zc_word[2];
 VAR_9 = VAR_3->zc_word[3];

 for (; VAR_4 < VAR_5; VAR_4 += 2) {
  VAR_6 += FUNC_0(VAR_4[0]);
  VAR_8 += FUNC_0(VAR_4[1]);
  VAR_7 += VAR_6;
  VAR_9 += VAR_8;
 }

 FUNC_1(VAR_3, VAR_6, VAR_8, VAR_7, VAR_9);
 return (0);
}
