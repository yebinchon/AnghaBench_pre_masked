
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int type; } ;
typedef TYPE_2__ isc_entropysource_t ;
struct TYPE_12__ {int entropy; int pseudo; } ;
struct TYPE_14__ {int initialized; unsigned int nsources; int sources; TYPE_2__* nextsource; TYPE_1__ pool; } ;
typedef TYPE_3__ isc_entropy_t ;
typedef int isc_boolean_t ;


 int VAR_0 ;


 void* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 unsigned int FUNC_2 (unsigned int,int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_3__*) ;
 unsigned int FUNC_6 (TYPE_2__*,unsigned int,int ) ;
 unsigned int FUNC_7 (TYPE_2__*,unsigned int) ;
 unsigned int FUNC_8 (TYPE_2__*,unsigned int) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_10(isc_entropy_t *VAR_4, unsigned int VAR_5, isc_boolean_t VAR_6) {
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 isc_entropysource_t *VAR_11;

 FUNC_4(FUNC_5(VAR_4));

 VAR_9 = VAR_5;
 if (VAR_9 == 0) {
  FUNC_4(!VAR_6);

  if ((VAR_4->pool.entropy >= VAR_1 / 4)
      && (VAR_4->pool.pseudo <= VAR_1 / 4))
   return;

  VAR_9 = VAR_2 * 4;
 } else {
  VAR_9 = FUNC_2(VAR_9, VAR_2);
  VAR_9 = FUNC_3(VAR_9, VAR_1);
 }




 VAR_9 = FUNC_3(VAR_9, VAR_1 - VAR_4->pool.entropy);






 if (VAR_4->initialized < VAR_2)
  VAR_9 = FUNC_2(VAR_9, VAR_2 - VAR_4->initialized);
 VAR_7 = 0;
 VAR_8 = VAR_9;
 if (VAR_4->nextsource == ((void*)0)) {
  VAR_4->nextsource = FUNC_0(VAR_4->sources);
  if (VAR_4->nextsource == ((void*)0))
   return;
 }
 VAR_11 = VAR_4->nextsource;
 again_file:
 for (VAR_10 = 0; VAR_10 < VAR_4->nsources; VAR_10++) {
  unsigned int VAR_12;

  if (VAR_8 == 0)
   break;

  VAR_12 = 0;

  switch ( VAR_11->type ) {
  case 129:
   VAR_12 = FUNC_7(VAR_11, VAR_8);
   break;

  case 128:
   VAR_12 = FUNC_8(VAR_11, VAR_8);
   break;
  }

  VAR_7 += VAR_12;

  VAR_8 -= FUNC_3(VAR_8, VAR_12);

  VAR_11 = FUNC_1(VAR_11, VAR_3);
  if (VAR_11 == ((void*)0))
   VAR_11 = FUNC_0(VAR_4->sources);
 }
 VAR_4->nextsource = VAR_11;

 if (VAR_6 && VAR_8 != 0) {
  int VAR_13;

  VAR_13 = FUNC_9(VAR_4);
  if (VAR_13 > 0)
   goto again_file;
 }





 VAR_11 = FUNC_0(VAR_4->sources);
 while ((VAR_8 != 0) && (VAR_11 != ((void*)0))) {
  unsigned int VAR_14;

  VAR_14 = 0;

  if (VAR_11->type == VAR_0)
   VAR_14 = FUNC_6(VAR_11, VAR_8, VAR_6);

  VAR_7 += VAR_14;
  VAR_8 -= FUNC_3(VAR_8, VAR_14);

  if (VAR_7 >= VAR_9)
   break;

  VAR_11 = FUNC_1(VAR_11, VAR_3);
 }




 if (VAR_4->initialized < VAR_2)
  VAR_4->initialized += VAR_7;
}
