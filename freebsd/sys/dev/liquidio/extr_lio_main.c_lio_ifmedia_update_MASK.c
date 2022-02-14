
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
struct lio {int oct_dev; struct ifmedia ifmedia; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;





 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct lio* FUNC_2 (struct ifnet*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_2)
{
 struct lio *VAR_3 = FUNC_2(VAR_2);
 struct ifmedia *VAR_4;

 VAR_4 = &VAR_3->ifmedia;


 if (FUNC_1(VAR_4->ifm_media) != VAR_1)
  return (VAR_0);

 switch (FUNC_0(VAR_4->ifm_media)) {
 case 128:
  break;
 case 132:
 case 131:
 case 130:
 case 129:
 default:

  FUNC_3(VAR_3->oct_dev, "Invalid media type (%d)\n",
       FUNC_0(VAR_4->ifm_media));
  return (VAR_0);
 }

 return (0);
}
