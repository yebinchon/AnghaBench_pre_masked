
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 struct ifmedia* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(if_ctx_t VAR_3)
{
 struct ifmedia *VAR_4 = FUNC_4(VAR_3);

 FUNC_1("ixl_media_change: begin");

 if (FUNC_0(VAR_4->ifm_media) != VAR_2)
  return (VAR_0);

 FUNC_2(FUNC_3(VAR_3), "Media change is not supported.\n");
 return (VAR_1);
}
