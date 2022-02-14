
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * c; } ;
typedef TYPE_1__ jacobian ;
struct TYPE_11__ {int* p; } ;
typedef TYPE_2__ curve_params ;


 int FUNC_0 (unsigned char*,size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_2__ const*,int ) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, const jacobian *VAR_2, const curve_params *VAR_3)
{
 unsigned char *VAR_4;
 size_t VAR_5;
 jacobian VAR_6, VAR_7;

 VAR_4 = VAR_1;
 VAR_5 = (VAR_3->p[0] - (VAR_3->p[0] >> 4) + 7) >> 3;
 VAR_4[0] = 0x04;
 FUNC_1(&VAR_6, VAR_2, sizeof *VAR_2);
 FUNC_3(VAR_7.c[2], VAR_3->p);
 FUNC_2(&VAR_6, &VAR_7, VAR_3, VAR_0);
 FUNC_0(VAR_4 + 1, VAR_5, VAR_6.c[0]);
 FUNC_0(VAR_4 + 1 + VAR_5, VAR_5, VAR_6.c[1]);
}
