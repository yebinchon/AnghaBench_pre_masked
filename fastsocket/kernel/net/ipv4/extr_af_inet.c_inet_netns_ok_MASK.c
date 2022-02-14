
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_protocol {int netns_ok; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net*,int *) ;
 struct net_protocol* FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct net *VAR_3, int VAR_4)
{
 int VAR_5;
 const struct net_protocol *VAR_6;

 if (FUNC_0(VAR_3, &VAR_2))
  return 1;

 VAR_5 = VAR_4 & (VAR_0 - 1);
 VAR_6 = FUNC_1(VAR_1[VAR_5]);

 if (VAR_6 == ((void*)0))

  return 1;
 return VAR_6->netns_ok;
}
