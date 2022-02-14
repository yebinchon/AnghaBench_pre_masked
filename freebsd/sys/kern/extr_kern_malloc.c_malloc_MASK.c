
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct malloc_type {int dummy; } ;
typedef void* caddr_t ;
struct TYPE_5__ {TYPE_1__** kz_zone; } ;
struct TYPE_4__ {size_t uz_size; } ;


 int FUNC_0 (int ,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int* VAR_7 ;
 TYPE_3__* VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_1 (void**,size_t*,struct malloc_type*,int) ;
 int FUNC_2 (struct malloc_type*,size_t) ;
 int FUNC_3 (struct malloc_type*,size_t,int) ;
 size_t FUNC_4 (struct malloc_type*) ;
 void* FUNC_5 (void*,unsigned long) ;
 size_t FUNC_6 (size_t,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_7 (size_t,int) ;
 void* FUNC_8 (TYPE_1__*,int) ;

void *
(FUNC_9)(size_t VAR_12, struct malloc_type *VAR_13, int VAR_14)
{
 int VAR_15;
 caddr_t VAR_16;
 uma_zone_t VAR_17;
 if (VAR_12 <= VAR_6 && (VAR_14 & VAR_3) == 0) {
  if (VAR_12 & VAR_1)
   VAR_12 = (VAR_12 & ~VAR_1) + VAR_0;
  VAR_15 = VAR_7[VAR_12 >> VAR_2];
  VAR_17 = VAR_8[VAR_15].kz_zone[FUNC_4(VAR_13)];



  VAR_16 = FUNC_8(VAR_17, VAR_14);
  if (VAR_16 != ((void*)0))
   VAR_12 = VAR_17->uz_size;
  FUNC_3(VAR_13, VAR_16 == ((void*)0) ? 0 : VAR_12, VAR_15);
 } else {
  VAR_12 = FUNC_6(VAR_12, VAR_5);
  VAR_17 = ((void*)0);
  VAR_16 = FUNC_7(VAR_12, VAR_14);
  FUNC_2(VAR_13, VAR_16 == ((void*)0) ? 0 : VAR_12);
 }
 if (VAR_14 & VAR_4)
  FUNC_0(VAR_16 != ((void*)0), ("malloc(M_WAITOK) returned NULL"));
 else if (VAR_16 == ((void*)0))
  VAR_10 = VAR_11;




 return ((void *) VAR_16);
}
