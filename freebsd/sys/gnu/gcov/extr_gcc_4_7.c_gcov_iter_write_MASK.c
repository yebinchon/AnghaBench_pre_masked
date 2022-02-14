
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct gcov_iterator {scalar_t__ pos; scalar_t__ size; size_t buffer; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct sbuf*,size_t,size_t) ;

int
FUNC_1(struct gcov_iterator *VAR_2, struct sbuf *VAR_3)
{
 size_t VAR_4;

 if (VAR_2->pos >= VAR_2->size)
  return (VAR_0);

 VAR_4 = VAR_1;
 if (VAR_2->pos + VAR_4 > VAR_2->size)
  VAR_4 = VAR_2->size - VAR_2->pos;

 FUNC_0(VAR_3, VAR_2->buffer + VAR_2->pos, VAR_4);

 return (0);
}
