
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct xz_buf {scalar_t__ out_pos; scalar_t__ out; } ;
struct dictionary {size_t pos; size_t start; scalar_t__ end; size_t buf; int mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,size_t,size_t) ;

__attribute__((used)) static uint32_t FUNC_2(struct dictionary *VAR_0, struct xz_buf *VAR_1)
{
 size_t VAR_2 = VAR_0->pos - VAR_0->start;

 if (FUNC_0(VAR_0->mode)) {
  if (VAR_0->pos == VAR_0->end)
   VAR_0->pos = 0;

  FUNC_1(VAR_1->out + VAR_1->out_pos, VAR_0->buf + VAR_0->start,
    VAR_2);
 }

 VAR_0->start = VAR_0->pos;
 VAR_1->out_pos += VAR_2;
 return VAR_2;
}
