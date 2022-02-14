
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,char const*,size_t,int*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (size_t,char const*,size_t,int*) ;
 TYPE_1__* VAR_3 ;

int FUNC_4(u8 VAR_4, const char *VAR_5, u8 VAR_6, int VAR_7,
       int *VAR_8)
{
 int VAR_9, VAR_10 = -1;

 if (FUNC_1(&VAR_3[VAR_4].mutex) != 0) {
  *VAR_8 = -VAR_0;
  return 1;
 }
 if (VAR_7 == 1)
  VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6, &VAR_10);
 else
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_10);
 FUNC_2(&VAR_3[VAR_4].mutex);


 if (VAR_10 == -1) {
  *VAR_8 = -VAR_1;
  return 0;
 }

 *VAR_8 = VAR_10;
 if (!VAR_9)
  *VAR_8 = -VAR_2;
 return 1;
}
