
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_15__ {scalar_t__ sg_ispeed; scalar_t__ sg_ospeed; int c_cflag; int c_lflag; int c_iflag; int c_oflag; int sg_flags; } ;
struct TYPE_17__ {int d_lb; TYPE_13__ d_t; } ;
struct TYPE_16__ {int t_clrmask; int t_setmask; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (TYPE_13__*,scalar_t__) ;
 int FUNC_3 (TYPE_13__*,scalar_t__) ;
 scalar_t__ VAR_16 ;
 int FUNC_4 () ;
 TYPE_2__ VAR_17 ;
 int VAR_18 ;
 TYPE_2__ VAR_19 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_2__ VAR_20 ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,scalar_t__*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,scalar_t__*) ;
 int FUNC_14 (int ,size_t) ;
 int FUNC_15 (int ,TYPE_2__*) ;
 scalar_t__** VAR_21 ;
 TYPE_1__** VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_16 (char*,int ) ;

int
FUNC_17(void)
{
    if (VAR_14)
 return (0);
    if (FUNC_12(VAR_9, &VAR_20) == -1) {



 return(-1);
    }
    VAR_11 = FUNC_10(&VAR_20);
    VAR_13 = FUNC_9(&VAR_20);

    if (VAR_19.d_t.sg_ispeed != VAR_20.d_t.sg_ispeed) {
 VAR_19.d_t.sg_ispeed = VAR_20.d_t.sg_ispeed;
 VAR_17.d_t.sg_ispeed = VAR_20.d_t.sg_ispeed;
    }

    if (VAR_19.d_t.sg_ospeed != VAR_20.d_t.sg_ospeed) {
 VAR_19.d_t.sg_ospeed = VAR_20.d_t.sg_ospeed;
 VAR_17.d_t.sg_ospeed = VAR_20.d_t.sg_ospeed;
    }


    if (FUNC_7(&VAR_20)) {




 if (FUNC_11(&VAR_20) == 0)
     VAR_12 = 0;
 else
     VAR_12 = FUNC_1();
 VAR_19.d_t.sg_flags = VAR_20.d_t.sg_flags;

 VAR_19.d_t.sg_flags &= ~VAR_22[VAR_2][VAR_4].t_clrmask;
 VAR_19.d_t.sg_flags |= VAR_22[VAR_2][VAR_4].t_setmask;

 if (VAR_12)
     VAR_19.d_t.sg_flags &= ~VAR_15;
 else
     VAR_19.d_t.sg_flags |= VAR_15;

 VAR_19.d_lb = VAR_20.d_lb;
 VAR_19.d_lb &= ~VAR_22[VAR_2][VAR_7].t_clrmask;
 VAR_19.d_lb |= VAR_22[VAR_2][VAR_7].t_setmask;

 VAR_17.d_t.sg_flags = VAR_19.d_t.sg_flags;
 if (VAR_12) {
     VAR_17.d_t.sg_flags &=
      ~(VAR_22[VAR_1][VAR_4].t_clrmask|VAR_15);
     VAR_17.d_t.sg_flags |= VAR_22[VAR_1][VAR_4].t_setmask;
 }
 else {
     VAR_17.d_t.sg_flags &= ~VAR_22[VAR_1][VAR_4].t_clrmask;
     VAR_17.d_t.sg_flags |=
      (VAR_22[VAR_1][VAR_4].t_setmask|VAR_15);
 }

 VAR_17.d_lb = VAR_20.d_lb;
 VAR_17.d_lb &= ~VAR_22[VAR_1][VAR_7].t_clrmask;
 VAR_17.d_lb |= VAR_22[VAR_1][VAR_7].t_setmask;



 {
     int VAR_24;

     FUNC_8(&VAR_20, VAR_21[VAR_10]);





     for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++)
  if (VAR_21[VAR_10][VAR_24] != VAR_21[VAR_2][VAR_24])
      break;

     if (VAR_24 != VAR_0 || VAR_16) {
  VAR_16 = 0;




  for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++) {
      if (!((VAR_22[VAR_1][VAR_3].t_setmask & FUNC_0(VAR_24))) &&
   (VAR_21[VAR_10][VAR_24] != VAR_21[VAR_2][VAR_24]))
   VAR_21[VAR_1][VAR_24] = VAR_21[VAR_10][VAR_24];
      if (VAR_22[VAR_1][VAR_3].t_clrmask & FUNC_0(VAR_24))
   VAR_21[VAR_1][VAR_24] = VAR_23;
  }
  FUNC_13(&VAR_17, VAR_21[VAR_1]);

  for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++) {
      if (!((VAR_22[VAR_2][VAR_3].t_setmask & FUNC_0(VAR_24))) &&
   (VAR_21[VAR_10][VAR_24] != VAR_21[VAR_2][VAR_24]))
   VAR_21[VAR_2][VAR_24] = VAR_21[VAR_10][VAR_24];
      if (VAR_22[VAR_2][VAR_3].t_clrmask & FUNC_0(VAR_24))
   VAR_21[VAR_2][VAR_24] = VAR_23;
  }
  FUNC_13(&VAR_19, VAR_21[VAR_2]);
     }

 }
    }
    if (FUNC_15(VAR_9, &VAR_17) == -1) {



 return(-1);
    }

    VAR_14 = 1;
    FUNC_5();
    return (0);
}
