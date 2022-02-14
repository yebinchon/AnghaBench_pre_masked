
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voistat {int dummy; } ;
struct voi {int dummy; } ;
struct statsblobv1 {int dummy; } ;
struct sb_tostrcb_ctx {int fmt; int buf; } ;
struct sb_iter_ctx {struct sb_tostrcb_ctx* usrctx; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct statsblobv1*,struct voi*,struct voistat*,struct sb_iter_ctx*) ;
 int FUNC_2 (struct statsblobv1*,struct voi*,struct voistat*,struct sb_iter_ctx*) ;

__attribute__((used)) static int
FUNC_3(struct statsblobv1 *VAR_0, struct voi *VAR_1, struct voistat *VAR_2,
    struct sb_iter_ctx *VAR_3)
{
 struct sb_tostrcb_ctx *VAR_4;

 VAR_4 = VAR_3->usrctx;

 switch (VAR_4->fmt) {
 case 129:
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 default:
  break;
 }

 return (FUNC_0(VAR_4->buf));
}
