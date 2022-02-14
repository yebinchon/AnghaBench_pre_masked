
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; char* buf; void** ptr; scalar_t__ pos; scalar_t__ gen; } ;
struct dcons_softc {TYPE_1__ i; TYPE_1__ o; int brk_state; } ;
struct dcons_buf {void** iptr; void** optr; void** ioffset; void** ooffset; void** isize; void** osize; } ;


 void* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, int VAR_2, int VAR_3, struct dcons_buf *VAR_4,
    struct dcons_softc *VAR_5)
{
 int VAR_6;
 struct dcons_softc *VAR_7;

 VAR_7 = &VAR_5[VAR_1];

 VAR_6 = VAR_3 * 3 / 4;

 VAR_7->o.size = VAR_6;
 VAR_7->i.size = VAR_3 - VAR_6;
 VAR_7->o.buf = (char *)VAR_4 + VAR_2;
 VAR_7->i.buf = VAR_7->o.buf + VAR_6;
 VAR_7->o.gen = VAR_7->i.gen = 0;
 VAR_7->o.pos = VAR_7->i.pos = 0;
 VAR_7->o.ptr = &VAR_4->optr[VAR_1];
 VAR_7->i.ptr = &VAR_4->iptr[VAR_1];
 VAR_7->brk_state = VAR_0;
 VAR_4->osize[VAR_1] = FUNC_1(VAR_6);
 VAR_4->isize[VAR_1] = FUNC_1(VAR_3 - VAR_6);
 VAR_4->ooffset[VAR_1] = FUNC_1(VAR_2);
 VAR_4->ioffset[VAR_1] = FUNC_1(VAR_2 + VAR_6);
 VAR_4->optr[VAR_1] = FUNC_0(&VAR_7->o);
 VAR_4->iptr[VAR_1] = FUNC_0(&VAR_7->i);

 return(0);
}
