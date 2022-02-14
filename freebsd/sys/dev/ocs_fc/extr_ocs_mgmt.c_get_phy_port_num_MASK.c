
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ocs_textbuf_t ;
typedef int ocs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,char*) ;
 char* FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(ocs_t *VAR_2, char *VAR_3, ocs_textbuf_t *VAR_4)
{
 char *VAR_5 = ((void*)0);

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_4, VAR_0, "phy_port_num", VAR_5);
 } else {
  FUNC_0(VAR_4, VAR_0, "phy_port_num", "unknown");
 }
}
