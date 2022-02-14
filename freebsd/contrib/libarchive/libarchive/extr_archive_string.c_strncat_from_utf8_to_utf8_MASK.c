
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct archive_string_conv {int dummy; } ;
struct archive_string {size_t length; char* s; int buffer_length; } ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (struct archive_string*,size_t) ;
 int FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (char*,char const*,int) ;
 size_t FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int *,char const*,size_t) ;

__attribute__((used)) static int
FUNC_6(struct archive_string *VAR_0, const void *VAR_1,
    size_t VAR_2, struct archive_string_conv *VAR_3)
{
 const char *VAR_4;
 char *VAR_5, *VAR_6;
 int VAR_7, VAR_8 = 0;

 (void)VAR_3;

 if (FUNC_1(VAR_0, VAR_0->length + VAR_2 + 1) == ((void*)0))
  return (-1);

 VAR_4 = (const char *)VAR_1;
 VAR_5 = VAR_0->s + VAR_0->length;
 VAR_6 = VAR_0->s + VAR_0->buffer_length -1;
 do {
  uint32_t VAR_9;
  const char *VAR_10 = VAR_4;
  size_t VAR_11;




  while ((VAR_7 = FUNC_5(&VAR_9, VAR_4, VAR_2)) > 0) {
   VAR_4 += VAR_7;
   VAR_2 -= VAR_7;
  }
  if (VAR_10 < VAR_4) {
   if (VAR_5 + (VAR_4 - VAR_10) > VAR_6) {
    VAR_0->length = VAR_5 - VAR_0->s;
    if (FUNC_1(VAR_0,
        VAR_0->buffer_length + VAR_2 + 1) == ((void*)0))
     return (-1);
    VAR_5 = VAR_0->s + VAR_0->length;
    VAR_6 = VAR_0->s + VAR_0->buffer_length -1;
   }

   FUNC_3(VAR_5, VAR_10, VAR_4 - VAR_10);
   VAR_5 += VAR_4 - VAR_10;
  }




  if (VAR_7 < 0) {
   if (VAR_7 == -3 && FUNC_0(VAR_9)) {

    VAR_7 = FUNC_2(&VAR_9, VAR_4, VAR_2);
   }
   if (VAR_7 < 0) {
    VAR_8 = -1;
    VAR_7 *= -1;
   }


   while ((VAR_11 = FUNC_4(VAR_5, VAR_6 - VAR_5, VAR_9)) == 0) {
    VAR_0->length = VAR_5 - VAR_0->s;
    if (FUNC_1(VAR_0,
        VAR_0->buffer_length + VAR_2 + 1) == ((void*)0))
     return (-1);
    VAR_5 = VAR_0->s + VAR_0->length;
    VAR_6 = VAR_0->s + VAR_0->buffer_length -1;
   }
   VAR_5 += VAR_11;
   VAR_4 += VAR_7;
   VAR_2 -= VAR_7;
  }
 } while (VAR_7 > 0);
 VAR_0->length = VAR_5 - VAR_0->s;
 VAR_0->s[VAR_0->length] = '\0';
 return (VAR_8);
}
