
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rm_so; } ;
typedef TYPE_1__ regmatch_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,char*,char const*) ;

char *FUNC_2 (regmatch_t * VAR_0, char *VAR_1, const char *VAR_2)
{
 if (VAR_0 == ((void*)0) || VAR_0->rm_so < 0) {
  if (VAR_1)
   VAR_1[0] = '\0';
  return VAR_1;
 }

 FUNC_1 (VAR_1, FUNC_0(VAR_0), "%s", VAR_2 + VAR_0->rm_so);
    return VAR_1;
}
