
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* put ) (TYPE_1__*,int *,int *,int ) ;int (* close ) (TYPE_1__*) ;} ;
typedef int DBT ;
typedef TYPE_1__ DB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(DB *VAR_4, DBT *VAR_5, DBT *VAR_6, int VAR_7)
{
 int VAR_8;

 if ((VAR_8 = (VAR_4->put)(VAR_4,VAR_5,VAR_6, VAR_7 ? 0 :
       VAR_0))) {
  switch (VAR_8) {
  case 1:
   return(VAR_2);
   break;
  case -1:
  default:
   (void)(VAR_4->close)(VAR_4);
   return(VAR_1);
   break;
  }
 }

 return(VAR_3);
}
