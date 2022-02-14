
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int * addr; struct TYPE_11__* next; } ;
struct TYPE_8__ {int * saddr; } ;
struct TYPE_9__ {TYPE_1__ hp_hdr; } ;
struct TYPE_10__ {TYPE_2__ rmp; } ;
typedef TYPE_3__ RMPCONN ;
typedef TYPE_4__ CLIENT ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int ) ;

CLIENT *
FUNC_1(RMPCONN *VAR_2)
{
 CLIENT *VAR_3;

 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if (FUNC_0((char *)&VAR_2->rmp.hp_hdr.saddr[0],
           (char *)&VAR_3->addr[0], VAR_1) == 0)
   break;

 return(VAR_3);
}
