
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ uint32_t ;
struct archive_string_conv {int dummy; } ;
struct archive_string {size_t length; char* s; int buffer_length; } ;
typedef int shift_state ;
typedef int mbstate_t ;


 char* VAR_0 ;
 int FUNC_0 (scalar_t__*,char const*,size_t) ;
 int * FUNC_1 (struct archive_string*,size_t) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 scalar_t__ FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(struct archive_string *VAR_1,
    const void *VAR_2, size_t VAR_3, struct archive_string_conv *VAR_4)
{
 const char *VAR_5;
 int VAR_6;
 char *VAR_7;
 char *VAR_8;
 uint32_t VAR_9;






 FUNC_4(((void*)0), L'\0');

 (void)VAR_4;





 if (FUNC_1(VAR_1, VAR_1->length + VAR_3 + 1) == ((void*)0))
  return (-1);

 VAR_5 = (const char *)VAR_2;
 VAR_7 = VAR_1->s + VAR_1->length;
 VAR_8 = VAR_1->s + VAR_1->buffer_length - VAR_0 -1;
 while ((VAR_6 = FUNC_0(&VAR_9, VAR_5, VAR_3)) != 0) {
  wchar_t VAR_10;

  if (VAR_7 >= VAR_8) {
   VAR_1->length = VAR_7 - VAR_1->s;

   if (FUNC_1(VAR_1,
       VAR_1->length + VAR_3 * 2 + 1) == ((void*)0))
    return (-1);
   VAR_7 = VAR_1->s + VAR_1->length;
   VAR_8 = VAR_1->s + VAR_1->buffer_length - VAR_0 -1;
  }





  if (VAR_6 < 0) {
   VAR_6 *= -1;
   VAR_10 = L'?';
  } else
   VAR_10 = (wchar_t)VAR_9;

  VAR_5 += VAR_6;
  VAR_3 -= VAR_6;






  VAR_6 = (int)FUNC_4(VAR_7, VAR_10);

  if (VAR_6 == -1)
   return (-1);
  VAR_7 += VAR_6;
 }
 VAR_1->length = VAR_7 - VAR_1->s;
 VAR_1->s[VAR_1->length] = '\0';
 return (0);
}
