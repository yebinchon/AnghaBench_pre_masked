
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser_temp {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,size_t) ;
 int FUNC_1 (char*) ;
 struct parser_temp* VAR_2 ;

__attribute__((used)) static void *
FUNC_2(void *VAR_3, size_t VAR_4)
{
 struct parser_temp *VAR_5;

 VAR_0;
 VAR_5 = VAR_2;
 if (VAR_3 != VAR_5->data)
  FUNC_1("bug: parser_temp_realloc misused");
 VAR_5->data = FUNC_0(VAR_5->data, VAR_4);
 VAR_1;
 return VAR_5->data;
}
