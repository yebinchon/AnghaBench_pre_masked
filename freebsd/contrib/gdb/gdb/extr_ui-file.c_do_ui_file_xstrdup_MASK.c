
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct accumulated_ui_file {char* buffer; long length; } ;


 int FUNC_0 (char*,char const*,long) ;
 char* FUNC_1 (long) ;
 char* FUNC_2 (char*,long) ;

__attribute__((used)) static void
FUNC_3 (void *VAR_0, const char *VAR_1, long VAR_2)
{
  struct accumulated_ui_file *VAR_3 = VAR_0;
  if (VAR_3->buffer == ((void*)0))
    VAR_3->buffer = FUNC_1 (VAR_2 + 1);
  else
    VAR_3->buffer = FUNC_2 (VAR_3->buffer, VAR_3->length + VAR_2 + 1);
  FUNC_0 (VAR_3->buffer + VAR_3->length, VAR_1, VAR_2);
  VAR_3->length += VAR_2;
  VAR_3->buffer[VAR_3->length] = '\0';
}
