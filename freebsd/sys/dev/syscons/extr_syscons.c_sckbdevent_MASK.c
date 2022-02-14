
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char u_char ;
struct tty {int dummy; } ;
struct TYPE_8__ {int keyboard; TYPE_3__* cur_scp; int * kbd; } ;
typedef TYPE_2__ sc_softc_t ;
typedef int keyboard_t ;
struct TYPE_9__ {int status; TYPE_1__* tsw; int index; } ;
struct TYPE_7__ {char* (* te_fkeystr ) (TYPE_3__*,int) ;scalar_t__ (* te_input ) (TYPE_3__*,int,struct tty*) ;} ;



 int VAR_0 ;

 int VAR_1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tty* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,void*) ;
 char* FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int ,int *) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int,struct tty*) ;
 char* FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (struct tty*) ;
 int FUNC_12 (struct tty*,int,int ) ;
 int FUNC_13 (struct tty*) ;
 int FUNC_14 (struct tty*,char const*,int) ;

__attribute__((used)) static int
FUNC_15(keyboard_t *VAR_5, int VAR_6, void *VAR_7)
{
    sc_softc_t *VAR_8;
    struct tty *VAR_9;
    int VAR_10, VAR_11 = 0;
    size_t VAR_12;
    const u_char *VAR_13;

    VAR_8 = (sc_softc_t *)VAR_7;


    FUNC_5(&VAR_1);

    switch (VAR_6) {
    case 130:
 break;
    case 129:
 VAR_8->kbd = ((void*)0);
 VAR_8->keyboard = -1;
 FUNC_3(VAR_5, (void *)&VAR_8->keyboard);
 goto done;
    default:
 VAR_11 = VAR_0;
 goto done;
    }






    while ((VAR_10 = FUNC_7(VAR_8, VAR_4, ((void*)0))) != VAR_3) {

 VAR_9 = FUNC_2(VAR_8, VAR_8->cur_scp->index);
 if (!FUNC_11(VAR_9))
     continue;

 if ((*VAR_8->cur_scp->tsw->te_input)(VAR_8->cur_scp, VAR_10, VAR_9))
     continue;

 switch (FUNC_1(VAR_10)) {
 case 0x0000:
     FUNC_12(VAR_9, FUNC_0(VAR_10), 0);
     break;
 case 131:
     VAR_13 = (*VAR_8->cur_scp->tsw->te_fkeystr)(VAR_8->cur_scp, VAR_10);
     if (VAR_13 != ((void*)0)) {
      FUNC_14(VAR_9, VAR_13, FUNC_8(VAR_13));
  break;
     }
     VAR_13 = FUNC_4(VAR_5, FUNC_0(VAR_10), &VAR_12);
     if (VAR_13 != ((void*)0))
      FUNC_14(VAR_9, VAR_13, VAR_12);
     break;
 case 128:
     FUNC_12(VAR_9, 0x1b, 0);
     FUNC_12(VAR_9, FUNC_0(VAR_10), 0);
     break;
 case 132:
     FUNC_14(VAR_9, "\x1B[Z", 3);
     break;
 }

 FUNC_13(VAR_9);
    }

    VAR_8->cur_scp->status |= VAR_2;

done:
    FUNC_6(&VAR_1);
    return (VAR_11);
}
