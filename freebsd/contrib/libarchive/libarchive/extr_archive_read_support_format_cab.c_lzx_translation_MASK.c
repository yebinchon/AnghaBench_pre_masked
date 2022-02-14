
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct lzx_stream {struct lzx_dec* ds; } ;
struct lzx_dec {scalar_t__ translation_size; int translation; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,scalar_t__) ;
 unsigned char* FUNC_2 (unsigned char*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct lzx_stream *VAR_0, void *VAR_1, size_t VAR_2, uint32_t VAR_3)
{
 struct lzx_dec *VAR_4 = VAR_0->ds;
 unsigned char *VAR_5, *VAR_6;

 if (!VAR_4->translation || VAR_2 <= 10)
  return;
 VAR_5 = VAR_1;
 VAR_6 = VAR_5 + VAR_2 - 10;
 while (VAR_5 < VAR_6 && (VAR_5 = FUNC_2(VAR_5, 0xE8, VAR_6 - VAR_5)) != ((void*)0)) {
  size_t VAR_7 = VAR_5 - (unsigned char *)VAR_1;
  int32_t VAR_8, VAR_9, VAR_10;

  VAR_8 = (int32_t)(VAR_3 + (uint32_t)VAR_7);
  VAR_10 = FUNC_0(&VAR_5[1]);
  if (VAR_10 >= -VAR_8 && VAR_10 < (int32_t)VAR_4->translation_size) {
   if (VAR_10 >= 0)
    VAR_9 = VAR_10 - VAR_8;
   else
    VAR_9 = VAR_10 + VAR_4->translation_size;
   FUNC_1(&VAR_5[1], (uint32_t)VAR_9);
  }
  VAR_5 += 5;
 }
}
