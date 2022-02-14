
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_softc {int sc_fi_zone; } ;
struct dtsec_rm_frame_info {int dummy; } ;


 int VAR_0 ;
 struct dtsec_rm_frame_info* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct dtsec_rm_frame_info *
FUNC_1(struct dtsec_softc *VAR_1)
{
 struct dtsec_rm_frame_info *VAR_2;

 VAR_2 = FUNC_0(VAR_1->sc_fi_zone, VAR_0);

 return (VAR_2);
}
