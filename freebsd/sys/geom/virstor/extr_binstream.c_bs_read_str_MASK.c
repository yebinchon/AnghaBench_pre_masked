
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; int pos; } ;
typedef TYPE_1__ bin_stream_t ;



char*
FUNC_0(bin_stream_t * VAR_0, char *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = 0;
 char *VAR_4 = VAR_1;
 if (VAR_1 == ((void*)0) || VAR_2 < 1)
  return ((void*)0);
 do {
  *VAR_4 = *(VAR_0->data + VAR_0->pos + VAR_3);
 } while (VAR_3++ < VAR_2 - 1 && *(VAR_4++) != '\0');
 *(VAR_1 + VAR_2 - 1) = '\0';
 VAR_0->pos += VAR_3;
 return VAR_1;
}
