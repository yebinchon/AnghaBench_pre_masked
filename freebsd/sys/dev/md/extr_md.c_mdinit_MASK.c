
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_s {int type; int sectorsize; int unit; int devstat; struct g_provider* pp; struct g_geom* gp; int mediasize; } ;
struct g_provider {int flags; int sectorsize; int mediasize; } ;
struct g_geom {struct md_s* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct g_provider*,int ) ;
 int VAR_6 ;
 struct g_geom* FUNC_2 (int *,char*,int ) ;
 struct g_provider* FUNC_3 (struct g_geom*,char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(struct md_s *VAR_7)
{
 struct g_geom *VAR_8;
 struct g_provider *VAR_9;

 FUNC_4();
 VAR_8 = FUNC_2(&VAR_6, "md%d", VAR_7->unit);
 VAR_8->softc = VAR_7;
 VAR_9 = FUNC_3(VAR_8, "md%d", VAR_7->unit);
 VAR_9->flags |= VAR_5 | VAR_4;
 VAR_9->mediasize = VAR_7->mediasize;
 VAR_9->sectorsize = VAR_7->sectorsize;
 switch (VAR_7->type) {
 case 132:
 case 128:
 case 129:
  VAR_9->flags |= VAR_3;
  break;
 case 130:
 case 131:
  break;
 }
 VAR_7->gp = VAR_8;
 VAR_7->pp = VAR_9;
 FUNC_1(VAR_9, 0);
 FUNC_5();
 VAR_7->devstat = FUNC_0("md", VAR_7->unit, VAR_7->sectorsize,
     VAR_0, VAR_2, VAR_1);
}
