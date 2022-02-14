
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int check; } ;
struct TYPE_4__ {TYPE_1__ stream_flags; } ;
typedef TYPE_2__ lzma_stream_coder ;
typedef int lzma_check ;



__attribute__((used)) static lzma_check
FUNC_0(const void *VAR_0)
{
 const lzma_stream_coder *VAR_1 = VAR_0;
 return VAR_1->stream_flags.check;
}
