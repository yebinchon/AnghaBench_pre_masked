
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_entry {struct dst_entry* next; int __refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dst_entry*) ;
 struct dst_entry* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(void)
{
 struct dst_entry *VAR_2, *VAR_3, **VAR_4;
 int VAR_5 = 0;

 VAR_3 = ((void*)0);

 FUNC_2(&VAR_1);
 VAR_4 = &VAR_0;

 while ((VAR_2 = *VAR_4) != ((void*)0)) {
  if (!FUNC_0(&VAR_2->__refcnt)) {
   *VAR_4 = VAR_2->next;
   FUNC_1(VAR_2);
  } else {
   VAR_4 = &VAR_2->next;
   ++VAR_5;
  }
 }

 FUNC_3(&VAR_1);

 return VAR_5;
}
