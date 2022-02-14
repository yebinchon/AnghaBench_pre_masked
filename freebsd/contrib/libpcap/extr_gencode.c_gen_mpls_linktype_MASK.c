
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct block {int dummy; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 () ;
 int FUNC_1 (struct block*,struct block*) ;
 struct block* FUNC_2 (int *,int ,int ,int ,int,int) ;

__attribute__((used)) static struct block *
FUNC_3(compiler_state_t *VAR_2, int VAR_3)
{
 struct block *VAR_4, *VAR_5;

        switch (VAR_3) {

        case 129:

                VAR_4 = FUNC_2(VAR_2, VAR_1, (u_int)-2, VAR_0, 0x01, 0x01);

                VAR_5 = FUNC_2(VAR_2, VAR_1, 0, VAR_0, 0x40, 0xf0);
                FUNC_1(VAR_4, VAR_5);
                return VAR_5;

       case 128:

                VAR_4 = FUNC_2(VAR_2, VAR_1, (u_int)-2, VAR_0, 0x01, 0x01);

                VAR_5 = FUNC_2(VAR_2, VAR_1, 0, VAR_0, 0x60, 0xf0);
                FUNC_1(VAR_4, VAR_5);
                return VAR_5;

       default:
                FUNC_0();
        }
}
