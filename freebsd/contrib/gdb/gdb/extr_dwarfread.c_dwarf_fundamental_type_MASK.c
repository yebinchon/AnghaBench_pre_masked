
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct objfile {int dummy; } ;
struct TYPE_2__ {struct type* (* la_fund_type ) (struct objfile*,int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int) ;
 struct type** VAR_2 ;
 struct type* FUNC_1 (struct objfile*,int) ;

__attribute__((used)) static struct type *
FUNC_2 (struct objfile *VAR_3, int VAR_4)
{
  if (VAR_4 < 0 || VAR_4 >= VAR_0)
    {
      FUNC_0 ("internal error - invalid fundamental type id %d", VAR_4);
    }





  if (VAR_2[VAR_4] == ((void*)0))
    {
      VAR_2[VAR_4] = VAR_1->la_fund_type (VAR_3, VAR_4);
    }

  return (VAR_2[VAR_4]);
}
