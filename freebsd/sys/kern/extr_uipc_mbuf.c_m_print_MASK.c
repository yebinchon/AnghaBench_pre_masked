
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int len; } ;
struct mbuf {int m_flags; int m_len; struct mbuf* m_next; scalar_t__ m_data; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(const struct mbuf *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;
 const struct mbuf *VAR_5;

 if (VAR_1 == ((void*)0)) {
  FUNC_0("mbuf: %p\n", VAR_1);
  return;
 }

 if (VAR_1->m_flags & VAR_0)
  VAR_3 = VAR_1->m_pkthdr.len;
 else
  VAR_3 = -1;
 VAR_5 = VAR_1;
 while (VAR_5 != ((void*)0) && (VAR_3 == -1 || VAR_3)) {
  VAR_4 = VAR_5->m_len;
  if (VAR_2 != -1 && VAR_4 > VAR_2)
   VAR_4 = VAR_2;
  FUNC_0("mbuf: %p len: %d, next: %p, %b%s", VAR_5, VAR_5->m_len,
      VAR_5->m_next, VAR_5->m_flags, "\20\20freelist\17skipfw"
      "\11proto5\10proto4\7proto3\6proto2\5proto1\4rdonly"
      "\3eor\2pkthdr\1ext", VAR_4 ? "" : "\n");
  if (VAR_4)
   FUNC_0(", %*D\n", VAR_4, (u_char *)VAR_5->m_data, "-");
  if (VAR_3 != -1)
   VAR_3 -= VAR_5->m_len;
  VAR_5 = VAR_5->m_next;
 }
 if (VAR_3 > 0)
  FUNC_0("%d bytes unaccounted for.\n", VAR_3);
 return;
}
