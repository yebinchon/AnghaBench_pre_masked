
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_io_buffer {int read_eof; } ;


 int FUNC_0 (struct tomoyo_io_buffer*,char*) ;

__attribute__((used)) static int FUNC_1(struct tomoyo_io_buffer *VAR_0)
{
 if (!VAR_0->read_eof) {
  FUNC_0(VAR_0, "2.2.0");
  VAR_0->read_eof = 1;
 }
 return 0;
}
