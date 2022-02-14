
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {int dummy; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (struct sockbuf*,int) ;

void
FUNC_4(struct sockbuf *VAR_0, int VAR_1)
{
 struct mbuf *VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 FUNC_1(VAR_0);

 FUNC_2(VAR_2);
}
