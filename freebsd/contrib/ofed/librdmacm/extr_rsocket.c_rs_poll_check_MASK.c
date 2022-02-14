
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsocket {int dummy; } ;
struct pollfd {scalar_t__ revents; int events; int fd; } ;
typedef int nfds_t ;


 int VAR_0 ;
 struct rsocket* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pollfd*,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct rsocket*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct pollfd *VAR_2, nfds_t VAR_3)
{
 struct rsocket *VAR_4;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_0(&VAR_0, VAR_2[VAR_5].fd);
  if (VAR_4)
   VAR_2[VAR_5].revents = FUNC_2(VAR_4, VAR_2[VAR_5].events, 1, VAR_1);
  else
   FUNC_1(&VAR_2[VAR_5], 1, 0);

  if (VAR_2[VAR_5].revents)
   VAR_6++;
 }
 return VAR_6;
}
