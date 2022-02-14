
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ecore_mcast_config_data {scalar_t__ bin; int * member_0; } ;
typedef scalar_t__ uint8_t ;
struct ecore_mcast_obj {int max_cmd_len; int (* set_one_rule ) (struct bxe_softc*,struct ecore_mcast_obj*,int,union ecore_mcast_config_data*,int ) ;} ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int FUNC_1 (struct ecore_mcast_obj*,int) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_mcast_obj*,int,union ecore_mcast_config_data*,int ) ;

__attribute__((used)) static inline int FUNC_3(
 struct bxe_softc *VAR_1, struct ecore_mcast_obj *VAR_2 , int VAR_3,
 int *VAR_4)
{
 int VAR_5, VAR_6 = *VAR_4;
 union ecore_mcast_config_data VAR_7 = {((void*)0)};


 for (VAR_5 = FUNC_1(VAR_2, VAR_3); VAR_5 >= 0;
     VAR_5 = FUNC_1(VAR_2, VAR_5 + 1)) {

  VAR_7.bin = (uint8_t)VAR_5;
  VAR_2->set_one_rule(VAR_1, VAR_2, VAR_6, &VAR_7,
    VAR_0);

  VAR_6++;

  FUNC_0(VAR_1, "About to configure a bin %d\n", VAR_5);




  if (VAR_6 >= VAR_2->max_cmd_len)
   break;
 }

 *VAR_4 = VAR_6;

 return VAR_5;
}
