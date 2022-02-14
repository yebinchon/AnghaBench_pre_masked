
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct objfile {int dummy; } ;
struct TYPE_2__ {struct type* type; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int *,int) ;
 int * VAR_1 ;
 struct type* FUNC_1 (struct objfile*,int ) ;

__attribute__((used)) static struct type *
FUNC_2 (struct objfile *VAR_2, int VAR_3)
{
  if (VAR_1 != ((void*)0))
    return FUNC_0 (VAR_1, VAR_3).type;
  else
    return FUNC_1 (VAR_2, VAR_0);
}
