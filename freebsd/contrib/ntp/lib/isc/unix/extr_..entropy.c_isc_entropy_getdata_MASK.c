
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned char isc_uint8_t ;
typedef int isc_uint32_t ;
typedef int isc_sha1_t ;
typedef int isc_result_t ;
struct TYPE_11__ {unsigned int entropy; scalar_t__ pool; } ;
struct TYPE_12__ {unsigned int initialized; int lock; TYPE_1__ pool; } ;
typedef TYPE_2__ isc_entropy_t ;
typedef scalar_t__ isc_boolean_t ;
typedef int digest ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (int,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,unsigned char*,int,int ) ;
 int FUNC_10 (TYPE_2__*,unsigned int,scalar_t__) ;
 int FUNC_11 (int *,unsigned char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,void*,int ) ;
 int FUNC_14 (unsigned char*,int ,int) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int) ;

isc_result_t
FUNC_17(isc_entropy_t *VAR_10, void *VAR_11, unsigned int VAR_12,
      unsigned int *VAR_13, unsigned int VAR_14)
{
 unsigned int VAR_15;
 isc_sha1_t VAR_16;
 unsigned char VAR_17[VAR_6];
 isc_uint32_t VAR_18, VAR_19, VAR_20, VAR_21;
 isc_uint8_t *VAR_22;
 isc_boolean_t VAR_23, VAR_24, VAR_25;

 FUNC_4(FUNC_6(VAR_10));
 FUNC_4(VAR_11 != ((void*)0));
 FUNC_4(VAR_12 > 0);

 VAR_23 = FUNC_2((VAR_14 & VAR_1) != 0);
 VAR_24 = FUNC_2((VAR_14 & VAR_2) != 0);
 VAR_25 = FUNC_2((VAR_14 & VAR_0) != 0);

 FUNC_4(!VAR_24 || VAR_13 != ((void*)0));

 FUNC_3(&VAR_10->lock);

 VAR_18 = VAR_12;
 VAR_22 = VAR_11;
 VAR_21 = 0;
 while (VAR_18 != 0) {
  VAR_20 = FUNC_1(VAR_18, VAR_7);







  if (VAR_23) {
   unsigned int VAR_26;

   VAR_26 = FUNC_0(VAR_18 * 8, VAR_20 * 8);
   if (VAR_10->pool.entropy >= VAR_9)
    FUNC_10(VAR_10, VAR_26, VAR_3);
   else
    FUNC_10(VAR_10, VAR_26, VAR_25);





   if (VAR_10->pool.entropy < VAR_9) {
    if (!VAR_24)
     goto zeroize;
    else
     goto partial_output;
   }
  } else {




   if (VAR_10->initialized < VAR_9)
    FUNC_10(VAR_10, VAR_9, VAR_25);
   else
    FUNC_10(VAR_10, 0, VAR_3);





   if (VAR_10->initialized < VAR_9)
    FUNC_15(VAR_10);
  }

  FUNC_12(&VAR_16);
  FUNC_13(&VAR_16, (void *)(VAR_10->pool.pool),
    VAR_8);
  FUNC_11(&VAR_16, VAR_17);




  FUNC_9(VAR_10, VAR_17, VAR_6, 0);

  for (VAR_15 = 0; VAR_15 < VAR_20; VAR_15++)
   VAR_22[VAR_15] = VAR_17[VAR_15] ^ VAR_17[VAR_15 + VAR_7];

  VAR_22 += VAR_20;
  VAR_18 -= VAR_20;

  VAR_19 = VAR_20 * 8;
  VAR_19 = FUNC_1(VAR_19, VAR_10->pool.entropy);
  VAR_21 += VAR_19;
  FUNC_16(VAR_10, VAR_19);
  FUNC_8(VAR_10, VAR_20 * 8);
 }

 partial_output:
 FUNC_14(VAR_17, 0, sizeof(VAR_17));

 if (VAR_13 != ((void*)0))
  *VAR_13 = (VAR_12 - VAR_18);

 FUNC_5(&VAR_10->lock);

 return (VAR_5);

 zeroize:

 FUNC_7(VAR_10, VAR_21);
 FUNC_14(VAR_11, 0, VAR_12);
 FUNC_14(VAR_17, 0, sizeof(VAR_17));
 if (VAR_13 != ((void*)0))
  *VAR_13 = 0;

 FUNC_5(&VAR_10->lock);

 return (VAR_4);
}
