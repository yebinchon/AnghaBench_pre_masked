
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct probe_finder {TYPE_2__* pev; int fname; int lcache; } ;
struct TYPE_3__ {int lazy_line; } ;
struct TYPE_4__ {TYPE_1__ point; } ;
typedef int Dwarf_Die ;


 int FUNC_0 (int *,int ,struct probe_finder*) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(Dwarf_Die *VAR_1, struct probe_finder *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_2(&VAR_2->lcache)) {

  VAR_3 = FUNC_1(&VAR_2->lcache, VAR_2->fname,
         VAR_2->pev->point.lazy_line);
  if (VAR_3 <= 0)
   return VAR_3;
 }

 return FUNC_0(VAR_1, VAR_0, VAR_2);
}
