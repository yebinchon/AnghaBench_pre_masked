
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md5_ctx {int buflen; int* total; int * buffer; } ;
typedef int md5_uint32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,struct md5_ctx*) ;
 void* FUNC_2 (struct md5_ctx*,void*) ;
 int FUNC_3 (int *,int ,size_t) ;

void *
FUNC_4 (struct md5_ctx *VAR_1, void *VAR_2)
{

  md5_uint32 VAR_3 = VAR_1->buflen;
  size_t VAR_4;


  VAR_1->total[0] += VAR_3;
  if (VAR_1->total[0] < VAR_3)
    ++VAR_1->total[1];

  VAR_4 = VAR_3 >= 56 ? 64 + 56 - VAR_3 : 56 - VAR_3;
  FUNC_3 (&VAR_1->buffer[VAR_3], VAR_0, VAR_4);


  *(md5_uint32 *) &VAR_1->buffer[VAR_3 + VAR_4] = FUNC_0 (VAR_1->total[0] << 3);
  *(md5_uint32 *) &VAR_1->buffer[VAR_3 + VAR_4 + 4] = FUNC_0 ((VAR_1->total[1] << 3) |
       (VAR_1->total[0] >> 29));


  FUNC_1 (VAR_1->buffer, VAR_3 + VAR_4 + 8, VAR_1);

  return FUNC_2 (VAR_1, VAR_2);
}
