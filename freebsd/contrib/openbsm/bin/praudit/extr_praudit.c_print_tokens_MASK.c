
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_4__ {scalar_t__ len; } ;
typedef TYPE_1__ tokenstr_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__*,int) ;
 int FUNC_1 (int ,TYPE_1__*,char*,int) ;
 int FUNC_2 (int *,scalar_t__**) ;
 char* VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char*,...) ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_8(FILE *VAR_7)
{
 u_char *VAR_8;
 tokenstr_t VAR_9;
 int VAR_10;
 int VAR_11;


 if (VAR_5) {
  u_char VAR_12 = 0;

  do {
   VAR_12 = FUNC_4(VAR_7);
  } while(VAR_12 != VAR_0);
  FUNC_7(VAR_12, VAR_7);
 }

 while ((VAR_10 = FUNC_2(VAR_7, &VAR_8)) != -1) {
  VAR_11 = 0;
  while (VAR_11 < VAR_10) {

   if (-1 == FUNC_0(&VAR_9, VAR_8 + VAR_11,
       VAR_10 - VAR_11))
    break;
   FUNC_1(VAR_6, &VAR_9, VAR_2, VAR_3);
   VAR_11 += VAR_9.len;
   if (VAR_4) {
    if (!(VAR_3 & VAR_1))
     FUNC_6("%s", VAR_2);
   } else
    FUNC_6("\n");
  }
  FUNC_5(VAR_8);
  if (VAR_4)
   FUNC_6("\n");
  FUNC_3(VAR_6);
 }
 return (0);
}
