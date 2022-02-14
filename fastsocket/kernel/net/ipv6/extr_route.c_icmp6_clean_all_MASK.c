
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct rt6_info rt6_info ;
struct dst_entry {struct dst_entry* next; } ;


 int FUNC_0 (struct dst_entry*) ;
 struct dst_entry* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(int (*VAR_2)(struct rt6_info *VAR_3, void *VAR_4),
       void *VAR_5)
{
 struct dst_entry *VAR_6, **VAR_7;

 FUNC_1(&VAR_1);
 VAR_7 = &VAR_0;
 while ((VAR_6 = *VAR_7) != ((void*)0)) {
  struct rt6_info *VAR_8 = (struct rt6_info *) VAR_6;
  if (VAR_2(VAR_8, VAR_5)) {
   *VAR_7 = VAR_6->next;
   FUNC_0(VAR_6);
  } else {
   VAR_7 = &VAR_6->next;
  }
 }
 FUNC_2(&VAR_1);
}
