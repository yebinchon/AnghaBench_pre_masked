
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int oh ;
struct TYPE_3__ {int opheader; int ntlv; } ;
typedef TYPE_1__ ipfw_obj_header ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,char const*,int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, uint8_t VAR_3)
{
 ipfw_obj_header VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(&VAR_4.ntlv, VAR_2, VAR_3);
 if (FUNC_0(VAR_1, &VAR_4.opheader, sizeof(VAR_4)) != 0)
  FUNC_1(VAR_0, "failed to reset stats for instance %s", VAR_2);
}
