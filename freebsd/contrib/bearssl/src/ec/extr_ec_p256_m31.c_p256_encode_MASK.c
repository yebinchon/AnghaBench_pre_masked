
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ p256_jacobian ;


 int FUNC_0 (unsigned char*,int,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, const p256_jacobian *VAR_1)
{
 unsigned char *VAR_2;

 VAR_2 = VAR_0;
 VAR_2[0] = 0x04;
 FUNC_0(VAR_2 + 1, 32, VAR_1->x);
 FUNC_0(VAR_2 + 33, 32, VAR_1->y);
}
