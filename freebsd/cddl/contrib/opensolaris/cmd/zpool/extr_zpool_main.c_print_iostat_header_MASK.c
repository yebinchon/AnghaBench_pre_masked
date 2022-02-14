
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* cb_namewidth; } ;
typedef TYPE_1__ iostat_cbdata_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(iostat_cbdata_t *VAR_0)
{
 (void) FUNC_1("%*s     capacity     operations    bandwidth\n",
     VAR_0->cb_namewidth, "");
 (void) FUNC_1("%-*s  alloc   free   read  write   read  write\n",
     VAR_0->cb_namewidth, "pool");
 FUNC_0(VAR_0);
}
