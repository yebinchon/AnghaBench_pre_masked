
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hb_type; int hb_spinlock; int magic; } ;
typedef TYPE_1__ hashbin_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

hashbin_t *FUNC_2(int VAR_3)
{
 hashbin_t* VAR_4;




 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);




 VAR_4->hb_type = VAR_3;
 VAR_4->magic = VAR_2;



 if ( VAR_4->hb_type & VAR_1 ) {
  FUNC_1(&VAR_4->hb_spinlock);
 }

 return VAR_4;
}
