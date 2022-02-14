
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cpp_strbuf {size_t len; size_t asize; size_t* text; } ;
typedef size_t cppchar_t ;
typedef int cpp_reader ;


 void* FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int ,size_t*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (size_t) ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_5, cppchar_t VAR_6,
       struct _cpp_strbuf *VAR_7, bool VAR_8)
{
  if (VAR_8)
    {


      bool VAR_9 = FUNC_0 (VAR_5, VAR_1);
      size_t VAR_10 = FUNC_0 (VAR_5, VAR_4);
      size_t VAR_11 = FUNC_0 (VAR_5, VAR_2);
      size_t VAR_12 = FUNC_2 (VAR_11);
      size_t VAR_13 = VAR_10 / VAR_11;
      size_t VAR_14;
      size_t VAR_15 = VAR_7->len;
      cppchar_t VAR_16;

      if (VAR_7->len + VAR_13 > VAR_7->asize)
 {
   VAR_7->asize += VAR_0;
   VAR_7->text = FUNC_1 (VAR_3, VAR_7->text, VAR_7->asize);
 }

      for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
 {
   VAR_16 = VAR_6 & VAR_12;
   VAR_6 >>= VAR_11;
   VAR_7->text[VAR_15 + (VAR_9 ? VAR_13 - VAR_14 - 1 : VAR_14)] = VAR_16;
 }
      VAR_7->len += VAR_13;
    }
  else
    {


      if (VAR_7->len + 1 > VAR_7->asize)
 {
   VAR_7->asize += VAR_0;
   VAR_7->text = FUNC_1 (VAR_3, VAR_7->text, VAR_7->asize);
 }
      VAR_7->text[VAR_7->len++] = VAR_6;
    }
}
