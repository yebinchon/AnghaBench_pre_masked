
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ulong_t ;
struct TYPE_4__ {size_t str_nbufs; scalar_t__ str_ptr; scalar_t__* str_bufs; scalar_t__ str_bufsz; } ;
typedef TYPE_1__ strtab_t ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (char const*,size_t,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(strtab_t *VAR_0, const char *VAR_1, size_t VAR_2)
{
 ulong_t VAR_3 = VAR_0->str_nbufs - 1;
 size_t VAR_4, VAR_5;

 while (VAR_2 != 0) {
  if (VAR_0->str_ptr == VAR_0->str_bufs[VAR_3] + VAR_0->str_bufsz) {
   FUNC_2(VAR_0);
   VAR_3++;
  }

  VAR_4 = VAR_0->str_bufs[VAR_3] + VAR_0->str_bufsz - VAR_0->str_ptr;
  VAR_5 = FUNC_0(VAR_4, VAR_2);
  FUNC_1(VAR_1, VAR_0->str_ptr, VAR_5);

  VAR_0->str_ptr += VAR_5;
  VAR_1 += VAR_5;
  VAR_2 -= VAR_5;
 }
}
