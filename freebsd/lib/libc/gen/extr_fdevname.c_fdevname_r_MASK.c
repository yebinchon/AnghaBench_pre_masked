
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fiodgname_arg {char* buf; int len; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct fiodgname_arg*) ;

char *
FUNC_1(int VAR_1, char *VAR_2, int VAR_3)
{
 struct fiodgname_arg VAR_4;

 VAR_4.buf = VAR_2;
 VAR_4.len = VAR_3;

 if (FUNC_0(VAR_1, VAR_0, &VAR_4) == -1)
  return (((void*)0));
 return (VAR_2);
}
