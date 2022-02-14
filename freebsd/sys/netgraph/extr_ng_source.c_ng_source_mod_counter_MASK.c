
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint32_t ;
struct ng_source_embed_cnt_info {int next_val; int max_val; int min_val; int flags; scalar_t__ width; int offset; } ;
struct mbuf {int dummy; } ;
typedef int sc_p ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct mbuf*,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(sc_p VAR_0, struct ng_source_embed_cnt_info *VAR_1,
    struct mbuf *VAR_2, int VAR_3)
{
 caddr_t VAR_4;
 uint32_t VAR_5;

 VAR_5 = FUNC_0(VAR_1->next_val);
 VAR_4 = (caddr_t)&VAR_5 + sizeof(VAR_5) - VAR_1->width;
 FUNC_1(VAR_0, VAR_2, VAR_1->offset, VAR_1->width, VAR_4, VAR_1->flags);

 if (VAR_3) {
  VAR_1->next_val += VAR_3;

  if (VAR_3 > 0 && VAR_1->next_val > VAR_1->max_val) {
   VAR_1->next_val = VAR_1->min_val - 1 +
       (VAR_1->next_val - VAR_1->max_val);
   if (VAR_1->next_val > VAR_1->max_val)
    VAR_1->next_val = VAR_1->max_val;
  } else if (VAR_3 < 0 && VAR_1->next_val < VAR_1->min_val) {
   VAR_1->next_val = VAR_1->max_val + 1 +
       (VAR_1->next_val - VAR_1->min_val);
   if (VAR_1->next_val < VAR_1->min_val)
    VAR_1->next_val = VAR_1->max_val;
  }
 }
}
