
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _buf {int ptr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,unsigned int) ;
 char* FUNC_1 (int ) ;

int
FUNC_2(struct _buf *VAR_1, char *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 char *VAR_5;

 VAR_5 = FUNC_1(VAR_1->ptr);
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 FUNC_0(VAR_5 + VAR_4, VAR_2, VAR_3);
 return (0);
}
