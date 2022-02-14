
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_2__ {int * begin; } ;
struct pt_query_decoder {TYPE_1__ config; int * pos; int * sync; } ;
typedef int ptrdiff_t ;


 int FUNC_0 (struct pt_query_decoder*,int const*,int *) ;
 int FUNC_1 (int const**,int const*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct pt_query_decoder *VAR_3, uint64_t *VAR_4)
{
 const uint8_t *VAR_5, *VAR_6, *VAR_7;
 ptrdiff_t VAR_8;
 int VAR_9;

 if (!VAR_3)
  return -VAR_1;

 VAR_7 = VAR_3->config.begin;
 VAR_6 = VAR_3->sync;
 VAR_5 = VAR_3->pos;
 if (!VAR_5)
  VAR_5 = VAR_7;

 if (VAR_5 == VAR_6)
  VAR_5 += VAR_2;

 if (VAR_5 < VAR_7)
  return -VAR_0;




 VAR_8 = VAR_5 - VAR_7;
 if (VAR_2 <= VAR_8)
  VAR_8 = VAR_2 - 1;

 VAR_5 -= VAR_8;

 VAR_9 = FUNC_1(&VAR_6, VAR_5, &VAR_3->config);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_0(VAR_3, VAR_6, VAR_4);
}
