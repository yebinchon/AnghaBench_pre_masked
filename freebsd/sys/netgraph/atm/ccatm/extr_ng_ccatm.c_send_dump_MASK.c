
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {scalar_t__ m_len; TYPE_1__ m_pkthdr; int m_data; struct mbuf* m_next; } ;
struct ccnode {struct mbuf* dump_first; struct mbuf* dump_last; int * dump; } ;
struct ccdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mbuf*) ;
 struct mbuf* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(struct ccdata *VAR_4, void *VAR_5, const char *VAR_6)
{
 struct mbuf *VAR_7;
 struct ccnode *VAR_8 = VAR_5;

 if (VAR_8->dump == ((void*)0)) {
  VAR_7 = FUNC_1(VAR_2, VAR_1, VAR_3);
  if (VAR_7 == ((void*)0))
   return (VAR_0);
  VAR_8->dump_first = VAR_8->dump_last = VAR_7;
  VAR_7->m_pkthdr.len = 0;
 } else {
  VAR_7 = FUNC_1(VAR_2, VAR_1, 0);
  if (VAR_7 == ((void*)0)) {
   FUNC_0(VAR_8->dump_first);
   return (VAR_0);
  }
  VAR_8->dump_last->m_next = VAR_7;
  VAR_8->dump_last = VAR_7;
 }

 FUNC_2(VAR_7->m_data, VAR_6);
 VAR_8->dump_first->m_pkthdr.len += (VAR_7->m_len = FUNC_3(VAR_6));

 return (0);
}
