
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int pbuf; int rbuf; } ;
struct sc_chinfo {int fmt; scalar_t__ dir; int active; int wmark; int blksize; struct sc_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int) ;
 int VAR_19 ;
 int FUNC_2 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_20, void *VAR_21, int VAR_22)
{
 struct sc_chinfo *VAR_23 = VAR_21;
 struct sc_info *VAR_24 = VAR_23->parent;
 int VAR_25;

 if (!FUNC_1(VAR_22))
  return 0;

 VAR_25 = (VAR_23->fmt & VAR_0)? 2 : 1;
 if (FUNC_0(VAR_23->fmt) > 1)
  VAR_25 <<= 1;

 if (VAR_23->dir == VAR_18) {
  if (VAR_22 == VAR_19) {
   VAR_23->active = 1;
   VAR_23->wmark = VAR_23->blksize;
   FUNC_2(VAR_24, VAR_6, VAR_24->pbuf, 4);
   FUNC_2(VAR_24, VAR_5, VAR_24->pbuf + VAR_3 - VAR_25, 4);
   FUNC_2(VAR_24, VAR_4, VAR_24->pbuf, 4);
   FUNC_2(VAR_24, VAR_7, VAR_24->pbuf + VAR_23->wmark, 4);
   FUNC_2(VAR_24, VAR_9, VAR_10 |
    VAR_8, 1);
   FUNC_2(VAR_24, VAR_2, 0, 2);
  } else {
   VAR_23->active = 0;
   FUNC_2(VAR_24, VAR_9, 0, 1);
   FUNC_2(VAR_24, VAR_2, VAR_1, 2);
  }
 } else {
  if (VAR_22 == VAR_19) {
   VAR_23->active = 1;
   VAR_23->wmark = VAR_23->blksize;
   FUNC_2(VAR_24, VAR_16, VAR_17 |
    VAR_15, 1);
   FUNC_2(VAR_24, VAR_13, VAR_24->rbuf, 4);
   FUNC_2(VAR_24, VAR_12, VAR_24->rbuf + VAR_3, 4);
   FUNC_2(VAR_24, VAR_11, VAR_24->rbuf, 4);
   FUNC_2(VAR_24, VAR_14, VAR_24->rbuf + VAR_23->wmark, 4);
  } else {
   VAR_23->active = 0;
   FUNC_2(VAR_24, VAR_16, 0, 1);
  }
 }
 return 0;
}
