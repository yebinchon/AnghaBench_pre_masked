
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * saddr; } ;
struct TYPE_8__ {TYPE_1__ hp_hdr; } ;
struct TYPE_9__ {TYPE_2__ rmp; struct TYPE_9__* next; } ;
typedef TYPE_3__ RMPCONN ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int ) ;

RMPCONN *
FUNC_1(RMPCONN *VAR_2)
{
 RMPCONN *VAR_3;

 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if (FUNC_0((char *)&VAR_2->rmp.hp_hdr.saddr[0],
           (char *)&VAR_3->rmp.hp_hdr.saddr[0], VAR_0) == 0)
   break;

 return(VAR_3);
}
