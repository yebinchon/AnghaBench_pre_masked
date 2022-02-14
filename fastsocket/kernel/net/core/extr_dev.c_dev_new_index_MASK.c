
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;


 int FUNC_0 (struct net*,int) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_0)
{
 static int VAR_1;
 for (;;) {
  if (++VAR_1 <= 0)
   VAR_1 = 1;
  if (!FUNC_0(VAR_0, VAR_1))
   return VAR_1;
 }
}
