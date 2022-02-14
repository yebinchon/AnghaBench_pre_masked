
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int enabled; int timeout_write; int ev_write; int output; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,void*,size_t) ;

int
FUNC_2(struct bufferevent *VAR_1, void *VAR_2, size_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->output, VAR_2, VAR_3);

 if (VAR_4 == -1)
  return (VAR_4);


 if (VAR_3 > 0 && (VAR_1->enabled & VAR_0))
  FUNC_0(&VAR_1->ev_write, VAR_1->timeout_write);

 return (VAR_4);
}
