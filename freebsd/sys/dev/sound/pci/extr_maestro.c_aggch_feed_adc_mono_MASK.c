
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agg_rchinfo {int phys; int base; unsigned int hwptr; unsigned int buflen; scalar_t__ sink; scalar_t__ src; int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,unsigned int) ;
 unsigned int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct agg_rchinfo *VAR_1)
{
 unsigned VAR_2, VAR_3;

 FUNC_0(VAR_1->parent);
 VAR_2 = FUNC_3(VAR_1->parent, 0, VAR_0);
 FUNC_1(VAR_1->parent);
 VAR_2 -= 0xffff & ((VAR_1->phys - VAR_1->base) >> 1);
 VAR_3 = VAR_1->hwptr;

 if (VAR_2 < VAR_3) {
  FUNC_2(VAR_1->src + VAR_3, VAR_1->sink + VAR_3, VAR_1->buflen - VAR_3);
  FUNC_2(VAR_1->src, VAR_1->sink, VAR_2);
 } else if (VAR_2 > VAR_3)
  FUNC_2(VAR_1->src + VAR_3, VAR_1->sink + VAR_3, VAR_2 - VAR_3);
 VAR_1->hwptr = VAR_2;
}
