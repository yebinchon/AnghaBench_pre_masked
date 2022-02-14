
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t real_len; size_t buffer_len; char* buffer_base; char* dest_string; } ;
typedef TYPE_1__ xprintf_struct ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,size_t) ;

__attribute__((used)) static int FUNC_1(xprintf_struct *VAR_3, size_t VAR_4)
{
  char * VAR_5;

  if (VAR_4 + VAR_1 + VAR_3->real_len > VAR_3->buffer_len) {
    VAR_4 += VAR_3->real_len + VAR_0;
    VAR_5 = (char *)FUNC_0((void *)(VAR_3->buffer_base), VAR_4);
    if (VAR_5 == ((void*)0)) {
      VAR_3->buffer_base = ((void*)0);
      return VAR_2;
    }

    VAR_3->dest_string = VAR_5 + (size_t)(VAR_3->dest_string - VAR_3->buffer_base);
    VAR_3->buffer_base = VAR_5;
    VAR_3->buffer_len = VAR_4;

    (VAR_3->buffer_base)[VAR_3->buffer_len - 1] = 1;
  }

  return 0;
}
