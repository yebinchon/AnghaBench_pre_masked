
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ read_ahead; scalar_t__ read_pos; scalar_t__ write_pos; } ;
typedef TYPE_1__ lzma_mf ;



__attribute__((used)) static inline uint32_t
FUNC_0(const lzma_mf *VAR_0)
{
 return VAR_0->write_pos - VAR_0->read_pos + VAR_0->read_ahead;
}
