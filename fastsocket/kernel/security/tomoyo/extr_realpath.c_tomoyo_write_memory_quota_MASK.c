
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_io_buffer {char* write_buf; } ;


 int FUNC_0 (char*,char*,unsigned int*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

int FUNC_1(struct tomoyo_io_buffer *VAR_2)
{
 char *VAR_3 = VAR_2->write_buf;
 unsigned int VAR_4;

 if (FUNC_0(VAR_3, "Shared: %u", &VAR_4) == 1)
  VAR_1 = VAR_4;
 else if (FUNC_0(VAR_3, "Private: %u", &VAR_4) == 1)
  VAR_0 = VAR_4;
 return 0;
}
