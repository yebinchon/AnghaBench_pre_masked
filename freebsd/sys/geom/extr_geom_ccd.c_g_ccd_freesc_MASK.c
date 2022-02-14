
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccdiinfo {scalar_t__ ii_ndisk; struct ccdiinfo* sc_itable; struct ccdiinfo* ii_index; struct ccdiinfo* sc_cinfo; } ;
struct ccd_s {scalar_t__ ii_ndisk; struct ccd_s* sc_itable; struct ccd_s* ii_index; struct ccd_s* sc_cinfo; } ;


 int FUNC_0 (struct ccdiinfo*) ;

__attribute__((used)) static void
FUNC_1(struct ccd_s *VAR_0)
{
 struct ccdiinfo *VAR_1;

 FUNC_0(VAR_0->sc_cinfo);
 if (VAR_0->sc_itable != ((void*)0)) {
  for (VAR_1 = VAR_0->sc_itable; VAR_1->ii_ndisk > 0; VAR_1++)
   if (VAR_1->ii_index != ((void*)0))
    FUNC_0(VAR_1->ii_index);
  FUNC_0(VAR_0->sc_itable);
 }
 FUNC_0(VAR_0);
}
