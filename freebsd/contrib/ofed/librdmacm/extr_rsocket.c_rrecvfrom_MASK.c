
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rsocket {scalar_t__ type; int rlock; } ;
typedef int ssize_t ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rsocket*,void*,size_t,int,struct sockaddr*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct rsocket* FUNC_3 (int *,int) ;
 int FUNC_4 (int,struct sockaddr*,int *) ;
 int FUNC_5 (int,void*,size_t,int) ;

ssize_t FUNC_6(int VAR_2, void *VAR_3, size_t VAR_4, int VAR_5,
    struct sockaddr *VAR_6, socklen_t *VAR_7)
{
 struct rsocket *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(&VAR_1, VAR_2);
 if (VAR_8->type == VAR_0) {
  FUNC_1(&VAR_8->rlock);
  VAR_9 = FUNC_0(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_2(&VAR_8->rlock);
  return VAR_9;
 }

 VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_9 > 0 && VAR_6)
  FUNC_4(VAR_2, VAR_6, VAR_7);

 return VAR_9;
}
