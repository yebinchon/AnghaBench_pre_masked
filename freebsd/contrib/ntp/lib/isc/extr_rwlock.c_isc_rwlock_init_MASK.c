
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int magic; scalar_t__ active; int type; } ;
typedef TYPE_1__ isc_rwlock_t ;
typedef int isc_result_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;

isc_result_t
FUNC_2(isc_rwlock_t *VAR_3, unsigned int VAR_4,
  unsigned int VAR_5)
{
 FUNC_0(VAR_3 != ((void*)0));

 FUNC_1(VAR_4);
 FUNC_1(VAR_5);

 VAR_3->type = VAR_2;
 VAR_3->active = 0;
 VAR_3->magic = VAR_1;

 return (VAR_0);
}
