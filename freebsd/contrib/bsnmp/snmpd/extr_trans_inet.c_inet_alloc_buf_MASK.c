
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_input {int buflen; int fd; int * buf; } ;
typedef int drop_buf ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_3(struct port_input *VAR_0)
{
 char VAR_1[2000];

 if (VAR_0->buf == ((void*)0)) {
  if ((VAR_0->buf = FUNC_0(0)) == ((void*)0)) {
   (void)FUNC_2(VAR_0->fd, VAR_1, sizeof(VAR_1),
       0, ((void*)0), ((void*)0));
   return (-1);
  }
  VAR_0->buflen = FUNC_1(0);
 }
 return (0);
}
