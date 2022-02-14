
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidmap {int page; } ;
struct pid_namespace {struct pidmap* pidmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,unsigned int,int) ;
 int FUNC_1 (struct pid_namespace*,struct pidmap*,int) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct pid_namespace *VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 struct pidmap *VAR_7, *VAR_8;

 if (VAR_5 >= VAR_3)
  return -1;

 VAR_6 = (VAR_5 + 1) & VAR_1;
 VAR_7 = &VAR_4->pidmap[(VAR_5 + 1)/VAR_0];
 VAR_8 = &VAR_4->pidmap[VAR_2];
 for (; VAR_7 < VAR_8; VAR_7++, VAR_6 = 0) {
  if (FUNC_2(!VAR_7->page))
   continue;
  VAR_6 = FUNC_0((VAR_7)->page, VAR_0, VAR_6);
  if (VAR_6 < VAR_0)
   return FUNC_1(VAR_4, VAR_7, VAR_6);
 }
 return -1;
}
