
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int stat; } ;
struct net {TYPE_1__ ct; } ;
typedef int loff_t ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 void* FUNC_1 (int ,int) ;
 struct net* FUNC_2 (struct seq_file*) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_2, loff_t *VAR_3)
{
 struct net *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 if (*VAR_3 == 0)
  return VAR_0;

 for (VAR_5 = *VAR_3-1; VAR_5 < VAR_1; ++VAR_5) {
  if (!FUNC_0(VAR_5))
   continue;
  *VAR_3 = VAR_5+1;
  return FUNC_1(VAR_4->ct.stat, VAR_5);
 }

 return ((void*)0);
}
