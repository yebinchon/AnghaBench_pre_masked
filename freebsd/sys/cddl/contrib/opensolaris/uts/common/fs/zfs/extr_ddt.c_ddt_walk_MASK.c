
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ** spa_ddt; } ;
typedef TYPE_1__ spa_t ;
typedef int ddt_t ;
struct TYPE_9__ {scalar_t__ dde_type; scalar_t__ dde_class; } ;
typedef TYPE_2__ ddt_entry_t ;
struct TYPE_10__ {scalar_t__ ddb_class; scalar_t__ ddb_type; scalar_t__ ddb_checksum; int ddb_cursor; } ;
typedef TYPE_3__ ddt_bookmark_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int *,TYPE_2__*) ;

int
FUNC_3(spa_t *VAR_4, ddt_bookmark_t *VAR_5, ddt_entry_t *VAR_6)
{
 do {
  do {
   do {
    ddt_t *VAR_7 = VAR_4->spa_ddt[VAR_5->ddb_checksum];
    int VAR_8 = VAR_2;
    if (FUNC_1(VAR_7, VAR_5->ddb_type,
        VAR_5->ddb_class)) {
     VAR_8 = FUNC_2(VAR_7,
         VAR_5->ddb_type, VAR_5->ddb_class,
         &VAR_5->ddb_cursor, VAR_6);
    }
    VAR_6->dde_type = VAR_5->ddb_type;
    VAR_6->dde_class = VAR_5->ddb_class;
    if (VAR_8 == 0)
     return (0);
    if (VAR_8 != VAR_2)
     return (VAR_8);
    VAR_5->ddb_cursor = 0;
   } while (++VAR_5->ddb_checksum < VAR_3);
   VAR_5->ddb_checksum = 0;
  } while (++VAR_5->ddb_type < VAR_1);
  VAR_5->ddb_type = 0;
 } while (++VAR_5->ddb_class < VAR_0);

 return (FUNC_0(VAR_2));
}
