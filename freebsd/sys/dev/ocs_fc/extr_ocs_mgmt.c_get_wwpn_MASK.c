
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ocs_textbuf_t ;
struct TYPE_3__ {int hw; } ;
typedef TYPE_1__ ocs_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,char*,char*,unsigned long long) ;

__attribute__((used)) static void
FUNC_3(ocs_t *VAR_2, char *VAR_3, ocs_textbuf_t *VAR_4)
{
 uint64_t *VAR_5;

 VAR_5 = FUNC_1(&VAR_2->hw, VAR_1);

 FUNC_2(VAR_4, VAR_0, "wwpn", "0x%llx", (unsigned long long)FUNC_0(*VAR_5));
}
