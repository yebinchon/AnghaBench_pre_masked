
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* cbcmac; unsigned int* buf; int ptr; } ;
typedef TYPE_1__ br_eax_context ;


 int FUNC_0 (unsigned int*,int ,int) ;

__attribute__((used)) static void
FUNC_1(br_eax_context *VAR_0, unsigned VAR_1)
{
 FUNC_0(VAR_0->cbcmac, 0, sizeof VAR_0->cbcmac);
 FUNC_0(VAR_0->buf, 0, sizeof VAR_0->buf);
 VAR_0->buf[15] = VAR_1;
 VAR_0->ptr = 16;
}
