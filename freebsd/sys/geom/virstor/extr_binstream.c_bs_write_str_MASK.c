
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; int pos; } ;
typedef TYPE_1__ bin_stream_t ;



unsigned
FUNC_0(bin_stream_t * VAR_0, char *VAR_1)
{
 int VAR_2 = 0;
 do {
  *(VAR_0->data + VAR_0->pos + VAR_2) = *VAR_1;
  VAR_2++;
 } while (*(VAR_1++) != '\0');
 VAR_0->pos += VAR_2;
 return VAR_0->pos;
}
