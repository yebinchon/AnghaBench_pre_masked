
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_buffer {scalar_t__ is_identifier; scalar_t__ last_token; } ;


 int FUNC_0 (struct macro_buffer*,char*,int) ;

__attribute__((used)) static void
FUNC_1 (struct macro_buffer *VAR_0, char *VAR_1, char *VAR_2)
{
  FUNC_0 (VAR_0, VAR_1, VAR_2 - VAR_1);
  VAR_0->last_token = 0;


  VAR_0->is_identifier = 0;
}
