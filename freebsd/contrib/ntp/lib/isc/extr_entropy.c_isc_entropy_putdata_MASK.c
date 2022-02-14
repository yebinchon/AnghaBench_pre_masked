
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_5__ {scalar_t__ initialized; int lock; } ;
typedef TYPE_1__ isc_entropy_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,void*,unsigned int,int ) ;

void
FUNC_5(isc_entropy_t *VAR_1, void *VAR_2, unsigned int VAR_3,
      isc_uint32_t VAR_4)
{
 FUNC_1(FUNC_3(VAR_1));

 FUNC_0(&VAR_1->lock);

 FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_1->initialized < VAR_0)
  VAR_1->initialized = VAR_0;

 FUNC_2(&VAR_1->lock);
}
