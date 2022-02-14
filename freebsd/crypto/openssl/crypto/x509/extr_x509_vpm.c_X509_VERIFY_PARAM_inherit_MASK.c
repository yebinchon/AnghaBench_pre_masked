
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned long inh_flags; int flags; int iplen; int ip; int emaillen; int email; int hostflags; int * hosts; int policies; int check_time; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int VAR_16 ;
 int FUNC_6 (int ,int) ;

int FUNC_7(X509_VERIFY_PARAM *VAR_17,
                              const X509_VERIFY_PARAM *VAR_18)
{
    unsigned long VAR_19;
    int VAR_20, VAR_21;
    if (!VAR_18)
        return 1;
    VAR_19 = VAR_17->inh_flags | VAR_18->inh_flags;

    if (VAR_19 & VAR_3)
        VAR_17->inh_flags = 0;

    if (VAR_19 & VAR_2)
        return 1;

    if (VAR_19 & VAR_1)
        VAR_20 = 1;
    else
        VAR_20 = 0;

    if (VAR_19 & VAR_4)
        VAR_21 = 1;
    else
        VAR_21 = 0;

    FUNC_6(VAR_13, 0);
    FUNC_6(VAR_16, VAR_0);
    FUNC_6(VAR_8, -1);
    FUNC_6(VAR_7, -1);



    if (VAR_21 || !(VAR_17->flags & VAR_6)) {
        VAR_17->check_time = VAR_18->check_time;
        VAR_17->flags &= ~VAR_6;

    }

    if (VAR_19 & VAR_5)
        VAR_17->flags = 0;

    VAR_17->flags |= VAR_18->flags;

    if (FUNC_5(VAR_12, ((void*)0))) {
        if (!FUNC_2(VAR_17, VAR_18->policies))
            return 0;
    }


    if (FUNC_5(VAR_10, ((void*)0))) {
        FUNC_4(VAR_17->hosts, VAR_15);
        VAR_17->hosts = ((void*)0);
        if (VAR_18->hosts) {
            VAR_17->hosts =
                FUNC_3(VAR_18->hosts, VAR_14, VAR_15);
            if (VAR_17->hosts == ((void*)0))
                return 0;
            VAR_17->hostflags = VAR_18->hostflags;
        }
    }

    if (FUNC_5(VAR_9, ((void*)0))) {
        if (!FUNC_0(VAR_17, VAR_18->email, VAR_18->emaillen))
            return 0;
    }

    if (FUNC_5(VAR_11, ((void*)0))) {
        if (!FUNC_1(VAR_17, VAR_18->ip, VAR_18->iplen))
            return 0;
    }

    return 1;
}
