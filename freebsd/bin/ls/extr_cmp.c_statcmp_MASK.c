
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int fts_name; TYPE_2__* fts_statp; } ;
struct TYPE_6__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_7__ {TYPE_1__ st_ctim; } ;
typedef TYPE_3__ FTSENT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

int
FUNC_1(const FTSENT *VAR_1, const FTSENT *VAR_2)
{

 if (VAR_2->fts_statp->st_ctim.tv_sec >
     VAR_1->fts_statp->st_ctim.tv_sec)
  return (1);
 if (VAR_2->fts_statp->st_ctim.tv_sec <
     VAR_1->fts_statp->st_ctim.tv_sec)
  return (-1);
 if (VAR_2->fts_statp->st_ctim.tv_nsec >
     VAR_1->fts_statp->st_ctim.tv_nsec)
  return (1);
 if (VAR_2->fts_statp->st_ctim.tv_nsec <
     VAR_1->fts_statp->st_ctim.tv_nsec)
  return (-1);
 if (VAR_0)
  return (FUNC_0(VAR_2->fts_name, VAR_1->fts_name));
 else
  return (FUNC_0(VAR_1->fts_name, VAR_2->fts_name));
}
