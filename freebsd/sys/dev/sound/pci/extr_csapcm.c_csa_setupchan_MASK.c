
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct csa_info {int pfie; int res; } ;
struct csa_chinfo {scalar_t__ dir; int fmt; int spd; int buffer; struct csa_info* parent; } ;
typedef int csa_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct csa_chinfo *VAR_11)
{
 struct csa_info *VAR_12 = VAR_11->parent;
 csa_res *VAR_13 = &VAR_12->res;
 u_long VAR_14, VAR_15;

 if (VAR_11->dir == VAR_9) {

  FUNC_4(VAR_13, VAR_6, FUNC_5(VAR_11->buffer));


  VAR_12->pfie = FUNC_1(VAR_13, VAR_8) & ~0x0000f03f;
  if (!(VAR_11->fmt & VAR_3))
   VAR_12->pfie |= 0x8000;
  if (VAR_11->fmt & VAR_2)
   VAR_12->pfie |= 0x4000;
  if (FUNC_0(VAR_11->fmt) < 2)
   VAR_12->pfie |= 0x2000;
  if (VAR_11->fmt & VAR_1)
   VAR_12->pfie |= 0x1000;
  FUNC_4(VAR_13, VAR_8, VAR_12->pfie);

  VAR_15 = 4;
  if (VAR_11->fmt & VAR_0)
   VAR_15 <<= 1;
  if (FUNC_0(VAR_11->fmt) > 1)
   VAR_15 <<= 1;
  VAR_15--;

  VAR_14 = FUNC_1(VAR_13, VAR_7) & ~0x000001ff;
  VAR_14 |= VAR_15;
  FUNC_4(VAR_13, VAR_7, VAR_14);


  FUNC_3(VAR_13, VAR_11->spd);
 } else if (VAR_11->dir == VAR_10) {

  FUNC_4(VAR_13, VAR_4, FUNC_5(VAR_11->buffer));


  FUNC_4(VAR_13, VAR_5, (FUNC_1(VAR_13, VAR_5) & ~0x0000003f) | 0x00000001);


  FUNC_2(VAR_13, VAR_11->spd);
 }
 return 0;
}
