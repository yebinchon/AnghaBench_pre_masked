
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_data {size_t sp_len; size_t sp_size; char* sp_buf; } ;



__attribute__((used)) static int
FUNC_0(char VAR_0, void *VAR_1)
{
 struct sp_data *VAR_2;

 VAR_2 = VAR_1;
 if (VAR_2->sp_len < VAR_2->sp_size)
  VAR_2->sp_buf[VAR_2->sp_len++] = VAR_0;
 VAR_2->sp_buf[VAR_2->sp_len] = '\0';
 return (1);
}
