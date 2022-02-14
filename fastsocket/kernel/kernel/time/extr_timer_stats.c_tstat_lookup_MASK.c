
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {struct entry* next; int comm; scalar_t__ count; } ;


 int VAR_0 ;
 struct entry* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct entry*,struct entry*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 struct entry** FUNC_6 (struct entry*) ;

__attribute__((used)) static struct entry *FUNC_7(struct entry *VAR_2, char *VAR_3)
{
 struct entry **VAR_4, *VAR_5, *VAR_6;

 VAR_4 = FUNC_6(VAR_2);
 VAR_5 = *VAR_4;






 while (VAR_5) {
  if (FUNC_1(VAR_5, VAR_2))
   return VAR_5;

  VAR_5 = VAR_5->next;
 }



 VAR_6 = ((void*)0);
 VAR_5 = *VAR_4;

 FUNC_4(&VAR_1);



 while (VAR_5) {
  if (FUNC_1(VAR_5, VAR_2))
   goto out_unlock;

  VAR_6 = VAR_5;
  VAR_5 = VAR_5->next;
 }

 VAR_5 = FUNC_0();
 if (VAR_5) {
  *VAR_5 = *VAR_2;
  VAR_5->count = 0;
  VAR_5->next = ((void*)0);
  FUNC_2(VAR_5->comm, VAR_3, VAR_0);

  FUNC_3();

  if (VAR_6)
   VAR_6->next = VAR_5;
  else
   *VAR_4 = VAR_5;
 }
 out_unlock:
 FUNC_5(&VAR_1);

 return VAR_5;
}
