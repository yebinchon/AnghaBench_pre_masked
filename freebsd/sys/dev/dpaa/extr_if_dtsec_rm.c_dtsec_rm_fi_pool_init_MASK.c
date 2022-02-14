
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_softc {int * sc_fi_zone; int sc_fi_zname; int sc_dev; } ;
struct dtsec_rm_frame_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int * FUNC_2 (int ,int,int *,int *,int *,int *,int ,int ) ;

int
FUNC_3(struct dtsec_softc *VAR_2)
{

 FUNC_1(VAR_2->sc_fi_zname, sizeof(VAR_2->sc_fi_zname), "%s: Frame Info",
     FUNC_0(VAR_2->sc_dev));

 VAR_2->sc_fi_zone = FUNC_2(VAR_2->sc_fi_zname,
     sizeof(struct dtsec_rm_frame_info), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_1, 0);
 if (VAR_2->sc_fi_zone == ((void*)0))
  return (VAR_0);

 return (0);
}
