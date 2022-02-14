
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_flowlabel {unsigned long lastuse; unsigned long linger; unsigned long expires; struct ip6_flowlabel* next; int users; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ip6_flowlabel*) ;
 struct ip6_flowlabel** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_7)
{
 int VAR_8;
 unsigned long VAR_9 = VAR_6;
 unsigned long VAR_10 = 0;

 FUNC_7(&VAR_5);

 for (VAR_8=0; VAR_8<=VAR_0; VAR_8++) {
  struct ip6_flowlabel *VAR_11, **VAR_12;
  VAR_12 = &VAR_2[VAR_8];
  while ((VAR_11=*VAR_12) != ((void*)0)) {
   if (FUNC_1(&VAR_11->users) == 0) {
    unsigned long VAR_13 = VAR_11->lastuse + VAR_11->linger;
    if (FUNC_4(VAR_13, VAR_11->expires))
     VAR_11->expires = VAR_13;
    VAR_13 = VAR_11->expires;
    if (FUNC_5(VAR_9, VAR_13)) {
     *VAR_12 = VAR_11->next;
     FUNC_2(VAR_11);
     FUNC_0(&VAR_3);
     continue;
    }
    if (!VAR_10 || FUNC_6(VAR_13, VAR_10))
     VAR_10 = VAR_13;
   }
   VAR_12 = &VAR_11->next;
  }
 }
 if (!VAR_10 && FUNC_1(&VAR_3))
  VAR_10 = VAR_9 + VAR_1;
 if (VAR_10) {
  FUNC_3(&VAR_4, VAR_10);
 }
 FUNC_8(&VAR_5);
}
