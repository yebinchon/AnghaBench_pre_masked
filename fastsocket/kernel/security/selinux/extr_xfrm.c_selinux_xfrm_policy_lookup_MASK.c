
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xfrm_sec_ctx {int ctx_sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct xfrm_sec_ctx*) ;

int FUNC_2(struct xfrm_sec_ctx *VAR_5, u32 VAR_6, u8 VAR_7)
{
 int VAR_8;
 u32 VAR_9;


 if (VAR_5) {
  if (!FUNC_1(VAR_5))
   return -VAR_2;

  VAR_9 = VAR_5->ctx_sid;
 } else





  return 0;

 VAR_8 = FUNC_0(VAR_6, VAR_9, VAR_4,
     VAR_0,
     ((void*)0));

 if (VAR_8 == -VAR_1)
  return -VAR_3;

 return VAR_8;
}
