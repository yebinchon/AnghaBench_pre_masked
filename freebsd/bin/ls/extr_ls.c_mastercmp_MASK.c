
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fts_info; scalar_t__ fts_level; } ;
typedef TYPE_1__ FTSENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__ const* const,TYPE_1__ const* const) ;
 int FUNC_1 (TYPE_1__ const* const,TYPE_1__ const* const) ;

__attribute__((used)) static int
FUNC_2(const FTSENT * const *VAR_5, const FTSENT * const *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = (*VAR_5)->fts_info;
 if (VAR_7 == VAR_1)
  return (0);
 VAR_8 = (*VAR_6)->fts_info;
 if (VAR_8 == VAR_1)
  return (0);

 if (VAR_7 == VAR_2 || VAR_8 == VAR_2)
  return (FUNC_0(*VAR_5, *VAR_6));

 if (VAR_7 != VAR_8 &&
     (*VAR_5)->fts_level == VAR_3 && !VAR_4) {
  if (VAR_7 == VAR_0)
   return (1);
  if (VAR_8 == VAR_0)
   return (-1);
 }
 return (FUNC_1(*VAR_5, *VAR_6));
}
