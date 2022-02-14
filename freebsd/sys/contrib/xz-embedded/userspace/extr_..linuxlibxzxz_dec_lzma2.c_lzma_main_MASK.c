
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {scalar_t__ len; size_t pos_mask; size_t state; int rep0; int * is_rep; int ** is_match; } ;
struct TYPE_5__ {size_t pos; } ;
struct xz_dec_lzma2 {int rc; TYPE_1__ lzma; TYPE_2__ dict; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__*,int ) ;
 int FUNC_2 (struct xz_dec_lzma2*) ;
 int FUNC_3 (struct xz_dec_lzma2*,size_t) ;
 int FUNC_4 (struct xz_dec_lzma2*,size_t) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static bool FUNC_8(struct xz_dec_lzma2 *VAR_0)
{
 uint32_t VAR_1;





 if (FUNC_0(&VAR_0->dict) && VAR_0->lzma.len > 0)
  FUNC_1(&VAR_0->dict, &VAR_0->lzma.len, VAR_0->lzma.rep0);





 while (FUNC_0(&VAR_0->dict) && !FUNC_6(&VAR_0->rc)) {
  VAR_1 = VAR_0->dict.pos & VAR_0->lzma.pos_mask;

  if (!FUNC_5(&VAR_0->rc, &VAR_0->lzma.is_match[
    VAR_0->lzma.state][VAR_1])) {
   FUNC_2(VAR_0);
  } else {
   if (FUNC_5(&VAR_0->rc, &VAR_0->lzma.is_rep[VAR_0->lzma.state]))
    FUNC_4(VAR_0, VAR_1);
   else
    FUNC_3(VAR_0, VAR_1);

   if (!FUNC_1(&VAR_0->dict, &VAR_0->lzma.len, VAR_0->lzma.rep0))
    return 0;
  }
 }





 FUNC_7(&VAR_0->rc);

 return 1;
}
