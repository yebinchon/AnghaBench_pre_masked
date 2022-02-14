
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vxlp_with; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void
FUNC_1(void)
{

 if ((VAR_6.vxlp_with & VAR_4) == VAR_4)
  FUNC_0(1, "cannot specify both local IPv4 and IPv6 addresses");
 if ((VAR_6.vxlp_with & VAR_5) == VAR_5)
  FUNC_0(1, "cannot specify both remote IPv4 and IPv6 addresses");
 if ((VAR_6.vxlp_with & VAR_0 &&
      VAR_6.vxlp_with & VAR_3) ||
     (VAR_6.vxlp_with & VAR_1 &&
      VAR_6.vxlp_with & VAR_2))
  FUNC_0(1, "cannot mix IPv4 and IPv6 addresses");
}
