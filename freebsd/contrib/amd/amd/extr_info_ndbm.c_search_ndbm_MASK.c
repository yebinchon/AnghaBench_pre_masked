
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* cfm; } ;
typedef TYPE_2__ mnt_map ;
struct TYPE_9__ {char* dptr; scalar_t__ dsize; } ;
typedef TYPE_3__ datum ;
struct TYPE_7__ {int cfm_flags; } ;
typedef int DBM ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ FUNC_0 (int *,TYPE_3__) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(mnt_map *VAR_2, DBM *VAR_3, char *VAR_4, char **VAR_5)
{
  datum VAR_6, VAR_7;

  VAR_6.dptr = VAR_4;
  VAR_6.dsize = FUNC_1(VAR_4) + 1;
  VAR_7 = FUNC_0(VAR_3, VAR_6);
  if (VAR_7.dptr) {
    if (VAR_2->cfm && (VAR_2->cfm->cfm_flags & VAR_0))
      *VAR_5 = FUNC_2(VAR_4, VAR_7.dptr);
    else
      *VAR_5 = FUNC_3(VAR_7.dptr);
    return 0;
  }
  return VAR_1;
}
