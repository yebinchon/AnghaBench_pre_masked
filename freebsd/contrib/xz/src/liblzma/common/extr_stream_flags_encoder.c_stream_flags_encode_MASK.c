
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int check; } ;
typedef TYPE_1__ lzma_stream_flags ;


 unsigned int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(const lzma_stream_flags *VAR_1, uint8_t *VAR_2)
{
 if ((unsigned int)(VAR_1->check) > VAR_0)
  return 1;

 VAR_2[0] = 0x00;
 VAR_2[1] = VAR_1->check;

 return 0;
}
