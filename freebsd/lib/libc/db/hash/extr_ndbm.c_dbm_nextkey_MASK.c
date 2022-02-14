
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dsize; int * dptr; } ;
typedef TYPE_1__ datum ;
struct TYPE_11__ {int (* seq ) (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ) ;} ;
struct TYPE_10__ {int size; int * data; } ;
typedef TYPE_2__ DBT ;
typedef TYPE_3__ DBM ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ) ;

extern datum
FUNC_1(DBM *VAR_1)
{
 int VAR_2;
 datum VAR_3;
 DBT VAR_4, VAR_5;

 VAR_2 = (VAR_1->seq)(VAR_1, &VAR_4, &VAR_5, VAR_0);
 if (VAR_2)
  VAR_4.data = ((void*)0);
 VAR_3.dptr = VAR_4.data;
 VAR_3.dsize = VAR_4.size;
 return (VAR_3);
}
