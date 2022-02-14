
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int lzma_outq ;
typedef int lzma_outbuf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int*,scalar_t__,int) ;

extern uint64_t
FUNC_1(uint64_t VAR_2, uint32_t VAR_3)
{
 uint64_t VAR_4;
 uint32_t VAR_5;

 if (FUNC_0(&VAR_4, &VAR_5, VAR_2, VAR_3)
   != VAR_0)
  return VAR_1;

 return sizeof(lzma_outq) + VAR_5 * sizeof(lzma_outbuf)
   + VAR_4;
}
