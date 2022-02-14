
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int build_id; int has_build_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,char*,char*,char*) ;
 int FUNC_1 (int ,int,char*) ;
 char* VAR_1 ;
 int FUNC_2 (char*,size_t,char*,char*,char*,char*) ;

char *FUNC_3(struct dso *VAR_2, char *VAR_3, size_t VAR_4)
{
 char VAR_5[VAR_0 * 2 + 1];

 if (!VAR_2->has_build_id)
  return ((void*)0);

 FUNC_1(VAR_2->build_id, sizeof(VAR_2->build_id), VAR_5);
 if (VAR_3 == ((void*)0)) {
  if (FUNC_0(&VAR_3, "%s/.build-id/%.2s/%s", VAR_1,
        VAR_5, VAR_5 + 2) < 0)
   return ((void*)0);
 } else
  FUNC_2(VAR_3, VAR_4, "%s/.build-id/%.2s/%s", VAR_1,
    VAR_5, VAR_5 + 2);
 return VAR_3;
}
