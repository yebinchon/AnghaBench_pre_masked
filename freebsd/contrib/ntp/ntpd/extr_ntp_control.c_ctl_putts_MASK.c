
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {scalar_t__ l_uf; scalar_t__ l_ui; } ;
typedef TYPE_1__ l_fp ;
typedef int buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char*,int,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(
 const char *VAR_0,
 l_fp *VAR_1
 )
{
 char VAR_2[24];
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, sizeof(VAR_2),
        "0x%08lx.%08lx",
        (u_long)VAR_1->l_ui, (u_long)VAR_1->l_uf);
 FUNC_0(VAR_3 >= 0 && (size_t)VAR_3 < sizeof(VAR_2));
 FUNC_1(VAR_0, VAR_2, VAR_3);
}
