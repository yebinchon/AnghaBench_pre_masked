
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct pollfd {int dummy; } ;
typedef int nfds_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (struct pollfd*,int ,int) ;
 scalar_t__ VAR_1 ;
 struct pollfd* FUNC_3 (int ) ;
 int FUNC_4 (struct pollfd*,struct pollfd*,int ) ;
 int FUNC_5 (struct pollfd*,int ) ;
 int FUNC_6 (struct pollfd*,struct pollfd*,int ) ;

int FUNC_7(struct pollfd *VAR_2, nfds_t VAR_3, int VAR_4)
{
 struct timeval VAR_5, VAR_6;
 struct pollfd *VAR_7;
 uint32_t VAR_8 = 0;
 int VAR_9;

 do {
  VAR_9 = FUNC_5(VAR_2, VAR_3);
  if (VAR_9 || !VAR_4)
   return VAR_9;

  if (!VAR_8)
   FUNC_1(&VAR_5, ((void*)0));

  FUNC_1(&VAR_6, ((void*)0));
  VAR_8 = (VAR_6.tv_sec - VAR_5.tv_sec) * 1000000 +
       (VAR_6.tv_usec - VAR_5.tv_usec) + 1;
 } while (VAR_8 <= VAR_1);

 VAR_7 = FUNC_3(VAR_3);
 if (!VAR_7)
  return FUNC_0(VAR_0);

 do {
  VAR_9 = FUNC_4(VAR_7, VAR_2, VAR_3);
  if (VAR_9)
   break;

  VAR_9 = FUNC_2(VAR_7, VAR_3, VAR_4);
  if (VAR_9 <= 0)
   break;

  VAR_9 = FUNC_6(VAR_7, VAR_2, VAR_3);
 } while (!VAR_9);

 return VAR_9;
}
