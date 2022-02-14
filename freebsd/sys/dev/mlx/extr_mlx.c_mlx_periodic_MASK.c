
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mp_which; scalar_t__ mp_when; int mp_howlong; } ;
struct mlx_softc {int mlx_lastpoll; scalar_t__ mlx_iftype; int mlx_timeout; TYPE_1__ mlx_pause; } ;
struct mlx_rebuild_stat {int dummy; } ;
struct mlx_enquiry_old {int dummy; } ;
struct mlx_enquiry {int dummy; } ;
struct mlx_enq_sys_drive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mlx_softc*) ;
 int VAR_5 ;
 int FUNC_1 (int *,int,void (*) (void*),struct mlx_softc*) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct mlx_softc*,int) ;
 int FUNC_5 (struct mlx_softc*,int ,int,int ) ;
 int FUNC_6 (struct mlx_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int,int) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_8(void *VAR_10)
{
    struct mlx_softc *VAR_11 = (struct mlx_softc *)VAR_10;

    FUNC_2(1);
    FUNC_0(VAR_11);




    if ((VAR_11->mlx_pause.mp_which != 0) &&
 (VAR_11->mlx_pause.mp_when > 0) &&
 (VAR_9 >= VAR_11->mlx_pause.mp_when)){

 FUNC_6(VAR_11);
 VAR_11->mlx_pause.mp_when = 0;
 FUNC_7(500, VAR_6);




    } else if ((VAR_11->mlx_pause.mp_which != 0) &&
        (VAR_11->mlx_pause.mp_when == 0)) {


 if (VAR_9 >= VAR_11->mlx_pause.mp_howlong) {
     FUNC_6(VAR_11);
     VAR_11->mlx_pause.mp_which = 0;
     FUNC_7(500, VAR_6);
 } else {
     FUNC_7((VAR_9 % 5) * 100 + 500, VAR_6/8);
 }




    } else if (VAR_9 > (VAR_11->mlx_lastpoll + 10)) {
 VAR_11->mlx_lastpoll = VAR_9;






 FUNC_5(VAR_11, (VAR_11->mlx_iftype == VAR_4) ? VAR_2 : VAR_1,
      FUNC_3(sizeof(struct mlx_enquiry), sizeof(struct mlx_enquiry_old)), VAR_7);
 FUNC_5(VAR_11, VAR_0, sizeof(struct mlx_enq_sys_drive) * VAR_5,
   VAR_7);

    }



    FUNC_5(VAR_11, VAR_3, sizeof(struct mlx_rebuild_stat), VAR_8);


    FUNC_4(VAR_11, 1);


    FUNC_1(&VAR_11->mlx_timeout, VAR_6, FUNC_8, VAR_11);
}
