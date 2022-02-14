
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pt_section {scalar_t__ offset; scalar_t__ size; } ;
struct iscache_fixture {TYPE_1__** section; int iscache; } ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int *,struct pt_section**,scalar_t__*,int) ;
 int FUNC_2 (struct pt_section*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(void *VAR_5)
{
 struct iscache_fixture *VAR_6;
 int VAR_7;

 VAR_6 = VAR_5;
 if (!VAR_6)
  return -VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  uint64_t VAR_8;
  int VAR_9;

  VAR_8 = 0x1000ull * (VAR_7 % 23);

  for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
   struct pt_section *VAR_10;
   uint64_t VAR_11;
   int VAR_12, VAR_13;

   VAR_12 = FUNC_0(&VAR_6->iscache,
           VAR_6->section[VAR_9], VAR_8);
   if (VAR_12 < 0)
    return VAR_12;

   VAR_13 = FUNC_1(&VAR_6->iscache, &VAR_10,
          &VAR_11, VAR_12);
   if (VAR_13 < 0)
    return VAR_13;

   if (VAR_8 != VAR_11)
    return -VAR_4;







   if (VAR_10->offset != VAR_6->section[VAR_9]->offset)
    return -VAR_2;

   if (VAR_10->size != VAR_6->section[VAR_9]->size)
    return -VAR_2;

   VAR_13 = FUNC_2(VAR_10);
   if (VAR_13 < 0)
    return VAR_13;
  }
 }

 return 0;
}
