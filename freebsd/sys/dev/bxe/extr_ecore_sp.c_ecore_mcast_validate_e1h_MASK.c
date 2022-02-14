
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_mcast_ramrod_params {int mcast_list_len; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_mcast_cmd { ____Placeholder_ecore_mcast_cmd } ecore_mcast_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct bxe_softc *VAR_3,
        struct ecore_mcast_ramrod_params *VAR_4,
        enum ecore_mcast_cmd VAR_5)
{

 if ((VAR_5 == VAR_0) || (VAR_5 == VAR_1))
  VAR_4->mcast_list_len = 1;

 return VAR_2;
}
