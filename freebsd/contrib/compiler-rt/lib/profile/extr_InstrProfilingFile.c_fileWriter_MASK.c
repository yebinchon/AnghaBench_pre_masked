
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {int ElmSize; int NumElm; scalar_t__ Data; } ;
struct TYPE_5__ {scalar_t__ WriterCtx; } ;
typedef TYPE_1__ ProfDataWriter ;
typedef TYPE_2__ ProfDataIOVec ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (scalar_t__,int,int,int *) ;

__attribute__((used)) static uint32_t FUNC_2(ProfDataWriter *VAR_1, ProfDataIOVec *VAR_2,
                           uint32_t VAR_3) {
  uint32_t VAR_4;
  FILE *VAR_5 = (FILE *)VAR_1->WriterCtx;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    if (VAR_2[VAR_4].Data) {
      if (FUNC_1(VAR_2[VAR_4].Data, VAR_2[VAR_4].ElmSize, VAR_2[VAR_4].NumElm, VAR_5) !=
          VAR_2[VAR_4].NumElm)
        return 1;
    } else {
      if (FUNC_0(VAR_5, VAR_2[VAR_4].ElmSize * VAR_2[VAR_4].NumElm, VAR_0) == -1)
        return 1;
    }
  }
  return 0;
}
