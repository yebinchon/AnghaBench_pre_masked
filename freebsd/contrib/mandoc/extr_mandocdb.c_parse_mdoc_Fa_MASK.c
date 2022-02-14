
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct roff_node {scalar_t__ sec; int child; } ;
struct roff_meta {int dummy; } ;
struct mpage {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mpage*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct mpage *VAR_3, const struct roff_meta *VAR_4,
 const struct roff_node *VAR_5)
{
 uint64_t VAR_6;

 VAR_6 = VAR_1;
 if (VAR_5->sec == VAR_0)
  VAR_6 |= VAR_2;

 FUNC_0(VAR_3, VAR_5->child, VAR_6, 0);
 return 0;
}
