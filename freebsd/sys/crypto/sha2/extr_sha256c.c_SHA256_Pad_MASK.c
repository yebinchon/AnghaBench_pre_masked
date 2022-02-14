
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int * buf; int state; } ;
typedef TYPE_1__ SHA256_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(SHA256_CTX * VAR_1)
{
 size_t VAR_2;


 VAR_2 = (VAR_1->count >> 3) & 0x3f;


 if (VAR_2 < 56) {

  FUNC_2(&VAR_1->buf[VAR_2], VAR_0, 56 - VAR_2);
 } else {

  FUNC_2(&VAR_1->buf[VAR_2], VAR_0, 64 - VAR_2);
  FUNC_0(VAR_1->state, VAR_1->buf);


  FUNC_3(&VAR_1->buf[0], 0, 56);
 }


 FUNC_1(&VAR_1->buf[56], VAR_1->count);


 FUNC_0(VAR_1->state, VAR_1->buf);
}
