
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {char* s; size_t buffer_length; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_string*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,size_t) ;

struct archive_string *
FUNC_2(struct archive_string *VAR_2, size_t VAR_3)
{
 char *VAR_4;
 size_t VAR_5;


 if (VAR_2->s && (VAR_3 <= VAR_2->buffer_length))
  return (VAR_2);
 if (VAR_2->buffer_length < 32)

  VAR_5 = 32;
 else if (VAR_2->buffer_length < 8192)

  VAR_5 = VAR_2->buffer_length + VAR_2->buffer_length;
 else {

  VAR_5 = VAR_2->buffer_length + VAR_2->buffer_length / 4;

  if (VAR_5 < VAR_2->buffer_length) {

   FUNC_0(VAR_2);
   VAR_1 = VAR_0;
   return (((void*)0));
  }
 }





 if (VAR_5 < VAR_3)
  VAR_5 = VAR_3;

 VAR_4 = (char *)FUNC_1(VAR_2->s, VAR_5);
 if (VAR_4 == ((void*)0)) {

  FUNC_0(VAR_2);
  VAR_1 = VAR_0;
  return (((void*)0));
 }

 VAR_2->s = VAR_4;
 VAR_2->buffer_length = VAR_5;
 return (VAR_2);
}
