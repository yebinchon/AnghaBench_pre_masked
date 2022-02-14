
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct map {int dummy; } ;
struct machine {int kmaps; int kernel_dsos; } ;
struct dso {int symtab_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dso* FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (struct machine*) ;
 struct map* FUNC_2 (int ,struct dso*,int ) ;
 int FUNC_3 (int *,struct map*) ;

struct map *FUNC_4(struct machine *VAR_3, u64 VAR_4,
    const char *VAR_5)
{
 struct map *VAR_6;
 struct dso *VAR_7 = FUNC_0(&VAR_3->kernel_dsos, VAR_5);

 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_4, VAR_7, VAR_2);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (FUNC_1(VAR_3))
  VAR_7->symtab_type = VAR_1;
 else
  VAR_7->symtab_type = VAR_0;
 FUNC_3(&VAR_3->kmaps, VAR_6);
 return VAR_6;
}
