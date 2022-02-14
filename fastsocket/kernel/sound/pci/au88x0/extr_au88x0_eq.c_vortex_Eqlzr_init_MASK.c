
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int this04; } ;
struct TYPE_14__ {int this0a; int this0c; int this0e; int this10; int this28; int this54; int this58; int this5c; int coefset; int this14_array; TYPE_1__ this04; scalar_t__ this08; } ;
struct TYPE_13__ {TYPE_3__ eq; } ;
typedef TYPE_2__ vortex_t ;
typedef TYPE_3__ eqlzr_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_8(vortex_t * VAR_0)
{
 eqlzr_t *VAR_1 = &(VAR_0->eq);



 VAR_1->this08 = 0;
 VAR_1->this0a = 0x5999;
 VAR_1->this0c = 0x5999;
 VAR_1->this0e = 0x5999;

 VAR_1->this10 = 0xa;
 VAR_1->this04.this04 = VAR_1->this10;
 VAR_1->this28 = 0x1;
 VAR_1->this54 = 0x0;
 VAR_1->this58 = 0xffff;
 VAR_1->this5c = 0xffff;


 FUNC_0(VAR_1->this14_array, 0, sizeof(VAR_1->this14_array));


 FUNC_4(VAR_0);
 FUNC_3(VAR_0, 0x11);
 FUNC_5(VAR_0);

 FUNC_2(VAR_0, &(VAR_1->coefset));
 FUNC_7(VAR_0, VAR_1->this54);
 FUNC_6(VAR_0, 0, 0);
 FUNC_1(VAR_0);
}
