
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct bcache_devdata {int (* dv_strategy ) (int ,int,size_t,size_t,char*,size_t*) ;int dv_devdata; struct bcache* dv_cache; } ;
struct bcache {size_t bcache_nblks; } ;
typedef size_t daddr_t ;


 int FUNC_0 (struct bcache*,size_t) ;
 int FUNC_1 (char*,size_t,size_t) ;
 int VAR_0 ;


 int FUNC_2 (int,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (void*,int,size_t,size_t,char*,size_t*) ;
 int FUNC_4 (int ,int,size_t,size_t,char*,size_t*) ;
 int FUNC_5 (void*,int const,size_t,size_t,char*,size_t*) ;

int
FUNC_6(void *VAR_4, int VAR_5, daddr_t VAR_6, size_t VAR_7,
    char *VAR_8, size_t *VAR_9)
{
    struct bcache_devdata *VAR_10 = (struct bcache_devdata *)VAR_4;
    struct bcache *VAR_11 = VAR_10->dv_cache;
    u_int VAR_12 = 0;
    int VAR_13, VAR_14, VAR_15;
    size_t VAR_16, VAR_17, VAR_18;

    VAR_3++;

    if (VAR_11 != ((void*)0))
 VAR_12 = VAR_11->bcache_nblks;


    if (VAR_11 == ((void*)0) ||
 ((VAR_7 * 2 / VAR_1) > VAR_12)) {
 FUNC_1("bypass %zu from %qu", VAR_7 / VAR_1, VAR_6);
 VAR_2++;
 VAR_5 &= VAR_0;
 return (VAR_10->dv_strategy(VAR_10->dv_devdata, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9));
    }

    switch (VAR_5 & VAR_0) {
    case 129:
 VAR_13 = VAR_7 / VAR_1;
 if (VAR_7 != 0 && VAR_13 == 0)
     VAR_13++;

 VAR_15 = 0;
 VAR_18 = 0;
 while(VAR_7) {
     VAR_14 = VAR_12 - FUNC_0(VAR_11, VAR_6);
     VAR_14 = FUNC_2(VAR_14, VAR_13);

     if (VAR_7 <= VAR_1)
  VAR_16 = VAR_7;
     else
  VAR_16 = VAR_14 * VAR_1;

     VAR_15 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_16, VAR_8+VAR_18, &VAR_17);





     if (VAR_15 != 0 || VAR_17 == 0) {
  if (VAR_18 != 0)
      VAR_15 = 0;
  break;
     }
     VAR_6 += VAR_17 / VAR_1;
     VAR_18 += VAR_17;
     VAR_7 -= VAR_17;
     VAR_13 = VAR_7 / VAR_1;
 }

 if (VAR_9)
     *VAR_9 = VAR_18;

 return (VAR_15);
    case 128:
 return FUNC_5(VAR_4, 128, VAR_6, VAR_7, VAR_8, VAR_9);
    }
    return -1;
}
