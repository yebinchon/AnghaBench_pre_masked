
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ocs_textbuf_t ;
struct TYPE_3__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
typedef scalar_t__ ocs_hw_linkcfg_e ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__*) ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 char* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(ocs_t *VAR_2, char *VAR_3, ocs_textbuf_t *VAR_4)
{
 const char *VAR_5 = ((void*)0);
 uint32_t VAR_6;
 ocs_hw_linkcfg_e VAR_7;
 FUNC_0(&VAR_2->hw, VAR_1, &VAR_6);
 VAR_7 = (ocs_hw_linkcfg_e)VAR_6;
 VAR_5 = FUNC_2(VAR_7);
 FUNC_1(VAR_4, VAR_0, "linkcfg", VAR_5);
}
