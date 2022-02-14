
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct rsocket {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct timeval*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rsocket*,int,int (*) (struct rsocket*)) ;

__attribute__((used)) static int FUNC_2(struct rsocket *VAR_3, int VAR_4, int (*VAR_5)(struct rsocket *VAR_6))
{
 struct timeval VAR_7, VAR_8;
 uint32_t VAR_9 = 0;
 int VAR_10;

 do {
  VAR_10 = FUNC_1(VAR_3, 1, VAR_5);
  if (!VAR_10 || VAR_4 || VAR_1 != VAR_0)
   return VAR_10;

  if (!VAR_9)
   FUNC_0(&VAR_7, ((void*)0));

  FUNC_0(&VAR_8, ((void*)0));
  VAR_9 = (VAR_8.tv_sec - VAR_7.tv_sec) * 1000000 +
       (VAR_8.tv_usec - VAR_7.tv_usec) + 1;
 } while (VAR_9 <= VAR_2);

 VAR_10 = FUNC_1(VAR_3, 0, VAR_5);
 return VAR_10;
}
