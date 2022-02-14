
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct resource {int start; int end; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct resource*,char*) ;
 int FUNC_1 (unsigned long,unsigned long,void*) ;

int FUNC_2(unsigned long VAR_4, unsigned long VAR_5,
  void *VAR_6, int (*VAR_7)(unsigned long, unsigned long, void *))
{
 struct resource VAR_8;
 unsigned long VAR_9, VAR_10;
 u64 VAR_11;
 int VAR_12 = -1;

 VAR_8.start = (u64) VAR_4 << VAR_2;
 VAR_8.end = ((u64)(VAR_4 + VAR_5) << VAR_2) - 1;
 VAR_8.flags = VAR_1 | VAR_0;
 VAR_11 = VAR_8.end;
 while ((VAR_8.start < VAR_8.end) &&
  (FUNC_0(&VAR_8, "System RAM") >= 0)) {
  VAR_9 = (VAR_8.start + VAR_3 - 1) >> VAR_2;
  VAR_10 = (VAR_8.end + 1) >> VAR_2;
  if (VAR_10 > VAR_9)
      VAR_12 = (*VAR_7)(VAR_9, VAR_10 - VAR_9, VAR_6);
  if (VAR_12)
   break;
  VAR_8.start = VAR_8.end + 1;
  VAR_8.end = VAR_11;
 }
 return VAR_12;
}
