
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {TYPE_1__** vmlinux_maps; } ;
struct dso {int has_build_id; } ;
typedef int filename ;
struct TYPE_2__ {struct dso* dso; } ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dso*,char*,int) ;
 scalar_t__ FUNC_1 (int *,char*,...) ;
 char** VAR_2 ;
 int VAR_3 ;

size_t FUNC_2(struct machine *VAR_4, FILE *VAR_5)
{
 int VAR_6;
 size_t VAR_7 = 0;
 struct dso *VAR_8 = VAR_4->vmlinux_maps[VAR_0]->dso;

 if (VAR_8->has_build_id) {
  char VAR_9[VAR_1];
  if (FUNC_0(VAR_8, VAR_9, sizeof(VAR_9)))
   VAR_7 += FUNC_1(VAR_5, "[0] %s\n", VAR_9);
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6)
  VAR_7 += FUNC_1(VAR_5, "[%d] %s\n",
       VAR_6 + VAR_8->has_build_id, VAR_2[VAR_6]);

 return VAR_7;
}
