
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {int dummy; } ;
struct sock {int dummy; } ;


 struct sock* FUNC_0 (unsigned int,struct x25_neigh*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;
 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_4(struct x25_neigh *VAR_1)
{
 unsigned int VAR_2 = 1;
 struct sock *VAR_3;

 FUNC_1(&VAR_0);

 while ((VAR_3 = FUNC_0(VAR_2, VAR_1)) != ((void*)0)) {
  FUNC_3(VAR_3);
  if (++VAR_2 == 4096) {
   VAR_2 = 0;
   break;
  }
 }

 FUNC_2(&VAR_0);
 return VAR_2;
}
