
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * partition_record; int signature; } ;
typedef TYPE_1__ legacy_mbr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(legacy_mbr *VAR_1)
{
 int VAR_2;
 if (!VAR_1 || FUNC_0(VAR_1->signature) != VAR_0)
                return 0;
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
  if (FUNC_1(&VAR_1->partition_record[VAR_2]))
                        return 1;
 return 0;
}
