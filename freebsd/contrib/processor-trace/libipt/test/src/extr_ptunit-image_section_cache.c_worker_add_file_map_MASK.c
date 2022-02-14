
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_section {int dummy; } ;
struct iscache_fixture {int iscache; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *,struct pt_section**,int*,int) ;
 int FUNC_2 (struct pt_section*) ;
 int FUNC_3 (struct pt_section*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(void *VAR_2)
{
 struct iscache_fixture *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2;
 if (!VAR_3)
  return -VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  struct pt_section *VAR_5;
  uint64_t VAR_6, VAR_7, VAR_8, VAR_9;
  int VAR_10, VAR_11;

  VAR_6 = VAR_4 % 7 < 4 ? 0x1000 : 0x2000;
  VAR_7 = VAR_4 % 5 < 3 ? 0x1000 : 0x2000;
  VAR_8 = VAR_4 % 3 < 2 ? 0x1000 : 0x2000;

  VAR_10 = FUNC_0(&VAR_3->iscache, "name",
        VAR_6, VAR_7, VAR_8);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_11 = FUNC_1(&VAR_3->iscache, &VAR_5,
         &VAR_9, VAR_10);
  if (VAR_11 < 0)
   return VAR_11;

  if (VAR_9 != VAR_8)
   return -VAR_1;

  VAR_11 = FUNC_2(VAR_5);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_11 = FUNC_3(VAR_5);
  if (VAR_11 < 0)
   return VAR_11;
 }

 return 0;
}
