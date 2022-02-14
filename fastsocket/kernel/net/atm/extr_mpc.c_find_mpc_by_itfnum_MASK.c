
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpoa_client {int dev_num; struct mpoa_client* next; } ;


 struct mpoa_client* VAR_0 ;

__attribute__((used)) static struct mpoa_client *FUNC_0(int VAR_1)
{
 struct mpoa_client *VAR_2;

 VAR_2 = VAR_0;
 while (VAR_2 != ((void*)0)) {
  if (VAR_2->dev_num == VAR_1)
   return VAR_2;
  VAR_2 = VAR_2->next;
 }

 return ((void*)0);
}
