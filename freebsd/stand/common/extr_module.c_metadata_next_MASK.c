
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_metadata {int md_type; struct file_metadata* md_next; } ;



struct file_metadata *
FUNC_0(struct file_metadata *VAR_0, int VAR_1)
{

 if (VAR_0 == ((void*)0))
  return (((void*)0));
 while((VAR_0 = VAR_0->md_next) != ((void*)0))
  if (VAR_0->md_type == VAR_1)
   break;
 return (VAR_0);
}
