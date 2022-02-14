
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; } ;
typedef TYPE_2__ isc_entropysource_t ;
struct TYPE_10__ {int entropy; int pseudo; } ;
struct TYPE_12__ {int initialized; unsigned int nsources; int sources; TYPE_2__* nextsource; TYPE_1__ pool; } ;
typedef TYPE_3__ isc_entropy_t ;
typedef int isc_boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 unsigned int FUNC_2 (unsigned int,int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*) ;
 unsigned int FUNC_6 (TYPE_2__*,unsigned int,int ) ;
 unsigned int FUNC_7 (TYPE_2__*,unsigned int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_8(isc_entropy_t *VAR_5, unsigned int VAR_6, isc_boolean_t VAR_7) {
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;
 isc_entropysource_t *VAR_12;
 isc_entropysource_t *VAR_13;

 FUNC_4(FUNC_5(VAR_5));

 VAR_10 = VAR_6;
 if (VAR_10 == 0) {
  FUNC_4(!VAR_7);

  if ((VAR_5->pool.entropy >= VAR_2 / 4)
      && (VAR_5->pool.pseudo <= VAR_2 / 4))
   return;

  VAR_10 = VAR_3 * 4;
 } else {
  VAR_10 = FUNC_2(VAR_10, VAR_3);
  VAR_10 = FUNC_3(VAR_10, VAR_2);
 }




 VAR_10 = FUNC_3(VAR_10, VAR_2 - VAR_5->pool.entropy);






 if (VAR_5->initialized < VAR_3)
  VAR_10 = FUNC_2(VAR_10, VAR_3 - VAR_5->initialized);
 VAR_8 = 0;
 VAR_9 = VAR_10;
 if (VAR_5->nextsource == ((void*)0)) {
  VAR_5->nextsource = FUNC_0(VAR_5->sources);
  if (VAR_5->nextsource == ((void*)0))
   return;
 }
 VAR_12 = VAR_5->nextsource;




 VAR_13 = VAR_12;
 again_file:
 for (VAR_11 = 0; VAR_11 < VAR_5->nsources; VAR_11++) {
  unsigned int VAR_14;

  if (VAR_9 == 0)
   break;

  VAR_14 = 0;

  if (VAR_12->type == VAR_1)
   VAR_14 = FUNC_7(VAR_12, VAR_9);

  VAR_8 += VAR_14;

  VAR_9 -= FUNC_3(VAR_9, VAR_14);

  VAR_12 = FUNC_1(VAR_12, VAR_4);
  if (VAR_12 == ((void*)0))
   VAR_12 = FUNC_0(VAR_5->sources);
 }
 VAR_5->nextsource = VAR_12;





 if (!(VAR_5->nextsource == VAR_13 && VAR_8 == 0)) {
  if (VAR_7 && VAR_9 != 0) {
    goto again_file;
  }
 }





 VAR_12 = FUNC_0(VAR_5->sources);
 while ((VAR_9 != 0) && (VAR_12 != ((void*)0))) {
  unsigned int VAR_15;

  VAR_15 = 0;

  if (VAR_12->type == VAR_0)
   VAR_15 = FUNC_6(VAR_12, VAR_9, VAR_7);

  VAR_8 += VAR_15;
  VAR_9 -= FUNC_3(VAR_9, VAR_15);

  if (VAR_8 >= VAR_10)
   break;

  VAR_12 = FUNC_1(VAR_12, VAR_4);
 }




 if (VAR_5->initialized < VAR_3)
  VAR_5->initialized += VAR_8;
}
