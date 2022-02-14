
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyinq_block {int dummy; } ;


 int FUNC_0 (struct ttyinq_block*,size_t) ;
 int FUNC_1 (struct ttyinq_block*,size_t) ;

__attribute__((used)) static __inline void
FUNC_2(struct ttyinq_block *VAR_0, size_t VAR_1,
    size_t VAR_2, int VAR_3)
{

 if (VAR_3) {

  for (; VAR_2 > 0; VAR_2--, VAR_1++)
   FUNC_1(VAR_0, VAR_1);
 } else {

  for (; VAR_2 > 0; VAR_2--, VAR_1++)
   FUNC_0(VAR_0, VAR_1);
 }
}
