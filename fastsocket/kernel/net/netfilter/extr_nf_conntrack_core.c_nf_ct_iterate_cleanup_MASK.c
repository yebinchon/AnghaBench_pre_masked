
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {int timeout; } ;
struct net {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int *) ;
 struct nf_conn* FUNC_2 (struct net*,int (*) (struct nf_conn*,void*),void*,unsigned int*) ;
 int FUNC_3 (struct nf_conn*) ;

void FUNC_4(struct net *VAR_0,
      int (*VAR_1)(struct nf_conn *VAR_2, void *VAR_3),
      void *VAR_4)
{
 struct nf_conn *VAR_5;
 unsigned int VAR_6 = 0;

 while ((VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_4, &VAR_6)) != ((void*)0)) {

  if (FUNC_1(&VAR_5->timeout))
   FUNC_0((unsigned long)VAR_5);


  FUNC_3(VAR_5);
 }
}
