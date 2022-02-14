
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {char* s; void* length; } ;


 int FUNC_0 (struct archive_string*,char*,size_t) ;
 char* FUNC_1 (char*,char) ;
 void* FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct archive_string *VAR_0,
    struct archive_string *VAR_1)
{
 char * VAR_2;
 size_t VAR_3;

 VAR_2 = FUNC_1(VAR_1->s, '|');
 if (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_2(VAR_2 + 1);
  FUNC_0(VAR_0, VAR_2+1, VAR_3);

  *VAR_2 = 0;
  VAR_1->length = FUNC_2(VAR_1->s);

  return (1);
 }
 return (0);
}
