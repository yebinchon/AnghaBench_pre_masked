
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcache_devdata {int (* dv_strategy ) (int ,int,scalar_t__,size_t,scalar_t__,size_t*) ;int dv_devdata; struct bcache* dv_cache; } ;
struct bcache {size_t ra; size_t bcache_nblks; scalar_t__ bcache_data; } ;
typedef scalar_t__ daddr_t ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (struct bcache*,scalar_t__) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (struct bcache*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (size_t,size_t) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct bcache*,scalar_t__) ;
 int FUNC_4 (struct bcache*,scalar_t__) ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_5 (scalar_t__,char*,size_t) ;
 int VAR_9 ;
 size_t FUNC_6 (size_t,int) ;
 int FUNC_7 (int ,int,scalar_t__,size_t,scalar_t__,size_t*) ;

__attribute__((used)) static int
FUNC_8(void *VAR_10, int VAR_11, daddr_t VAR_12, size_t VAR_13,
    char *VAR_14, size_t *VAR_15)
{
    struct bcache_devdata *VAR_16 = (struct bcache_devdata *)VAR_10;
    struct bcache *VAR_17 = VAR_16->dv_cache;
    size_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    int VAR_24;
    daddr_t VAR_25;
    caddr_t VAR_26;

    if (VAR_17 == ((void*)0)) {
 VAR_9 = VAR_2;
 return (-1);
    }

    if (VAR_15 != ((void*)0))
 *VAR_15 = 0;

    VAR_19 = VAR_13 / VAR_5;
    if (VAR_19 == 0 && VAR_13 != 0)
 VAR_19++;
    VAR_24 = 0;
    VAR_22 = 1;


    for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
 if (FUNC_0(VAR_17, (daddr_t)(VAR_12 + VAR_18))) {
     VAR_7 += (VAR_19 - VAR_18);
     VAR_22 = 0;
     if (VAR_19 - VAR_18 > VAR_0 && VAR_17->ra > VAR_0)
  VAR_17->ra >>= 1;
     break;
 } else {
     VAR_6++;
 }
    }

   if (VAR_22) {
 if (VAR_17->ra < VAR_1)
  VAR_17->ra <<= 1;
 FUNC_5(VAR_17->bcache_data + (VAR_5 * FUNC_1(VAR_17, VAR_12)), VAR_14, VAR_13);
 goto done;
   }






    VAR_25 = VAR_12 + VAR_18;
    VAR_26 = VAR_17->bcache_data + (VAR_5 * FUNC_1(VAR_17, VAR_25));
    VAR_21 = VAR_17->bcache_nblks - FUNC_1(VAR_17, VAR_25);

    VAR_20 = FUNC_2(VAR_21, VAR_19 - VAR_18);
    if ((VAR_11 & VAR_4) == VAR_4)
 VAR_23 = 0;
    else
 VAR_23 = VAR_17->bcache_nblks - FUNC_1(VAR_17, VAR_25 + VAR_20);

    if (VAR_23 != 0 && VAR_23 != VAR_17->bcache_nblks) {
 VAR_23 = FUNC_2(VAR_17->ra, VAR_23 - 1);
 VAR_23 = FUNC_6(VAR_23, 16);
 VAR_20 += VAR_23;
    }


    for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++) {
 FUNC_4(VAR_17, VAR_25 + VAR_18);
    }

    VAR_21 = 0;
    VAR_11 &= VAR_3;
    VAR_24 = VAR_16->dv_strategy(VAR_16->dv_devdata, VAR_11, VAR_25,
 VAR_20 * VAR_5, VAR_26, &VAR_21);

    VAR_21 /= VAR_5;
    for (VAR_18 = 0; VAR_18 < VAR_21; VAR_18++)
 FUNC_3(VAR_17, VAR_25 + VAR_18);


    if (VAR_21 != 0) {
 if (VAR_21 < VAR_20)
     VAR_8 += (VAR_20 - VAR_21);
 else
     VAR_8 += VAR_23;
    }


    for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
 if (FUNC_0(VAR_17, (daddr_t)(VAR_12 + VAR_18)))
     break;
    }

    if (VAR_13 > VAR_18 * VAR_5)
 VAR_13 = VAR_18 * VAR_5;

    if (VAR_13 != 0) {
 FUNC_5(VAR_17->bcache_data + (VAR_5 * FUNC_1(VAR_17, VAR_12)), VAR_14, VAR_13);
 VAR_24 = 0;
    }

 done:
    if ((VAR_24 == 0) && (VAR_15 != ((void*)0)))
 *VAR_15 = VAR_13;
    return(VAR_24);
}
