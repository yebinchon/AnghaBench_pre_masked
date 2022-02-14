
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpu_kern_ctx {int dummy; } ;
struct cryptop {struct cryptodesc* crp_desc; } ;
struct cryptodesc {scalar_t__ crd_alg; int crd_flags; } ;
struct aesni_session {int dummy; } ;


 int FUNC_0 (int,struct fpu_kern_ctx*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,struct fpu_kern_ctx*) ;
 int FUNC_2 (struct aesni_session*,struct cryptodesc*,struct cryptodesc*,struct cryptop*) ;
 int FUNC_3 (struct aesni_session*,struct cryptodesc*,struct cryptop*) ;
 int VAR_7 ;
 int FUNC_4 (int ,struct fpu_kern_ctx*,int) ;
 int FUNC_5 (int ,struct fpu_kern_ctx*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct aesni_session *VAR_8, struct cryptodesc *VAR_9,
    struct cryptodesc *VAR_10, struct cryptop *VAR_11)
{
 struct fpu_kern_ctx *VAR_12;
 int VAR_13, VAR_14;
 bool VAR_15;

 if (VAR_9 != ((void*)0)) {
  if ((VAR_9->crd_alg == VAR_2 ||
      VAR_9->crd_alg == VAR_1 ||
      VAR_9->crd_alg == VAR_3) &&
      (VAR_9->crd_flags & VAR_0) == 0)
   return (VAR_4);
 }

 VAR_12 = ((void*)0);
 VAR_14 = 0;
 VAR_13 = 0;
 VAR_15 = FUNC_6(0);
 if (!VAR_15) {
  FUNC_0(VAR_14, VAR_12);
  FUNC_4(VAR_7, VAR_12,
      VAR_6 | VAR_5);
 }


 if (VAR_9 != ((void*)0) && VAR_10 != ((void*)0)) {

  if (VAR_11->crp_desc == VAR_9)
   VAR_13 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
  else
   VAR_13 = FUNC_3(VAR_8, VAR_10, VAR_11);
  if (VAR_13 != 0)
   goto out;

  if (VAR_11->crp_desc == VAR_9)
   VAR_13 = FUNC_3(VAR_8, VAR_10, VAR_11);
  else
   VAR_13 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
 } else if (VAR_9 != ((void*)0))
  VAR_13 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
 else
  VAR_13 = FUNC_3(VAR_8, VAR_10, VAR_11);

 if (VAR_13 != 0)
  goto out;

out:
 if (!VAR_15) {
  FUNC_5(VAR_7, VAR_12);
  FUNC_1(VAR_14, VAR_12);
 }
 return (VAR_13);
}
