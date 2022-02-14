
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ulong_t ;
struct TYPE_5__ {char const** str_bufs; int str_bufsz; } ;
typedef TYPE_1__ strtab_t ;
struct TYPE_6__ {size_t str_buf; char* str_data; } ;
typedef TYPE_2__ strhash_t ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(strtab_t *VAR_0, strhash_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
 ulong_t VAR_4 = VAR_1->str_buf;
 const char *VAR_5 = VAR_1->str_data;
 size_t VAR_6, VAR_7;
 int VAR_8;

 while (VAR_3 != 0) {
  if (VAR_5 == VAR_0->str_bufs[VAR_4] + VAR_0->str_bufsz)
   VAR_5 = VAR_0->str_bufs[++VAR_4];

  VAR_6 = VAR_0->str_bufs[VAR_4] + VAR_0->str_bufsz - VAR_5;
  VAR_7 = FUNC_0(VAR_6, VAR_3);

  if ((VAR_8 = FUNC_1(VAR_5, VAR_2, VAR_7)) != 0)
   return (VAR_8);

  VAR_5 += VAR_7;
  VAR_2 += VAR_7;
  VAR_3 -= VAR_7;
 }

 return (0);
}
