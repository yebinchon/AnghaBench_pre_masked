
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long retval; scalar_t__ name; } ;
typedef TYPE_1__ OPT_PAIR ;


 int FUNC_0 (int ,char*,scalar_t__,...) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

int FUNC_1(const char *VAR_4, unsigned long VAR_5)
{
    OPT_PAIR *VAR_6;

    if (VAR_5 == VAR_0) {
        FUNC_0(VAR_1, "%s: Bad format \"%s\"; must be pem or der\n",
                   VAR_3, VAR_4);
    } else {
        FUNC_0(VAR_1, "%s: Bad format \"%s\"; must be one of:\n",
                   VAR_3, VAR_4);
        for (VAR_6 = VAR_2; VAR_6->name; VAR_6++)
            if (VAR_5 & VAR_6->retval)
                FUNC_0(VAR_1, "   %s\n", VAR_6->name);
    }
    return 0;
}
