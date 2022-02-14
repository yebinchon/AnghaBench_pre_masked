
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_ch {int* buf; size_t pos; size_t size; int * ptr; int gen; } ;
struct dcons_softc {struct dcons_ch o; } ;


 int FUNC_0 (struct dcons_ch*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct dcons_softc *VAR_0, int VAR_1)
{
 struct dcons_ch *VAR_2;

 VAR_2 = &VAR_0->o;

 VAR_2->buf[VAR_2->pos] = VAR_1;
 VAR_2->pos ++;
 if (VAR_2->pos >= VAR_2->size) {
  VAR_2->gen = FUNC_1(VAR_2->gen);
  VAR_2->pos = 0;
 }
 *VAR_2->ptr = FUNC_0(VAR_2);
}
