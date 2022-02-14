
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol_filter_t ;
struct map {int dummy; } ;
struct dso {int dummy; } ;


 char* FUNC_0 (struct dso*,int *,int ) ;
 int FUNC_1 (struct dso*,struct map*,char*,int ) ;
 int FUNC_2 (struct dso*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 char** VAR_0 ;
 int VAR_1 ;

int FUNC_6(struct dso *VAR_2, struct map *VAR_3,
      symbol_filter_t VAR_4)
{
 int VAR_5, VAR_6 = 0;
 char *VAR_7;

 FUNC_4("Looking at the vmlinux_path (%d entries long)\n",
   VAR_1 + 1);

 VAR_7 = FUNC_0(VAR_2, ((void*)0), 0);
 if (VAR_7 != ((void*)0)) {
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_7, VAR_4);
  if (VAR_6 > 0)
   goto out;
  FUNC_3(VAR_7);
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_0[VAR_5], VAR_4);
  if (VAR_6 > 0) {
   FUNC_2(VAR_2, FUNC_5(VAR_0[VAR_5]));
   break;
  }
 }
out:
 return VAR_6;
}
