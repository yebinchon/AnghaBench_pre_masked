
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_section {scalar_t__ offset; scalar_t__ size; } ;
struct iscache_fixture {int iscache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
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
  uint64_t VAR_8, VAR_9, VAR_10;
  int VAR_11;

  VAR_8 = VAR_7 % 7 == 0 ? 0x1000 : 0x2000;
  VAR_9 = VAR_7 % 5 == 0 ? 0x1000 : 0x2000;
  VAR_10 = VAR_7 % 3 == 0 ? 0x1000 : 0x2000;

  for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11) {
   struct pt_section *VAR_12;
   uint64_t VAR_13;
   int VAR_14, VAR_15;

   VAR_14 = FUNC_0(&VAR_6->iscache, "name",
         VAR_8, VAR_9, VAR_10);
   if (VAR_14 < 0)
    return VAR_14;

   VAR_15 = FUNC_1(&VAR_6->iscache, &VAR_12,
          &VAR_13, VAR_14);
   if (VAR_15 < 0)
    return VAR_15;

   if (VAR_10 != VAR_13)
    return -VAR_4;

   if (VAR_12->offset != VAR_8)
    return -VAR_2;

   if (VAR_12->size != VAR_9)
    return -VAR_2;

   VAR_15 = FUNC_2(VAR_12);
   if (VAR_15 < 0)
    return VAR_15;
  }
 }

 return 0;
}
