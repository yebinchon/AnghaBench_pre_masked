
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__* res_state ;
struct TYPE_5__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*,char const*,char const*,int,int) ;
 int FUNC_2 (TYPE_1__*,char const*,int,int,int *,int) ;
 int FUNC_3 (char*,char*,char const*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,int) ;

int
FUNC_6(res_state VAR_3,
     const char *VAR_4,
     const char *VAR_5,
     int VAR_6, int VAR_7,
     u_char *VAR_8,
     int VAR_9)
{
 char VAR_10[VAR_0];
 const char *VAR_11 = VAR_10;
 int VAR_12, VAR_13;






 if (VAR_5 == ((void*)0)) {




  VAR_12 = FUNC_4(VAR_4);
  if (VAR_12 >= VAR_0) {
   FUNC_0(VAR_3, VAR_1);
   return (-1);
  }
  VAR_12--;
  if (VAR_12 >= 0 && VAR_4[VAR_12] == '.') {
   FUNC_5(VAR_10, VAR_4, VAR_12);
   VAR_10[VAR_12] = '\0';
  } else
   VAR_11 = VAR_4;
 } else {
  VAR_12 = FUNC_4(VAR_4);
  VAR_13 = FUNC_4(VAR_5);
  if (VAR_12 + VAR_13 + 1 >= VAR_0) {
   FUNC_0(VAR_3, VAR_1);
   return (-1);
  }
  FUNC_3(VAR_10, "%s.%s", VAR_4, VAR_5);
 }
 return (FUNC_2(VAR_3, VAR_11, VAR_6, VAR_7, VAR_8, VAR_9));
}
