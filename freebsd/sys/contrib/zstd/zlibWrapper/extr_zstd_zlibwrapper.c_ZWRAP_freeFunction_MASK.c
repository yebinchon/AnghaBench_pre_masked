
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_2__ {int opaque; int (* zfree ) (int ,void*) ;} ;


 int FUNC_0 (int ,void*) ;

__attribute__((used)) static void FUNC_1(void* VAR_0, void* VAR_1)
{
    z_streamp VAR_2 = (z_streamp) VAR_0;
    VAR_2->zfree(VAR_2->opaque, VAR_1);

}
