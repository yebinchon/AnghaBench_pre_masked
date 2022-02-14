
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockbuf {int dummy; } ;
struct sockaddr {int sa_len; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockbuf*) ;
 scalar_t__ FUNC_1 (struct mbuf*,struct mbuf**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sockbuf*,struct sockaddr const*,struct mbuf*,struct mbuf*,struct mbuf*) ;
 int FUNC_4 (struct sockbuf*) ;

int
FUNC_5(struct sockbuf *VAR_1, const struct sockaddr *VAR_2,
    struct mbuf *VAR_3, struct mbuf *VAR_4)
{
 struct mbuf *VAR_5;
 int VAR_6 = VAR_2->sa_len;

 FUNC_0(VAR_1);

 if (VAR_3 && (VAR_3->m_flags & VAR_0) == 0)
  FUNC_2("sbappendaddr_locked");
 if (VAR_3)
  VAR_6 += VAR_3->m_pkthdr.len;
 VAR_6 += FUNC_1(VAR_4, &VAR_5);

 if (VAR_6 > FUNC_4(VAR_1))
  return (0);
 return (FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
