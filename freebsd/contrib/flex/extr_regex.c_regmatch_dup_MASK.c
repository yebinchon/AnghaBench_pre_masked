
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,int) ;

char *FUNC_4 (regmatch_t * VAR_0, const char *VAR_1)
{
 char *VAR_2;
 int VAR_3;

 if (VAR_0 == ((void*)0) || VAR_0->rm_so < 0)
  return ((void*)0);
 VAR_3 = VAR_0->rm_eo - VAR_0->rm_so;
 VAR_2 = (char *) FUNC_1 ((VAR_3 + 1) * sizeof (char));
 if (!VAR_2)
  FUNC_2(FUNC_0("Unable to allocate a copy of the match"));
 FUNC_3 (VAR_2, VAR_1 + VAR_0->rm_so, VAR_3);
 VAR_2[VAR_3] = 0;
 return VAR_2;
}
