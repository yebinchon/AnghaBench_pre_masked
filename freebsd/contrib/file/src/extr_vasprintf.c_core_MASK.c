
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t maxlen; char* src_string; char* buffer_base; size_t real_len; int pseudo_len; char* dest_string; scalar_t__ buffer_len; } ;
typedef TYPE_1__ xprintf_struct ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (void*,size_t) ;
 int FUNC_3 (TYPE_1__*,size_t) ;

__attribute__((used)) static int FUNC_4(xprintf_struct *VAR_1)
{
  size_t VAR_2;
  char *VAR_3;


  if ((int)(VAR_1->maxlen) <= 0)
    return VAR_0;
  VAR_1->maxlen--;


  if (VAR_1->src_string == ((void*)0))
    VAR_1->src_string = "(null)";


  VAR_1->buffer_base = ((void*)0);
  VAR_1->buffer_len = 0;
  VAR_1->real_len = 0;
  VAR_1->pseudo_len = 0;
  if (FUNC_3(VAR_1, (size_t)0) == VAR_0)
    return VAR_0;
  VAR_1->dest_string = VAR_1->buffer_base;


  for (;;) {

    if (*(VAR_1->src_string) == 0) {
      *(VAR_1->dest_string) = '\0';
      break;
    }

    if (FUNC_0(VAR_1) == VAR_0)
      goto free_EOF;


    if (VAR_1->real_len >= VAR_1->maxlen) {
      (VAR_1->buffer_base)[VAR_1->maxlen] = '\0';
      break;
    }
  }


  VAR_3 = VAR_1->buffer_base;

  VAR_3 = VAR_1->buffer_base + VAR_1->real_len;
  VAR_2 = VAR_1->real_len;




  while(*(VAR_1->src_string) != 0) {
    VAR_1->real_len = 0;
    VAR_1->dest_string = VAR_3;
    if (FUNC_0(VAR_1) == VAR_0)
      goto free_EOF;
  }

  VAR_1->buffer_base = (char *)FUNC_2((void *)(VAR_1->buffer_base), VAR_2 + 1);
  if (VAR_1->buffer_base == ((void*)0))
    return VAR_0;
  return VAR_1->pseudo_len;

 free_EOF:
  FUNC_1(VAR_1->buffer_base);
  return VAR_0;
}
