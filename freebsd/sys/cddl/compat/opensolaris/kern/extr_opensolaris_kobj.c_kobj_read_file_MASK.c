
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _buf {scalar_t__ mounted; } ;


 int FUNC_0 (struct _buf*,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct _buf*,char*,unsigned int,unsigned int) ;

int
FUNC_2(struct _buf *VAR_0, char *VAR_1, unsigned VAR_2, unsigned VAR_3)
{

 if (VAR_0->mounted)
  return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3));
 else
  return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3));
}
