
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf_ext_pgs {scalar_t__ hdr_len; scalar_t__ trail_len; scalar_t__ npgs; } ;
struct TYPE_2__ {struct mbuf_ext_pgs* ext_pgs; } ;
struct mbuf {int m_flags; TYPE_1__ m_ext; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct mbuf *VAR_1)
{
 struct mbuf_ext_pgs *VAR_2;
 int VAR_3;

 if ((VAR_1->m_flags & VAR_0) == 0)
  return (1);
 VAR_2 = VAR_1->m_ext.ext_pgs;
 VAR_3 = 0;
 if (VAR_2->hdr_len != 0)
  VAR_3++;
 VAR_3 += VAR_2->npgs;
 if (VAR_2->trail_len != 0)
  VAR_3++;

 return (VAR_3);
}
