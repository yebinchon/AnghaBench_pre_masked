
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(int VAR_1, char **VAR_2)
{

    if (VAR_1 != 2)
 FUNC_1("restart: offset not specified\n");
    else {
 VAR_0 = FUNC_0(VAR_2[1]);
 FUNC_1("restarting at %ld. %s\n", (long)VAR_0,
        "execute get, put or append to initiate transfer");
    }
}
