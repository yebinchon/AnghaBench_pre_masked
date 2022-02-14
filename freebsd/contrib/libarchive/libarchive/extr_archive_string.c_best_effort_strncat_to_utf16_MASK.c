
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int dummy; } ;
struct archive_string {size_t length; char* s; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 int * FUNC_2 (struct archive_string*,size_t) ;

__attribute__((used)) static int
FUNC_3(struct archive_string *VAR_1, const void *VAR_2,
    size_t VAR_3, struct archive_string_conv *VAR_4, int VAR_5)
{
 const char *VAR_6 = (const char *)VAR_2;
 char *VAR_7;
 size_t VAR_8;
 int VAR_9;

 (void)VAR_4;





 VAR_9 = 0;
 VAR_8 = VAR_3;

 if (FUNC_2(VAR_1,
     VAR_1->length + (VAR_3 + 1) * 2) == ((void*)0))
  return (-1);

 VAR_7 = VAR_1->s + VAR_1->length;
 while (VAR_8--) {
  unsigned VAR_10 = *VAR_6++;
  if (VAR_10 > 127) {

   VAR_10 = VAR_0;
   VAR_9 = -1;
  }
  if (VAR_5)
   FUNC_0(VAR_7, VAR_10);
  else
   FUNC_1(VAR_7, VAR_10);
  VAR_7 += 2;
 }
 VAR_1->length = VAR_7 - VAR_1->s;
 VAR_1->s[VAR_1->length] = 0;
 VAR_1->s[VAR_1->length+1] = 0;
 return (VAR_9);
}
