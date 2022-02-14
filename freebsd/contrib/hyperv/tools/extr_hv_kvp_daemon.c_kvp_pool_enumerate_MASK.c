
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvp_record {int value; int key; } ;
typedef int __u8 ;
struct TYPE_2__ {int num_records; struct kvp_record* records; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, int VAR_3, __u8 *VAR_4, int VAR_5,
    __u8 *VAR_6, int VAR_7)
{
 struct kvp_record *VAR_8;

 FUNC_0(VAR_0, "kvp_pool_enumerate: pool = %d, index = %d\n,",
     VAR_2, VAR_3);


 FUNC_1(VAR_2);
 VAR_8 = VAR_1[VAR_2].records;


 if (VAR_3 >= VAR_1[VAR_2].num_records) {
  return (1);
 }

 FUNC_2(VAR_4, VAR_8[VAR_3].key, VAR_5);
 FUNC_2(VAR_6, VAR_8[VAR_3].value, VAR_7);
 return (0);
}
