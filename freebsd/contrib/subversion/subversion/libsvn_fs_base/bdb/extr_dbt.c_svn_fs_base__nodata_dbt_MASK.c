
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ dlen; scalar_t__ doff; } ;
typedef TYPE_1__ DBT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

DBT *FUNC_1(DBT *VAR_2)
{
  FUNC_0(VAR_2);



  VAR_2->flags |= (VAR_1 | VAR_0);
  VAR_2->doff = VAR_2->dlen = 0;

  return VAR_2;
}
