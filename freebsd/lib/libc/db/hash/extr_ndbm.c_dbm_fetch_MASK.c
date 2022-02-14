
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ dsize; int * dptr; } ;
typedef TYPE_1__ datum ;
struct TYPE_12__ {int (* get ) (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ) ;} ;
struct TYPE_11__ {scalar_t__ size; int * data; } ;
typedef TYPE_2__ DBT ;
typedef TYPE_3__ DBM ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ) ;

extern datum
FUNC_1(DBM *VAR_0, datum VAR_1)
{
 datum VAR_2;
 int VAR_3;
 DBT VAR_4, VAR_5;

 VAR_4.data = VAR_1.dptr;
 VAR_4.size = VAR_1.dsize;
 VAR_3 = (VAR_0->get)(VAR_0, &VAR_4, &VAR_5, 0);
 if (VAR_3) {
  VAR_5.data = ((void*)0);
  VAR_5.size = 0;
 }
 VAR_2.dptr = VAR_5.data;
 VAR_2.dsize = VAR_5.size;
 return (VAR_2);
}
