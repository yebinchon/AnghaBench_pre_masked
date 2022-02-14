
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sec_param {int macid; } ;
struct rtwn_softc {int (* sc_set_media_status ) (struct rtwn_softc*,int ) ;} ;


 int FUNC_0 (struct rtwn_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_0, union sec_param *VAR_1)
{
 VAR_0->sc_set_media_status(VAR_0, VAR_1->macid);
}
