
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nlist {int dummy; } ;
struct TYPE_3__ {int (* fn ) (int,struct nlist*) ;} ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int,struct nlist*) ;

int
FUNC_2(int VAR_1, struct nlist *VAR_2)
{
 int VAR_3 = -1;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_3 = (VAR_0[VAR_4].fn)(VAR_1, VAR_2);
  if (VAR_3 != -1)
   break;
 }
 return (VAR_3);
}
