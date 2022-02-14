
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct pollfd {int dummy; } ;
typedef int fd_set ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pollfd*) ;
 int FUNC_3 (struct pollfd*,int,int ) ;
 int FUNC_4 (struct timeval*) ;
 int FUNC_5 (int,struct pollfd*,int *,int *,int *) ;
 struct pollfd* FUNC_6 (int*,int *,int *,int *) ;

int FUNC_7(int VAR_1, fd_set *VAR_2, fd_set *VAR_3,
     fd_set *VAR_4, struct timeval *VAR_5)
{
 struct pollfd *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(&VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_6)
  return FUNC_0(VAR_0);

 VAR_7 = FUNC_3(VAR_6, VAR_1, FUNC_4(VAR_5));

 if (VAR_2)
  FUNC_1(VAR_2);
 if (VAR_3)
  FUNC_1(VAR_3);
 if (VAR_4)
  FUNC_1(VAR_4);

 if (VAR_7 > 0)
  VAR_7 = FUNC_5(VAR_1, VAR_6, VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_6);
 return VAR_7;
}
