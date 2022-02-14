
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* filename; } ;
typedef TYPE_1__ Identity ;


 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(Identity *VAR_0, Identity *VAR_1)
{
 const char *VAR_2[] = { ".pub", "-cert.pub", ((void*)0) };
 size_t VAR_3 = FUNC_2(VAR_0->filename), VAR_4 = FUNC_2(VAR_1->filename);
 size_t VAR_5, VAR_6;

 if (FUNC_1(VAR_0->filename, VAR_1->filename) == 0)
  return 1;
 for (VAR_5 = 0; VAR_2[VAR_5]; VAR_5++) {
  VAR_6 = FUNC_2(VAR_2[VAR_5]);
  if (VAR_3 > VAR_6 && VAR_4 == VAR_3 - VAR_6 &&
      FUNC_1(VAR_0->filename + (VAR_3 - VAR_6), VAR_2[VAR_5]) == 0 &&
      FUNC_0(VAR_0->filename, VAR_1->filename, VAR_4) == 0)
   return 1;
 }
 return 0;
}
