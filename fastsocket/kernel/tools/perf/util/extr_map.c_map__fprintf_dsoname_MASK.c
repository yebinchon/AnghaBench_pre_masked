
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct map {TYPE_1__* dso; } ;
struct TYPE_4__ {scalar_t__ show_kernel_path; } ;
struct TYPE_3__ {char* name; char* long_name; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,char const*) ;
 TYPE_2__ VAR_0 ;

size_t FUNC_1(struct map *VAR_1, FILE *VAR_2)
{
 const char *VAR_3 = "[unknown]";

 if (VAR_1 && VAR_1->dso && (VAR_1->dso->name || VAR_1->dso->long_name)) {
  if (VAR_0.show_kernel_path && VAR_1->dso->long_name)
   VAR_3 = VAR_1->dso->long_name;
  else if (VAR_1->dso->name)
   VAR_3 = VAR_1->dso->name;
 }

 return FUNC_0(VAR_2, "%s", VAR_3);
}
