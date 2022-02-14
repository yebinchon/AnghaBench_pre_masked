
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sltentry {int dummy; } sltentry ;
struct objfile {int dummy; } ;


 int * FUNC_0 (struct objfile*) ;

__attribute__((used)) static union sltentry *
FUNC_1 (int VAR_0, struct objfile *VAR_1)
{
  return (union sltentry *) &(FUNC_0 (VAR_1)[VAR_0 * sizeof (union sltentry)]);
}
