
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char uchar ;
struct TYPE_5__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_4__ {char* cur; } ;



__attribute__((used)) static void
FUNC_0 (cpp_reader *VAR_0)
{
  const uchar *VAR_1 = VAR_0->buffer->cur;

  VAR_1++;
  if (*VAR_1 == '/')
    VAR_1++;



  while(! (*VAR_1++ == '/' && VAR_1[-2] == '*') )
    ;

  VAR_0->buffer->cur = VAR_1;
}
