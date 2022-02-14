
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dsize; int dptr; } ;
typedef TYPE_1__ datum ;
struct TYPE_10__ {int (* del ) (TYPE_3__*,TYPE_2__*,int ) ;} ;
struct TYPE_9__ {int size; int data; } ;
typedef TYPE_2__ DBT ;
typedef TYPE_3__ DBM ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ) ;

extern int
FUNC_1(DBM *VAR_0, datum VAR_1)
{
 int VAR_2;
 DBT VAR_3;

 VAR_3.data = VAR_1.dptr;
 VAR_3.size = VAR_1.dsize;
 VAR_2 = (VAR_0->del)(VAR_0, &VAR_3, 0);
 if (VAR_2)
  return (-1);
 else
  return (0);
}
