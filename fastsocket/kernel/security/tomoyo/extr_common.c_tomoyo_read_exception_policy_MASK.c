
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_io_buffer {int read_eof; int read_step; int * read_var2; } ;


 int VAR_0 ;
 int FUNC_0 (struct tomoyo_io_buffer*) ;
 int FUNC_1 (struct tomoyo_io_buffer*) ;
 int FUNC_2 (struct tomoyo_io_buffer*) ;
 int FUNC_3 (struct tomoyo_io_buffer*) ;
 int FUNC_4 (struct tomoyo_io_buffer*) ;
 int FUNC_5 (struct tomoyo_io_buffer*) ;

__attribute__((used)) static int FUNC_6(struct tomoyo_io_buffer *VAR_1)
{
 if (!VAR_1->read_eof) {
  switch (VAR_1->read_step) {
  case 0:
   VAR_1->read_var2 = ((void*)0);
   VAR_1->read_step = 1;
  case 1:
   if (!FUNC_2(VAR_1))
    break;
   VAR_1->read_var2 = ((void*)0);
   VAR_1->read_step = 2;
  case 2:
   if (!FUNC_4(VAR_1))
    break;
   VAR_1->read_var2 = ((void*)0);
   VAR_1->read_step = 3;
  case 3:
   VAR_1->read_var2 = ((void*)0);
   VAR_1->read_step = 4;
  case 4:
   if (!FUNC_1(VAR_1))
    break;
   VAR_1->read_var2 = ((void*)0);
   VAR_1->read_step = 5;
  case 5:
   if (!FUNC_0(VAR_1))
    break;
   VAR_1->read_var2 = ((void*)0);
   VAR_1->read_step = 6;
  case 6:
   VAR_1->read_var2 = ((void*)0);
   VAR_1->read_step = 7;
  case 7:
   if (!FUNC_3(VAR_1))
    break;
   VAR_1->read_var2 = ((void*)0);
   VAR_1->read_step = 8;
  case 8:
   if (!FUNC_5(VAR_1))
    break;
   VAR_1->read_var2 = ((void*)0);
   VAR_1->read_step = 9;
  case 9:
   VAR_1->read_eof = 1;
   break;
  default:
   return -VAR_0;
  }
 }
 return 0;
}
