
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_flowlabel {unsigned long lastuse; unsigned long linger; unsigned long expires; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ip6_flowlabel *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 VAR_3 = FUNC_0(VAR_3);
 if (!VAR_3)
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_4);
 if (!VAR_4)
  return -VAR_0;
 VAR_2->lastuse = VAR_1;
 if (FUNC_1(VAR_2->linger, VAR_3))
  VAR_2->linger = VAR_3;
 if (FUNC_1(VAR_4, VAR_2->linger))
  VAR_4 = VAR_2->linger;
 if (FUNC_1(VAR_2->expires, VAR_2->lastuse + VAR_4))
  VAR_2->expires = VAR_2->lastuse + VAR_4;
 return 0;
}
