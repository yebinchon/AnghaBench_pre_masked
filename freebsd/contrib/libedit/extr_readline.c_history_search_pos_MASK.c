
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int str; } ;
typedef TYPE_1__ HistEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_1__*,int ,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,char const*) ;

int
FUNC_3(const char *VAR_6,
     int VAR_7 __attribute__((__unused__)), int VAR_8)
{
 HistEvent VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = (VAR_8 > 0) ? VAR_8 : -VAR_8;
 VAR_8 = (VAR_8 > 0) ? 1 : -1;

 if (FUNC_0(VAR_5, &VAR_9, VAR_0) != 0)
  return -1;
 VAR_10 = VAR_9.num;

 if (!FUNC_1(VAR_11) || FUNC_0(VAR_5, &VAR_9, VAR_0) != 0)
  return -1;

 for (;;) {
  if (FUNC_2(VAR_9.str, VAR_6))
   return VAR_11;
  if (FUNC_0(VAR_5, &VAR_9, (VAR_8 < 0) ? VAR_3 : VAR_1) != 0)
   break;
 }


 (void)FUNC_0(VAR_5, &VAR_9,
     VAR_8 < 0 ? VAR_2 : VAR_4, VAR_10);

 return -1;
}
