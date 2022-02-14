
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; char* buf; int gen; int pos; int * ptr; } ;
struct TYPE_3__ {int size; char* buf; int gen; int pos; int * ptr; } ;
struct dcons_softc {TYPE_2__ i; TYPE_1__ o; int brk_state; } ;
struct dcons_buf {scalar_t__ version; int magic; int * iptr; int * optr; int * ioffset; int * ooffset; int * isize; int * osize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct dcons_buf *VAR_7, int VAR_8, struct dcons_softc *VAR_9)
{
 int VAR_10, VAR_11;
 struct dcons_softc *VAR_12;

 if (VAR_7->version != FUNC_0(VAR_5))
  return (-1);

 VAR_11 = VAR_1;
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10 ++) {
  VAR_12 = &VAR_9[VAR_10];
  VAR_12->o.size = FUNC_1(VAR_7->osize[VAR_10]);
  VAR_12->i.size = FUNC_1(VAR_7->isize[VAR_10]);
  VAR_12->o.buf = (char *)VAR_7 + FUNC_1(VAR_7->ooffset[VAR_10]);
  VAR_12->i.buf = (char *)VAR_7 + FUNC_1(VAR_7->ioffset[VAR_10]);
  VAR_12->o.gen = FUNC_1(VAR_7->optr[VAR_10]) >> VAR_0;
  VAR_12->i.gen = FUNC_1(VAR_7->iptr[VAR_10]) >> VAR_0;
  VAR_12->o.pos = FUNC_1(VAR_7->optr[VAR_10]) & VAR_4;
  VAR_12->i.pos = FUNC_1(VAR_7->iptr[VAR_10]) & VAR_4;
  VAR_12->o.ptr = &VAR_7->optr[VAR_10];
  VAR_12->i.ptr = &VAR_7->iptr[VAR_10];
  VAR_12->brk_state = VAR_6;

  VAR_11 += VAR_12->o.size + VAR_12->i.size;
 }


 if (VAR_11 > VAR_8)
  return (-1);

 VAR_7->magic = FUNC_1(VAR_2);

 return (0);
}
