
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* fts_compar ) (void const*,void const*) ;} ;
struct TYPE_3__ {TYPE_2__* fts_fts; } ;
typedef TYPE_1__ FTSENT ;
typedef TYPE_2__ FTS ;


 int FUNC_0 (void const*,void const*) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 FTS *VAR_2;

 VAR_2 = (*(const FTSENT * const *)VAR_0)->fts_fts;
 return (*VAR_2->fts_compar)(VAR_0, VAR_1);
}
