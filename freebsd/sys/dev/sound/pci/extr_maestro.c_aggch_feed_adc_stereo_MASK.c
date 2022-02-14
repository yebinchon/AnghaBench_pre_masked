
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct agg_rchinfo {int srcphys; int base; unsigned int hwptr; int buflen; scalar_t__ sink; int * src; TYPE_1__* parent; } ;
typedef int int16_t ;
struct TYPE_4__ {int bufsz; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,scalar_t__,unsigned int) ;
 unsigned int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct agg_rchinfo *VAR_1)
{
 unsigned VAR_2, VAR_3;
 int16_t *VAR_4;

 FUNC_0(VAR_1->parent);
 VAR_2 = FUNC_3(VAR_1->parent, 0, VAR_0);
 FUNC_1(VAR_1->parent);
 VAR_2 -= 0xffff & ((VAR_1->srcphys - VAR_1->base) >> 1);
 VAR_3 = VAR_1->hwptr;
 VAR_4 = VAR_1->src + VAR_1->parent->bufsz/4;

 if (VAR_2 < VAR_3) {
  FUNC_2(VAR_1->src + VAR_3, VAR_4 + VAR_3,
      VAR_1->sink + 2*VAR_3, VAR_1->buflen/2 - VAR_3);
  FUNC_2(VAR_1->src, VAR_4,
      VAR_1->sink, VAR_2);
 } else if (VAR_2 > VAR_3)
  FUNC_2(VAR_1->src + VAR_3, VAR_4 + VAR_3,
      VAR_1->sink + 2*VAR_3, VAR_2 - VAR_3);
 VAR_1->hwptr = VAR_2;
}
