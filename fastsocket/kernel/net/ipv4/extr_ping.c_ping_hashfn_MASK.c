
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;


 unsigned int FUNC_0 (struct net*) ;
 int FUNC_1 (char*,unsigned int,int) ;

__attribute__((used)) static inline int FUNC_2(struct net *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 int VAR_3 = (VAR_1 + FUNC_0(VAR_0)) & VAR_2;
 FUNC_1("hash(%d) = %d\n", VAR_1, VAR_3);
 return VAR_3;
}
