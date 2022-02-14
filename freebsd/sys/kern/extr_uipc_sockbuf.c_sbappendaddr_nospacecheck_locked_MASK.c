
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {int dummy; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct sockbuf*) ;
 struct mbuf* FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct sockbuf*,struct sockaddr const*,struct mbuf*,struct mbuf*,struct mbuf*) ;

int
FUNC_3(struct sockbuf *VAR_0, const struct sockaddr *VAR_1,
    struct mbuf *VAR_2, struct mbuf *VAR_3)
{
 struct mbuf *VAR_4;

 FUNC_0(VAR_0);

 VAR_4 = (VAR_3 == ((void*)0)) ? ((void*)0) : FUNC_1(VAR_3);
 return (FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4));
}
