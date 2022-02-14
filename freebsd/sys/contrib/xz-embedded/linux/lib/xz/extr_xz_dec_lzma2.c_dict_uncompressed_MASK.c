
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct xz_buf {scalar_t__ in_pos; scalar_t__ in_size; scalar_t__ out_pos; scalar_t__ out_size; scalar_t__ in; size_t out; } ;
struct dictionary {size_t end; size_t pos; size_t buf; scalar_t__ full; scalar_t__ start; int mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (size_t,scalar_t__,size_t) ;
 size_t FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct dictionary *VAR_0, struct xz_buf *VAR_1,
         uint32_t *VAR_2)
{
 size_t VAR_3;

 while (*VAR_2 > 0 && VAR_1->in_pos < VAR_1->in_size
   && VAR_1->out_pos < VAR_1->out_size) {
  VAR_3 = FUNC_2(VAR_1->in_size - VAR_1->in_pos,
    VAR_1->out_size - VAR_1->out_pos);
  if (VAR_3 > VAR_0->end - VAR_0->pos)
   VAR_3 = VAR_0->end - VAR_0->pos;
  if (VAR_3 > *VAR_2)
   VAR_3 = *VAR_2;

  *VAR_2 -= VAR_3;

  FUNC_1(VAR_0->buf + VAR_0->pos, VAR_1->in + VAR_1->in_pos, VAR_3);
  VAR_0->pos += VAR_3;

  if (VAR_0->full < VAR_0->pos)
   VAR_0->full = VAR_0->pos;

  if (FUNC_0(VAR_0->mode)) {
   if (VAR_0->pos == VAR_0->end)
    VAR_0->pos = 0;

   FUNC_1(VAR_1->out + VAR_1->out_pos, VAR_1->in + VAR_1->in_pos,
     VAR_3);
  }

  VAR_0->start = VAR_0->pos;

  VAR_1->out_pos += VAR_3;
  VAR_1->in_pos += VAR_3;
 }
}
