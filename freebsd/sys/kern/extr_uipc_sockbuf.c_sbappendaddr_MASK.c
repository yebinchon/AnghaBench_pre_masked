
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {int dummy; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (struct sockbuf*,struct sockaddr const*,struct mbuf*,struct mbuf*) ;

int
FUNC_3(struct sockbuf *VAR_0, const struct sockaddr *VAR_1,
    struct mbuf *VAR_2, struct mbuf *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_0);
 return (VAR_4);
}
