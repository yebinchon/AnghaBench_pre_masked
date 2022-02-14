
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dt_idhash_t ;
struct TYPE_3__ {scalar_t__ di_iarg; int di_lineno; } ;
typedef TYPE_1__ dt_ident_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(dt_idhash_t *VAR_2, dt_ident_t *VAR_3, void *VAR_4)
{
 VAR_1 = VAR_3->di_lineno;
 FUNC_0(VAR_0, "unused #pragma %s\n", (char *)VAR_3->di_iarg);
 return (0);
}
