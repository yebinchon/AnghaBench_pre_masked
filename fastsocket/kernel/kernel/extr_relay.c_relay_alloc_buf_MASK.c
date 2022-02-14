
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchan_buf {unsigned int page_count; int * page_array; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,size_t) ;
 int * FUNC_4 (unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 void* FUNC_8 (int *,unsigned int,int ,int ) ;

__attribute__((used)) static void *FUNC_9(struct rchan_buf *VAR_4, size_t *VAR_5)
{
 void *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;

 *VAR_5 = FUNC_0(*VAR_5);
 VAR_9 = *VAR_5 >> VAR_2;

 VAR_4->page_array = FUNC_4(VAR_9);
 if (!VAR_4->page_array)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  VAR_4->page_array[VAR_7] = FUNC_2(VAR_0);
  if (FUNC_7(!VAR_4->page_array[VAR_7]))
   goto depopulate;
  FUNC_6(VAR_4->page_array[VAR_7], (unsigned long)VAR_4);
 }
 VAR_6 = FUNC_8(VAR_4->page_array, VAR_9, VAR_3, VAR_1);
 if (!VAR_6)
  goto depopulate;

 FUNC_3(VAR_6, 0, *VAR_5);
 VAR_4->page_count = VAR_9;
 return VAR_6;

depopulate:
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_1(VAR_4->page_array[VAR_8]);
 FUNC_5(VAR_4->page_array);
 return ((void*)0);
}
