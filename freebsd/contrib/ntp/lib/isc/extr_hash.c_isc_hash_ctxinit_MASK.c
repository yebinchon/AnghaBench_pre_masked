
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pr ;
typedef int isc_uint32_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_3__ {scalar_t__ initialized; unsigned int vectorlen; int lock; scalar_t__ rndvector; scalar_t__ entropy; } ;
typedef TYPE_1__ isc_hash_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,unsigned int,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned char*,int *,unsigned int) ;

void
FUNC_6(isc_hash_t *VAR_2) {
 FUNC_1(&VAR_2->lock);

 if (VAR_2->initialized == VAR_1)
  goto out;

 if (VAR_2->entropy) {
  FUNC_0(0);

 } else {
  isc_uint32_t VAR_3;
  unsigned int VAR_4, VAR_5;
  unsigned char *VAR_6;

  VAR_6 = (unsigned char *)VAR_2->rndvector;
  for (VAR_4 = 0; VAR_4 < VAR_2->vectorlen; VAR_4 += VAR_5, VAR_6 += VAR_5) {
   FUNC_4(&VAR_3);
   if (VAR_4 + sizeof(VAR_3) <= VAR_2->vectorlen)
    VAR_5 = sizeof(VAR_3);
   else
    VAR_5 = VAR_2->vectorlen - VAR_4;

   FUNC_5(VAR_6, &VAR_3, VAR_5);
  }
  FUNC_0(VAR_6 == (unsigned char *)VAR_2->rndvector +
         VAR_2->vectorlen);
 }

 VAR_2->initialized = VAR_1;

 out:
 FUNC_2(&VAR_2->lock);
}
