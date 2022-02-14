
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statsblobv1 {scalar_t__ abi; } ;
struct sb_visitcb_ctx {void* usrctx; int * cb; } ;
typedef int * stats_blob_visitcb_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct statsblobv1*,int ,struct sb_visitcb_ctx*,int ) ;
 int VAR_2 ;

int
FUNC_1(struct statsblobv1 *VAR_3, stats_blob_visitcb_t VAR_4,
    void *VAR_5)
{
 struct sb_visitcb_ctx VAR_6;

 if (VAR_3 == ((void*)0) || VAR_3->abi != VAR_1 || VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_6.cb = VAR_4;
 VAR_6.usrctx = VAR_5;

 FUNC_0(VAR_3, VAR_2, &VAR_6, 0);

 return (0);
}
