
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coff_sfile {TYPE_1__* section; } ;
struct coff_section {size_t number; } ;
struct TYPE_2__ {int low; } ;



__attribute__((used)) static int
FUNC_0 (struct coff_sfile *VAR_0, struct coff_section *VAR_1)
{
  return VAR_0->section[VAR_1->number].low;
}
