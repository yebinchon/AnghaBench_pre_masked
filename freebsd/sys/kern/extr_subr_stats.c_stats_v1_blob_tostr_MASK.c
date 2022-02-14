
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct statsblobv1 {scalar_t__ abi; int tplhash; } ;
struct sbuf {int dummy; } ;
struct sb_tostrcb_ctx {int fmt; int flags; int * tpl; struct sbuf* buf; } ;
typedef enum sb_str_fmt { ____Placeholder_sb_str_fmt } sb_str_fmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sbuf*) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct statsblobv1*,int ,struct sb_tostrcb_ctx*,int) ;
 int VAR_7 ;

int
FUNC_4(struct statsblobv1 *VAR_8, struct sbuf *VAR_9,
    enum sb_str_fmt VAR_10, uint32_t VAR_11)
{
 struct sb_tostrcb_ctx VAR_12;
 uint32_t VAR_13;

 if (VAR_8 == ((void*)0) || VAR_8->abi != VAR_6 || VAR_9 == ((void*)0) ||
     VAR_10 >= VAR_3)
  return (VAR_0);

 VAR_12.buf = VAR_9;
 VAR_12.fmt = VAR_10;
 VAR_12.flags = VAR_11;

 if (VAR_11 & VAR_4) {
  if (FUNC_1(FUNC_2(((void*)0), VAR_8->tplhash),
      &VAR_12.tpl))
   return (VAR_0);
 } else
  VAR_12.tpl = ((void*)0);

 VAR_13 = 0;
 if (VAR_11 & VAR_5)
  VAR_13 |= (VAR_1 | VAR_2);
 FUNC_3(VAR_8, VAR_7, &VAR_12, VAR_13);

 return (FUNC_0(VAR_9));
}
