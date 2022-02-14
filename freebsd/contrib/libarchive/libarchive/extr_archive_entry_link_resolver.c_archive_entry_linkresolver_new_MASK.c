
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry_linkresolver {int number_buckets; int * buckets; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct archive_entry_linkresolver*) ;
 int VAR_0 ;

struct archive_entry_linkresolver *
FUNC_2(void)
{
 struct archive_entry_linkresolver *VAR_1;


 if (VAR_0 == 0 ||
     (VAR_0 & (VAR_0 - 1)) != 0)
  return (((void*)0));

 VAR_1 = FUNC_0(1, sizeof(struct archive_entry_linkresolver));
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_1->number_buckets = VAR_0;
 VAR_1->buckets = FUNC_0(VAR_1->number_buckets, sizeof(VAR_1->buckets[0]));
 if (VAR_1->buckets == ((void*)0)) {
  FUNC_1(VAR_1);
  return (((void*)0));
 }
 return (VAR_1);
}
