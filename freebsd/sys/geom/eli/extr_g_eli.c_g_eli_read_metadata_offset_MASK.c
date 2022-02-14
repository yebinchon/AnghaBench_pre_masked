
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct g_provider {int sectorsize; } ;
struct g_geom {void* spoiled; void* orphan; int access; int start; } ;
struct g_eli_metadata {int dummy; } ;
struct g_consumer {int acr; int * provider; } ;
struct g_class {int dummy; } ;
typedef int off_t ;


 int FUNC_0 (int *,struct g_eli_metadata*) ;
 int FUNC_1 (struct g_consumer*,int,int ,int ) ;
 int FUNC_2 (struct g_consumer*,struct g_provider*) ;
 int FUNC_3 (struct g_consumer*) ;
 int FUNC_4 (struct g_geom*) ;
 int FUNC_5 (struct g_consumer*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 struct g_consumer* FUNC_7 (struct g_geom*) ;
 struct g_geom* FUNC_8 (struct g_class*,char*) ;
 int * FUNC_9 (struct g_consumer*,int ,int ,int*) ;
 int VAR_2 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(struct g_class *VAR_3, struct g_provider *VAR_4,
    off_t VAR_5, struct g_eli_metadata *VAR_6)
{
 struct g_geom *VAR_7;
 struct g_consumer *VAR_8;
 u_char *VAR_9 = ((void*)0);
 int VAR_10;

 FUNC_10();

 VAR_7 = FUNC_8(VAR_3, "eli:taste");
 VAR_7->start = VAR_1;
 VAR_7->access = VAR_2;





 VAR_7->orphan = VAR_0;
 VAR_7->spoiled = VAR_0;
 VAR_8 = FUNC_7(VAR_7);
 VAR_10 = FUNC_2(VAR_8, VAR_4);
 if (VAR_10 != 0)
  goto end;
 VAR_10 = FUNC_1(VAR_8, 1, 0, 0);
 if (VAR_10 != 0)
  goto end;
 FUNC_12();
 VAR_9 = FUNC_9(VAR_8, VAR_5, VAR_4->sectorsize, &VAR_10);
 FUNC_11();
 if (VAR_9 == ((void*)0))
  goto end;
 VAR_10 = FUNC_0(VAR_9, VAR_6);
 if (VAR_10 != 0)
  goto end;

end:
 if (VAR_9 != ((void*)0))
  FUNC_6(VAR_9);
 if (VAR_8->provider != ((void*)0)) {
  if (VAR_8->acr == 1)
   FUNC_1(VAR_8, -1, 0, 0);
  FUNC_5(VAR_8);
 }
 FUNC_3(VAR_8);
 FUNC_4(VAR_7);
 return (VAR_10);
}
