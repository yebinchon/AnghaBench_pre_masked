
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int bufsz; } ;
struct sc_chinfo {int blksz; scalar_t__ dma_setup; int buffer; struct sc_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct sc_chinfo*,int) ;
 int FUNC_3 (struct sc_chinfo*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_6(kobj_t VAR_0, void *VAR_1, u_int32_t VAR_2)
{
    struct sc_chinfo *VAR_3 = VAR_1;
    struct sc_info *VAR_4 = VAR_3->parent;
    u_int32_t VAR_5;

    VAR_5 = FUNC_2(VAR_3, 0);



    VAR_3->blksz = FUNC_1(VAR_2, VAR_4->bufsz / 2);
    FUNC_5(VAR_3->buffer, 2, VAR_3->blksz);
    VAR_3->dma_setup = 0;
    FUNC_3(VAR_3);
    FUNC_2(VAR_3, VAR_5);

    FUNC_0(FUNC_4("cs4281chan_setblocksize: blksz %d Setting %d\n", VAR_2, VAR_3->blksz));

    return VAR_3->blksz;
}
