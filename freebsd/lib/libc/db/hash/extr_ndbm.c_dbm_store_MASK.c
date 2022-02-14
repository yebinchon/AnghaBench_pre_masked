
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int dsize; int dptr; } ;
typedef TYPE_1__ datum ;
struct TYPE_12__ {int (* put ) (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ) ;} ;
struct TYPE_11__ {int size; int data; } ;
typedef TYPE_2__ DBT ;
typedef TYPE_3__ DBM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ) ;

extern int
FUNC_1(DBM *VAR_2, datum VAR_3, datum VAR_4, int VAR_5)
{
 DBT VAR_6, VAR_7;

 VAR_6.data = VAR_3.dptr;
 VAR_6.size = VAR_3.dsize;
 VAR_7.data = VAR_4.dptr;
 VAR_7.size = VAR_4.dsize;
 return ((VAR_2->put)(VAR_2, &VAR_6, &VAR_7,
     (VAR_5 == VAR_0) ? VAR_1 : 0));
}
