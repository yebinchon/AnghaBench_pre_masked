
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tcflag_t ;
struct TYPE_7__ {int c_iflag; int c_lflag; } ;
struct TYPE_6__ {TYPE_2__ Nttyb; } ;
struct TYPE_8__ {TYPE_1__ term; int inp; } ;
typedef TYPE_2__ TTY ;
typedef TYPE_3__ TERMINAL_CONTROL_BLOCK ;
typedef int DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(TERMINAL_CONTROL_BLOCK * VAR_9, int VAR_10, TTY * VAR_11)
{
    DWORD VAR_12 = 0;
    tcflag_t VAR_13;
    tcflag_t VAR_14;

    FUNC_0();

    if (VAR_9 == 0 || VAR_11 == ((void*)0))
 return VAR_6;

    if (VAR_10) {
 VAR_13 = VAR_11->c_iflag;
 VAR_14 = VAR_11->c_lflag;

 FUNC_1(VAR_9->inp, &VAR_12);

 if (VAR_14 & VAR_7)
     VAR_12 |= VAR_3;
 else
     VAR_12 &= (DWORD) (~VAR_3);

 if (VAR_14 & VAR_1)
     VAR_12 |= VAR_2;
 else
     VAR_12 &= (DWORD) (~VAR_2);

 if (VAR_13 & VAR_0)
     VAR_12 |= VAR_5;
 else
     VAR_12 &= (DWORD) (~VAR_5);

 VAR_12 |= VAR_4;

 VAR_11->c_iflag = VAR_13;
 VAR_11->c_lflag = VAR_14;
 FUNC_2(VAR_9->inp, VAR_12);
 VAR_9->term.Nttyb = *VAR_11;
    } else {
 VAR_13 = VAR_9->term.Nttyb.c_iflag;
 VAR_14 = VAR_9->term.Nttyb.c_lflag;
 FUNC_1(VAR_9->inp, &VAR_12);

 if (VAR_12 & VAR_3)
     VAR_14 |= VAR_7;
 else
     VAR_14 &= (tcflag_t) (~VAR_7);

 if (VAR_12 & VAR_2)
     VAR_14 |= VAR_1;
 else
     VAR_14 &= (tcflag_t) (~VAR_1);

 if (VAR_12 & VAR_5)
     VAR_13 |= VAR_0;
 else
     VAR_13 &= (tcflag_t) (~VAR_0);

 VAR_9->term.Nttyb.c_iflag = VAR_13;
 VAR_9->term.Nttyb.c_lflag = VAR_14;

 *VAR_11 = VAR_9->term.Nttyb;
    }
    return VAR_8;
}
