
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct sc_cnstate {scalar_t__ scr_opened; } ;
struct fkeytab {int len; int* str; } ;
struct TYPE_10__ {TYPE_5__* sc; TYPE_2__* tsw; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_12__ {TYPE_1__* sc; } ;
struct TYPE_11__ {int kbd; } ;
struct TYPE_9__ {int * (* te_fkeystr ) (TYPE_3__*,int) ;} ;
struct TYPE_8__ {TYPE_3__* cur_scp; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int const*,int*,int) ;
 int * FUNC_3 (int ,int,size_t*) ;
 TYPE_7__* VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_5__*,int,struct sc_cnstate*) ;
 int FUNC_7 (int const*) ;
 int * FUNC_8 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_9(struct sc_cnstate *VAR_3)
{
    static struct fkeytab VAR_4;
    static int VAR_5;
    scr_stat *VAR_6;
    const u_char *VAR_7;
    int VAR_8;





    if (VAR_3->scr_opened)
 FUNC_4();
    VAR_6 = VAR_2->sc->cur_scp;
    if (VAR_3->scr_opened)
 FUNC_5(VAR_6);

    if (VAR_5 < VAR_4.len)
 return VAR_4.str[VAR_5++];

    VAR_8 = FUNC_6(VAR_6->sc, VAR_0 | VAR_1, VAR_3);

    switch (FUNC_1(VAR_8)) {
    case 0:
 return FUNC_0(VAR_8);
    case 129:
 VAR_7 = (*VAR_6->tsw->te_fkeystr)(VAR_6, VAR_8);
 if (VAR_7 != ((void*)0)) {
     VAR_4.len = FUNC_7(VAR_7);
     FUNC_2(VAR_7, VAR_4.str, VAR_4.len);
     VAR_5 = 1;
     return VAR_4.str[0];
 }
 VAR_7 = FUNC_3(VAR_6->sc->kbd, FUNC_0(VAR_8), (size_t *)&VAR_5);
 VAR_4.len = VAR_5;
 if ((VAR_7 != ((void*)0)) && (VAR_4.len > 0)) {
     FUNC_2(VAR_7, VAR_4.str, VAR_4.len);
     VAR_5 = 1;
     return VAR_4.str[0];
 }
 return VAR_8;
    case 128:
    case 130:
    default:
 return -1;
    }

}
