
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ major; scalar_t__ minor; scalar_t__ micro; } ;
typedef TYPE_1__ XML_Expat_Version ;



__attribute__((used)) static int
FUNC_0(const XML_Expat_Version *VAR_0,
               const XML_Expat_Version *VAR_1)
{
    return (VAR_0->major == VAR_1->major &&
            VAR_0->minor == VAR_1->minor &&
            VAR_0->micro == VAR_1->micro);
}
