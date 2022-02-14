
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; } ;
struct g_geom {struct ccd_s* softc; int name; int provider; } ;
struct g_class {int dummy; } ;
struct ccd_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct g_provider* FUNC_0 (int *) ;
 int FUNC_1 (struct ccd_s*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct g_geom*,int ) ;
 int FUNC_4 (struct gctl_req*,char*,int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct gctl_req *VAR_2, struct g_class *VAR_3, struct g_geom *VAR_4)
{
 struct g_provider *VAR_5;
 struct ccd_s *VAR_6;

 FUNC_2();
 VAR_6 = VAR_4->softc;
 VAR_5 = FUNC_0(&VAR_4->provider);
 if (VAR_6 == ((void*)0) || VAR_5 == ((void*)0))
  return (VAR_0);
 if (VAR_5->acr != 0 || VAR_5->acw != 0 || VAR_5->ace != 0) {
  FUNC_4(VAR_2, "%s is open(r%dw%de%d)", VAR_4->name,
      VAR_5->acr, VAR_5->acw, VAR_5->ace);
  return (VAR_0);
 }
 FUNC_1(VAR_6);
 VAR_4->softc = ((void*)0);
 FUNC_3(VAR_4, VAR_1);
 return (0);
}
