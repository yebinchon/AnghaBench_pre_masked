
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table {struct hash_bucket** buckets; int hash_count; } ;
struct hash_bucket {unsigned char const* name; unsigned char* value; int len; struct hash_bucket* next; } ;


 int FUNC_0 (unsigned char const*,int,int ) ;
 struct hash_bucket* FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,unsigned char const*) ;

void FUNC_4(struct hash_table *VAR_0, const unsigned char *VAR_1, int VAR_2,
    unsigned char *VAR_3)
{
 struct hash_bucket *VAR_4;
 int VAR_5;

 if (!VAR_0)
  return;
 if (!VAR_2)
  VAR_2 = FUNC_2((const char *)VAR_1);

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_0->hash_count);
 VAR_4 = FUNC_1();

 if (!VAR_4) {
  FUNC_3("Can't add %s to hash table.", VAR_1);
  return;
 }
 VAR_4->name = VAR_1;
 VAR_4->value = VAR_3;
 VAR_4->next = VAR_0->buckets[VAR_5];
 VAR_4->len = VAR_2;
 VAR_0->buckets[VAR_5] = VAR_4;
}
