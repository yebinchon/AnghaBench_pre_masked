
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int off; int buffer; } ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int ,int*,int *) ;
 int FUNC_1 (struct evbuffer*,int) ;
 int FUNC_2 (int,int ,int ) ;

int
FUNC_3(struct evbuffer *VAR_0, int VAR_1)
{
 int VAR_2;





 VAR_2 = FUNC_2(VAR_1, VAR_0->buffer, VAR_0->off);
 if (VAR_2 == -1)
  return (-1);
 if (VAR_2 == 0)
  return (0);
 FUNC_1(VAR_0, VAR_2);

 return (VAR_2);
}
