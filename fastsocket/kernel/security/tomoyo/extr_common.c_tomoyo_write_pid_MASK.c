
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_io_buffer {int read_step; int read_eof; int write_buf; } ;


 int FUNC_0 (int ,int,unsigned long*) ;

__attribute__((used)) static int FUNC_1(struct tomoyo_io_buffer *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(VAR_0->write_buf, 10, &VAR_1);
 VAR_0->read_step = (int) VAR_1;
 VAR_0->read_eof = 0;
 return 0;
}
