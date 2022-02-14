
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int size; } ;
struct TYPE_9__ {TYPE_2__ sha256; } ;
struct TYPE_7__ {scalar_t__ u8; } ;
struct TYPE_10__ {TYPE_3__ state; TYPE_1__ buffer; } ;
typedef TYPE_4__ lzma_check_state ;


 int FUNC_0 (scalar_t__,int const*,size_t) ;
 int FUNC_1 (TYPE_4__*) ;

extern void
FUNC_2(const uint8_t *VAR_0, size_t VAR_1, lzma_check_state *VAR_2)
{




 while (VAR_1 > 0) {
  const size_t VAR_3 = VAR_2->state.sha256.size & 0x3F;
  size_t VAR_4 = 64 - VAR_3;
  if (VAR_4 > VAR_1)
   VAR_4 = VAR_1;

  FUNC_0(VAR_2->buffer.u8 + VAR_3, VAR_0, VAR_4);

  VAR_0 += VAR_4;
  VAR_1 -= VAR_4;
  VAR_2->state.sha256.size += VAR_4;

  if ((VAR_2->state.sha256.size & 0x3F) == 0)
   FUNC_1(VAR_2);
 }

 return;
}
