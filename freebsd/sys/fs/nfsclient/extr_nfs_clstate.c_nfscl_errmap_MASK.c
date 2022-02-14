
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct nfsrv_descript {int nd_repstat; size_t nd_procnum; } ;


 int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 short** VAR_8 ;
 int FUNC_0 (short) ;

__attribute__((used)) static int
FUNC_1(struct nfsrv_descript *VAR_9, u_int32_t VAR_10)
{
 short *VAR_11, *VAR_12;

 if (!VAR_9->nd_repstat)
  return (0);
 if (VAR_9->nd_procnum == VAR_5)
  return (FUNC_0(VAR_9->nd_repstat & 0xffff));
 if (VAR_9->nd_repstat == VAR_0)
  return (FUNC_0(VAR_2));
 if (VAR_9->nd_repstat == VAR_3 ||
     VAR_9->nd_repstat == VAR_4)
  return (FUNC_0(VAR_9->nd_repstat));
 if (VAR_9->nd_repstat >= VAR_1 && VAR_9->nd_repstat < 20000 &&
     VAR_10 > VAR_7) {

  return (FUNC_0(VAR_9->nd_repstat));
 }
 if (VAR_9->nd_procnum < VAR_6)
  VAR_12 = VAR_11 = VAR_8[VAR_9->nd_procnum];
 else
  return (FUNC_0(VAR_9->nd_repstat));
 while (*++VAR_12)
  if (*VAR_12 == (short)VAR_9->nd_repstat)
   return (FUNC_0(VAR_9->nd_repstat));
 return (FUNC_0(*VAR_11));
}
