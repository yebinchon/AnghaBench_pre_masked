
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lzma_vli ;
struct TYPE_3__ {int coder; int (* set_uncompressed ) (int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ lz; } ;
typedef TYPE_2__ lzma_coder ;


 int FUNC_0 (int ,int ) ;

extern void
FUNC_1(void *VAR_0, lzma_vli VAR_1)
{
 lzma_coder *VAR_2 = VAR_0;
 VAR_2->lz.set_uncompressed(VAR_2->lz.coder, VAR_1);
}
