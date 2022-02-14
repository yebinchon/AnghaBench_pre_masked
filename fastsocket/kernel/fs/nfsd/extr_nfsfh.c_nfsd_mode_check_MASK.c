
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct svc_rqst {int rq_vers; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline __be32
FUNC_0(struct svc_rqst *VAR_7, umode_t VAR_8, int VAR_9)
{

 if (VAR_9 > 0 && (VAR_8 & VAR_2) != VAR_9) {
  if (VAR_7->rq_vers == 4 && (VAR_8 & VAR_2) == VAR_1)
   return VAR_6;
  else if (VAR_9 == VAR_0)
   return VAR_5;
  else if ((VAR_8 & VAR_2) == VAR_0)
   return VAR_4;
  else
   return VAR_3;
 }
 if (VAR_9 < 0 && (VAR_8 & VAR_2) == -VAR_9) {
  if (VAR_7->rq_vers == 4 && (VAR_8 & VAR_2) == VAR_1)
   return VAR_6;
  else if (VAR_9 == -VAR_0)
   return VAR_4;
  else
   return VAR_5;
 }
 return 0;
}
