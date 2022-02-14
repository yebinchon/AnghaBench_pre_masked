
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union overhead {scalar_t__ ov_magic; int ov_index; union overhead* ov_next; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 union overhead** VAR_1 ;

void
FUNC_0(void *VAR_2)
{
 int VAR_3;
 union overhead *VAR_4;

   if (VAR_2 == ((void*)0))
    return;
 VAR_4 = (union overhead *)((caddr_t)VAR_2 - sizeof (union overhead));
 if (VAR_4->ov_magic != VAR_0)
  return;
   VAR_3 = VAR_4->ov_index;
 VAR_4->ov_next = VAR_1[VAR_3];
   VAR_1[VAR_3] = VAR_4;
}
