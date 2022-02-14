
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ulong_t ;
struct TYPE_3__ {size_t str_nbufs; size_t str_ptr; size_t* str_bufs; size_t str_bufsz; scalar_t__ str_size; } ;
typedef TYPE_1__ strtab_t ;
typedef scalar_t__ ssize_t ;



ssize_t
FUNC_0(const strtab_t *VAR_0,
    ssize_t (*VAR_1)(void *, size_t, void *), void *VAR_2)
{
 ssize_t VAR_3, VAR_4 = 0;
 ulong_t VAR_5;
 size_t VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0->str_nbufs; VAR_5++, VAR_4 += VAR_3) {
  if (VAR_5 == VAR_0->str_nbufs - 1)
   VAR_6 = VAR_0->str_ptr - VAR_0->str_bufs[VAR_5];
  else
   VAR_6 = VAR_0->str_bufsz;

  if ((VAR_3 = VAR_1(VAR_0->str_bufs[VAR_5], VAR_6, VAR_2)) <= 0)
   break;
 }

 if (VAR_4 == 0 && VAR_0->str_size != 0)
  return (-1);

 return (VAR_4);
}
