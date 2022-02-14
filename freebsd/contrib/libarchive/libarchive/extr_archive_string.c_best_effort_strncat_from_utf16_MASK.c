
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct archive_string_conv {int dummy; } ;
struct archive_string {size_t length; char* s; } ;


 int * FUNC_0 (struct archive_string*,size_t) ;
 int FUNC_1 (int*,char const*,size_t,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_string *VAR_0, const void *VAR_1,
    size_t VAR_2, struct archive_string_conv *VAR_3, int VAR_4)
{
 const char *VAR_5 = (const char *)VAR_1;
 char *VAR_6;
 uint32_t VAR_7;
 int VAR_8, VAR_9;

 (void)VAR_3;





 VAR_9 = 0;
 if (FUNC_0(VAR_0, VAR_0->length + VAR_2 +1) == ((void*)0))
  return (-1);
 VAR_6 = VAR_0->s + VAR_0->length;

 while ((VAR_8 = FUNC_1(&VAR_7, VAR_5, VAR_2, VAR_4)) != 0) {
  if (VAR_8 < 0) {
   VAR_8 *= -1;
   VAR_9 = -1;
  }
  VAR_2 -= VAR_8;
  VAR_5 += VAR_8;

  if (VAR_7 > 127) {

   *VAR_6++ = '?';
   VAR_9 = -1;
  } else
   *VAR_6++ = (char)VAR_7;
 }
 VAR_0->length = VAR_6 - VAR_0->s;
 VAR_0->s[VAR_0->length] = '\0';
 return (VAR_9);
}
