
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn {int flags; int lock; int cport; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ip_vs_conn*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ip_vs_conn*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ip_vs_conn *VAR_2, __be16 VAR_3)
{
 if (FUNC_2(VAR_2)) {
  FUNC_3(&VAR_2->lock);
  if (VAR_2->flags & VAR_0) {
   FUNC_0(&VAR_1);
   VAR_2->flags &= ~VAR_0;
   VAR_2->cport = VAR_3;
  }
  FUNC_4(&VAR_2->lock);


  FUNC_1(VAR_2);
 }
}
