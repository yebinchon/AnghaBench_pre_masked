
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_raw_obj {int (* wait_comp ) (struct bxe_softc*,struct ecore_raw_obj*) ;int (* clear_pending ) (struct ecore_raw_obj*) ;int (* set_pending ) (struct ecore_raw_obj*) ;} ;
struct ecore_rss_config_obj {int (* config_rss ) (struct bxe_softc*,struct ecore_config_rss_params*) ;struct ecore_raw_obj raw; } ;
struct ecore_config_rss_params {int ramrod_flags; struct ecore_rss_config_obj* rss_obj; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ecore_raw_obj*) ;
 int FUNC_3 (struct bxe_softc*,struct ecore_config_rss_params*) ;
 int FUNC_4 (struct ecore_raw_obj*) ;
 int FUNC_5 (struct bxe_softc*,struct ecore_raw_obj*) ;

int FUNC_6(struct bxe_softc *VAR_3,
       struct ecore_config_rss_params *VAR_4)
{
 int VAR_5;
 struct ecore_rss_config_obj *VAR_6 = VAR_4->rss_obj;
 struct ecore_raw_obj *VAR_7 = &VAR_6->raw;


 if (FUNC_1(VAR_2, &VAR_4->ramrod_flags)) {
  FUNC_0(VAR_3, "Not configuring RSS ramrod_flags=%lx\n",
     VAR_4->ramrod_flags);
  return VAR_0;
 }

 VAR_7->set_pending(VAR_7);

 VAR_5 = VAR_6->config_rss(VAR_3, VAR_4);
 if (VAR_5 < 0) {
  VAR_7->clear_pending(VAR_7);
  return VAR_5;
 }

 if (FUNC_1(VAR_1, &VAR_4->ramrod_flags))
  VAR_5 = VAR_7->wait_comp(VAR_3, VAR_7);

 return VAR_5;
}
