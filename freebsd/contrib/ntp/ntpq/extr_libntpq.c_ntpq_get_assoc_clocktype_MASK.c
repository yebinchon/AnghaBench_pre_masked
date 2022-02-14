
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sockaddr_u ;
typedef int resultbuf ;
typedef int dstadr ;
typedef scalar_t__ associd_t ;
struct TYPE_2__ {scalar_t__ assid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,char*,int) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_5(
 int VAR_5
 )
{
 associd_t VAR_6;
 int VAR_7;
 int VAR_8;
 sockaddr_u VAR_9;
 char VAR_10[VAR_0];
 char VAR_11[VAR_1];

 if (VAR_5 < 0 || VAR_5 >= VAR_3)
  return -1;

 VAR_6 = VAR_2[VAR_5].assid;
 if (VAR_6 == VAR_4) {
  VAR_8 = FUNC_2("dstadr", VAR_10, sizeof(VAR_10));
 } else {
  VAR_7 = FUNC_4(VAR_6, VAR_11,
          sizeof(VAR_11));
  if (VAR_7 <= 0)
   return -1;
  VAR_8 = FUNC_3(VAR_11, VAR_7, "dstadr", VAR_10,
     sizeof(VAR_10));
 }

 if (0 != VAR_8 && FUNC_0(VAR_10, &VAR_9))
  return FUNC_1(&VAR_9);

 return -1;
}
