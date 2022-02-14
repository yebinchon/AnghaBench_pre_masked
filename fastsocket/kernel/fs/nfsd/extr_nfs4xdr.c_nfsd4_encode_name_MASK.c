
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int u8 ;
struct svc_rqst {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct svc_rqst*,int ,int *) ;
 int FUNC_4 (struct svc_rqst*,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int *,int *,int) ;

__attribute__((used)) static __be32
FUNC_7(struct svc_rqst *VAR_3, int VAR_4, uid_t VAR_5, int VAR_6,
   __be32 **VAR_7, int *VAR_8)
{
 int VAR_9;

 if (*VAR_8 < (FUNC_1(VAR_0) << 2) + 4)
  return VAR_2;
 if (VAR_4 != VAR_1)
  VAR_9 = FUNC_2(VAR_4, (u8 *)(*VAR_7 + 1));
 else if (VAR_6)
  VAR_9 = FUNC_3(VAR_3, VAR_5, (u8 *)(*VAR_7 + 1));
 else
  VAR_9 = FUNC_4(VAR_3, VAR_5, (u8 *)(*VAR_7 + 1));
 if (VAR_9 < 0)
  return FUNC_5(VAR_9);
 *VAR_7 = FUNC_6(*VAR_7, ((void*)0), VAR_9);
 *VAR_8 -= (FUNC_1(VAR_9) << 2) + 4;
 FUNC_0(*VAR_8 < 0);
 return 0;
}
