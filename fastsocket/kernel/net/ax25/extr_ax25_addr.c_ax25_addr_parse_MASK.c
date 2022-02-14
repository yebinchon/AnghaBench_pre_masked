
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lastrepeat; int ndigi; int* repeated; int * calls; } ;
typedef TYPE_1__ ax25_digi ;
typedef int ax25_address ;


 int VAR_0 ;
 unsigned char const VAR_1 ;
 int VAR_2 ;
 unsigned char const VAR_3 ;
 unsigned char const VAR_4 ;
 unsigned char const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,unsigned char const*,int) ;

const unsigned char *FUNC_1(const unsigned char *VAR_8, int VAR_9,
 ax25_address *VAR_10, ax25_address *VAR_11, ax25_digi *VAR_12, int *VAR_13,
 int *VAR_14)
{
 int VAR_15 = 0;

 if (VAR_9 < 14) return ((void*)0);

 if (VAR_13 != ((void*)0)) {
  *VAR_13 = 0;

  if (VAR_8[6] & VAR_1)
   *VAR_13 = VAR_2;
  if (VAR_8[13] & VAR_1)
   *VAR_13 = VAR_7;
 }

 if (VAR_14 != ((void*)0))
  *VAR_14 = ~VAR_8[13] & VAR_3;


 if (VAR_11 != ((void*)0))
  FUNC_0(VAR_11, VAR_8 + 0, VAR_0);
 if (VAR_10 != ((void*)0))
  FUNC_0(VAR_10, VAR_8 + 7, VAR_0);

 VAR_8 += 2 * VAR_0;
 VAR_9 -= 2 * VAR_0;

 VAR_12->lastrepeat = -1;
 VAR_12->ndigi = 0;

 while (!(VAR_8[-1] & VAR_4)) {
  if (VAR_15 >= VAR_6) return ((void*)0);
  if (VAR_9 < 7) return ((void*)0);

  FUNC_0(&VAR_12->calls[VAR_15], VAR_8, VAR_0);
  VAR_12->ndigi = VAR_15 + 1;

  if (VAR_8[6] & VAR_5) {
   VAR_12->repeated[VAR_15] = 1;
   VAR_12->lastrepeat = VAR_15;
  } else {
   VAR_12->repeated[VAR_15] = 0;
  }

  VAR_8 += VAR_0;
  VAR_9 -= VAR_0;
  VAR_15++;
 }

 return VAR_8;
}
