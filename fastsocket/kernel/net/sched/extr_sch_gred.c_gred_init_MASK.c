
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct Qdisc*,struct nlattr*) ;
 int VAR_5 ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr*,int ) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_6, struct nlattr *VAR_7)
{
 struct nlattr *VAR_8[VAR_2 + 1];
 int VAR_9;

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_8, VAR_2, VAR_7, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8[VAR_3] || VAR_8[VAR_4])
  return -VAR_0;

 return FUNC_0(VAR_6, VAR_8[VAR_1]);
}
