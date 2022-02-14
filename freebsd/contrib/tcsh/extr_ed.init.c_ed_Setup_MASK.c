
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct varent {int * vec; } ;
typedef int sigset_t ;
struct TYPE_14__ {int c_iflag; int c_oflag; int c_cflag; int c_lflag; int sg_flags; int c_line; } ;
struct TYPE_16__ {int d_lb; TYPE_1__ d_t; } ;
struct TYPE_15__ {int t_clrmask; int t_setmask; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 struct varent* FUNC_2 (int ) ;
 int FUNC_3 () ;
 TYPE_3__ VAR_27 ;
 int VAR_28 ;
 TYPE_3__ VAR_29 ;
 long FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_30 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int ) ;
 TYPE_3__ VAR_31 ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,unsigned char*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int ,TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*,unsigned char*) ;
 int FUNC_18 (int ,TYPE_3__*) ;
 unsigned char** VAR_32 ;
 TYPE_2__** VAR_33 ;
 int FUNC_19 (int ) ;
 unsigned char VAR_34 ;
 int VAR_35 ;
 int FUNC_20 (char*,int) ;

int
FUNC_21(int VAR_36)
{
    static int VAR_37 = 0;
    struct varent *VAR_38;

    if (VAR_37)
 return(0);
    VAR_34 = (unsigned char) VAR_26;


    if ((VAR_38 = FUNC_2(VAR_16)) != ((void*)0) && VAR_38->vec != ((void*)0)) {
 if (!FUNC_1(*(VAR_38->vec), VAR_17))
     VAR_30 = VAR_5;
 else if (!FUNC_1(*(VAR_38->vec), VAR_19))
     VAR_30 = VAR_6;
    }
    else
 VAR_30 = VAR_5;
    FUNC_3();
    VAR_4 = 0;
    VAR_3 = 0;
    FUNC_0(FUNC_5(FUNC_19(VAR_18)));


    if (FUNC_16(VAR_13, &VAR_29) == -1) {



 return(-1);
    }

    VAR_31 = VAR_27 = VAR_29;

    VAR_21 = FUNC_14(&VAR_29);
    VAR_22 = FUNC_15(&VAR_29);
    VAR_23 = FUNC_13(&VAR_29);
    if (VAR_22) {
 VAR_29.d_t.sg_flags &= ~(VAR_33[VAR_2][VAR_7].t_clrmask|VAR_24);
 VAR_29.d_t.sg_flags |= VAR_33[VAR_2][VAR_7].t_setmask;
    }
    else {
 VAR_29.d_t.sg_flags &= ~VAR_33[VAR_2][VAR_7].t_clrmask;
 VAR_29.d_t.sg_flags |= (VAR_33[VAR_2][VAR_7].t_setmask|VAR_24);
    }

    VAR_29.d_lb &= ~VAR_33[VAR_2][VAR_10].t_clrmask;
    VAR_29.d_lb |= VAR_33[VAR_2][VAR_10].t_setmask;






    if (VAR_36) {
 if (FUNC_11(&VAR_31)) {
     FUNC_12(&VAR_31, VAR_32[VAR_20]);



     for (VAR_36 = 0; VAR_36 < VAR_0 - 2; VAR_36++)
  if (VAR_32[VAR_20][VAR_36] != VAR_34 &&
      VAR_32[VAR_1][VAR_36] != VAR_34)
      VAR_32[VAR_1][VAR_36] = VAR_32[VAR_20][VAR_36];
     for (VAR_36 = 0; VAR_36 < VAR_0; VAR_36++)
  if (VAR_32[VAR_20][VAR_36] != VAR_34 &&
      VAR_32[VAR_2][VAR_36] != VAR_34)
      VAR_32[VAR_2][VAR_36] = VAR_32[VAR_20][VAR_36];
 }
 FUNC_17(&VAR_29, VAR_32[VAR_2]);
 if (FUNC_18(VAR_13, &VAR_29) == -1) {



     return(-1);
 }
    }
    else
 FUNC_17(&VAR_29, VAR_32[VAR_2]);
    VAR_37 = 1;
    return(0);
}
