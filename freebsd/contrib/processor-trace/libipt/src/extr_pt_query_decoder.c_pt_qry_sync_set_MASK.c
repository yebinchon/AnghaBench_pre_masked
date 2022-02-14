
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_2__ {int * begin; } ;
struct pt_query_decoder {TYPE_1__ config; } ;


 int FUNC_0 (struct pt_query_decoder*,int const*,int*) ;
 int FUNC_1 (int const**,int const*,TYPE_1__*) ;
 int VAR_0 ;

int FUNC_2(struct pt_query_decoder *VAR_1, uint64_t *VAR_2,
      uint64_t VAR_3)
{
 const uint8_t *VAR_4, *VAR_5;
 int VAR_6;

 if (!VAR_1)
  return -VAR_0;

 VAR_5 = VAR_1->config.begin + VAR_3;

 VAR_6 = FUNC_1(&VAR_4, VAR_5, &VAR_1->config);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_0(VAR_1, VAR_4, VAR_2);
}
