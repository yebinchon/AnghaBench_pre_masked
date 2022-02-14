
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {unsigned int nbTrainSamples; size_t* offsets; size_t d; scalar_t__ samples; } ;
typedef TYPE_1__ FASTCOVER_ctx_t ;


 size_t FUNC_0 (scalar_t__,unsigned int,size_t) ;

__attribute__((used)) static void FUNC_1(U32 *VAR_0, unsigned VAR_1, FASTCOVER_ctx_t *VAR_2){
  size_t VAR_3;
  for (unsigned VAR_4 = 0; VAR_4 < VAR_2->nbTrainSamples; VAR_4++) {
    size_t VAR_5 = VAR_2->offsets[VAR_4];
    size_t VAR_6 = VAR_2->offsets[VAR_4+1];
    VAR_3 = VAR_5;
    while (VAR_3 + VAR_2->d <= VAR_6) {
      const size_t VAR_7 = FUNC_0(VAR_2->samples + VAR_3, VAR_1, VAR_2->d);
      VAR_0[VAR_7]++;
      VAR_3++;
    }
  }
}
