
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ CurOffset; int BufferSz; int * BufferStart; scalar_t__ OwnFileWriter; int * FileWriter; } ;
typedef int ProfDataWriter ;
typedef TYPE_1__ ProfBufferIO ;



__attribute__((used)) static void FUNC_0(ProfBufferIO *VAR_0, ProfDataWriter *VAR_1,
                             uint8_t *VAR_2, uint32_t VAR_3) {
  VAR_0->FileWriter = VAR_1;
  VAR_0->OwnFileWriter = 0;
  VAR_0->BufferStart = VAR_2;
  VAR_0->BufferSz = VAR_3;
  VAR_0->CurOffset = 0;
}
