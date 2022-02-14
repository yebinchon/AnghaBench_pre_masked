
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct bstring {struct bstring* next; int length; TYPE_1__ d; } ;
struct bcache {int num_buckets; int structure_size; struct bstring** bucket; scalar_t__ unique_count; int expand_hash_count; int expand_count; } ;
typedef int sizes ;
typedef int new_buckets ;


 unsigned int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bstring**,int ,size_t) ;
 int FUNC_2 (struct bstring**) ;
 scalar_t__ FUNC_3 (size_t) ;

__attribute__((used)) static void
FUNC_4 (struct bcache *VAR_0)
{





  static unsigned long VAR_1[] = {
    1021, 2053, 4099, 8191, 16381, 32771,
    65537, 131071, 262144, 524287, 1048573, 2097143,
    4194301, 8388617, 16777213, 33554467, 67108859, 134217757,
    268435459, 536870923, 1073741827, 2147483659UL
  };
  unsigned int VAR_2;
  struct bstring **VAR_3;
  unsigned int VAR_4;



  VAR_0->expand_count++;
  VAR_0->expand_hash_count += VAR_0->unique_count;


  VAR_2 = VAR_0->num_buckets * 2;
  for (VAR_4 = 0; VAR_4 < (sizeof (VAR_1) / sizeof (VAR_1[0])); VAR_4++)
    if (VAR_1[VAR_4] > VAR_0->num_buckets)
      {
 VAR_2 = VAR_1[VAR_4];
 break;
      }


  {
    size_t VAR_5 = VAR_2 * sizeof (VAR_3[0]);
    VAR_3 = (struct bstring **) FUNC_3 (VAR_5);
    FUNC_1 (VAR_3, 0, VAR_5);

    VAR_0->structure_size -= (VAR_0->num_buckets
          * sizeof (VAR_0->bucket[0]));
    VAR_0->structure_size += VAR_5;
  }


  for (VAR_4 = 0; VAR_4 < VAR_0->num_buckets; VAR_4++)
    {
      struct bstring *VAR_6, *VAR_7;

      for (VAR_6 = VAR_0->bucket[VAR_4]; VAR_6; VAR_6 = VAR_7)
 {
   struct bstring **VAR_8;
   VAR_7 = VAR_6->next;

   VAR_8 = &VAR_3[(FUNC_0 (&VAR_6->d.data, VAR_6->length)
         % VAR_2)];
   VAR_6->next = *VAR_8;
   *VAR_8 = VAR_6;
 }
    }


  if (VAR_0->bucket)
    FUNC_2 (VAR_0->bucket);
  VAR_0->bucket = VAR_3;
  VAR_0->num_buckets = VAR_2;
}
