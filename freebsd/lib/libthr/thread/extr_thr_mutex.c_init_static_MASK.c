
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;
typedef scalar_t__ pthread_mutex_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct pthread *VAR_6, pthread_mutex_t *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_6, &VAR_3);

 if (*VAR_7 == VAR_1)
  VAR_8 = FUNC_2(VAR_7, &VAR_5,
      VAR_2);
 else if (*VAR_7 == VAR_0)
  VAR_8 = FUNC_2(VAR_7, &VAR_4,
      VAR_2);
 else
  VAR_8 = 0;
 FUNC_1(VAR_6, &VAR_3);

 return (VAR_8);
}
