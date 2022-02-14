
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char recno_t ;
typedef int lno ;
struct TYPE_11__ {int (* get ) (TYPE_4__*,TYPE_3__*,TYPE_3__*,int ) ;} ;
struct TYPE_10__ {char* data; int size; } ;
struct TYPE_9__ {TYPE_4__* db; } ;
struct TYPE_8__ {TYPE_2__* ep; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ EXF ;
typedef TYPE_3__ DBT ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int ) ;

int
FUNC_1(
 SCR *VAR_0,
 recno_t VAR_1,
 char **VAR_2,
 size_t *VAR_3)
{
 DBT VAR_4, VAR_5;
 EXF *VAR_6 = VAR_0->ep;
 int VAR_7;


 VAR_5.data = &VAR_1;
 VAR_5.size = sizeof(VAR_1);
 if ((VAR_7 = VAR_6->db->get(VAR_6->db, &VAR_5, &VAR_4, 0)) == 0)
 {
  *VAR_3 = VAR_4.size;
  *VAR_2 = VAR_4.data;
 }

 return (VAR_7);
}
