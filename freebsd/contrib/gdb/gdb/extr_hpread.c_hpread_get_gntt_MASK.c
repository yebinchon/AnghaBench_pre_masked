
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dnttentry {int dummy; } dnttentry ;
struct objfile {int dummy; } ;
struct dntt_type_block {int dummy; } ;


 int * FUNC_0 (struct objfile*) ;

__attribute__((used)) static union dnttentry *
FUNC_1 (int VAR_0, struct objfile *VAR_1)
{
  return (union dnttentry *)
    &(FUNC_0 (VAR_1)[(VAR_0 * sizeof (struct dntt_type_block))]);
}
