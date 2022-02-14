
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int l_ui; int l_uf; } ;
typedef TYPE_1__ l_fp ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_1 ;

void
FUNC_5(void) {
 char * VAR_2 = "debug-output-lfp-dec";
 FUNC_3(VAR_2);

 l_fp VAR_3;
 VAR_3.l_ui = 6310;
 VAR_3.l_uf = 308502;

 l_fp VAR_4;
 FUNC_2(&VAR_3, &VAR_4);

 FUNC_4(&VAR_4, VAR_1);

 FUNC_1(FUNC_0("debug-input-lfp-dec", VAR_0), VAR_2);
}
