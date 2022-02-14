
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
struct adapter {int dev; } ;
typedef int if_ctx_t ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 struct ifmedia* FUNC_4 (int ) ;
 struct adapter* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(if_ctx_t VAR_2)
{
 struct adapter *VAR_3 = FUNC_5(VAR_2);
 struct ifmedia *VAR_4 = FUNC_4(VAR_2);

 FUNC_2("ixv_media_change: begin");

 if (FUNC_1(VAR_4->ifm_media) != VAR_1)
  return (VAR_0);

 switch (FUNC_0(VAR_4->ifm_media)) {
 case 128:
  break;
 default:
  FUNC_3(VAR_3->dev, "Only auto media type\n");
  return (VAR_0);
 }

 return (0);
}
