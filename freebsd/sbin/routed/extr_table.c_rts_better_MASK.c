
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_spare {int dummy; } ;
struct rt_entry {struct rt_spare* rt_spares; } ;


 scalar_t__ FUNC_0 (struct rt_entry*,struct rt_spare*,struct rt_spare*) ;
 int VAR_0 ;

__attribute__((used)) static struct rt_spare *
FUNC_1(struct rt_entry *VAR_1)
{
 struct rt_spare *VAR_2, *VAR_3;
 int VAR_4;


 VAR_2 = VAR_1->rt_spares+1;
 for (VAR_4 = VAR_0, VAR_3 = VAR_2+1; VAR_4 > 2; VAR_4--, VAR_3++) {
  if (FUNC_0(VAR_1,VAR_3,VAR_2))
   VAR_2 = VAR_3;
 }

 return VAR_2;
}
