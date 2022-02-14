
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 struct hlist_head* VAR_1 ;
 unsigned int FUNC_0 (char const*,int ,unsigned long) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static struct hlist_head *FUNC_2(struct net *VAR_2, const char *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_3, FUNC_1(VAR_3), (unsigned long) VAR_2);
 return &VAR_1[VAR_4 & (VAR_0 - 1)];
}
