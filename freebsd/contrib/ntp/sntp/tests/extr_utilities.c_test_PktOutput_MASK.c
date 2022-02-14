
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pkt {int xmt; int li_vn_mode; } ;
struct TYPE_3__ {int l_ui; int l_uf; } ;
typedef TYPE_1__ l_fp ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct pkt*,int ,int) ;
 int VAR_5 ;
 int FUNC_6 (struct pkt*,int ,int ) ;

void
FUNC_7(void) {
 char * VAR_6 = "debug-output-pkt";
 FUNC_3(VAR_6);

 struct pkt VAR_7;
 FUNC_5(&VAR_7, 0, sizeof(struct pkt));
 VAR_7.li_vn_mode = FUNC_4(VAR_1,
         VAR_4,
         VAR_3);

 l_fp VAR_8;
 VAR_8.l_ui = 8;
 VAR_8.l_uf = 2147483647;
 FUNC_2(&VAR_8, &VAR_7.xmt);

 FUNC_6(&VAR_7, VAR_2, VAR_5);

 FUNC_1(FUNC_0("debug-input-pkt", VAR_0), VAR_6);
}
