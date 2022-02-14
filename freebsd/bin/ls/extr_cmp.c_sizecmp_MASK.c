
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fts_name; TYPE_1__* fts_statp; } ;
struct TYPE_5__ {scalar_t__ st_size; } ;
typedef TYPE_2__ FTSENT ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1(const FTSENT *VAR_0, const FTSENT *VAR_1)
{

 if (VAR_1->fts_statp->st_size > VAR_0->fts_statp->st_size)
  return (1);
 if (VAR_1->fts_statp->st_size < VAR_0->fts_statp->st_size)
  return (-1);
 return (FUNC_0(VAR_0->fts_name, VAR_1->fts_name));
}
