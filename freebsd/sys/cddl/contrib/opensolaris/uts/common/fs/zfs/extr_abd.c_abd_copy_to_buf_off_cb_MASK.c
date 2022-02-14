
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf_arg {char* arg_buf; } ;


 int FUNC_0 (char*,void*,size_t) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, size_t VAR_1, void *VAR_2)
{
 struct buf_arg *VAR_3 = VAR_2;

 (void) FUNC_0(VAR_3->arg_buf, VAR_0, VAR_1);
 VAR_3->arg_buf = (char *)VAR_3->arg_buf + VAR_1;

 return (0);
}
