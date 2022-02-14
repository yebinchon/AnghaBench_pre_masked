
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_2__ {scalar_t__ pw_uid; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int,char const*) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static FILE *
FUNC_13(const char *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12;

 if (VAR_4 >= 0)
  return (FUNC_3(VAR_4, VAR_8));
 if (FUNC_4(0) < 0)
  FUNC_2("Failed to seteuid");
 VAR_10 = FUNC_6(VAR_9, VAR_2, 0);
 if (VAR_10 < 0)
  goto bad;
 FUNC_10 (VAR_10, 1);

 FUNC_9 (VAR_5,
         FUNC_7 (VAR_3),
         FUNC_8 (VAR_5));

 for (VAR_12 = 1; ; VAR_12++) {
  if (FUNC_0(VAR_10, VAR_5,
    FUNC_12 (VAR_5)) >= 0)
   break;
  if (VAR_6 != VAR_0 || VAR_12 > 10)
   goto bad;
  FUNC_5(VAR_12);
 }
 if (FUNC_4(VAR_7->pw_uid) < 0)
  FUNC_2("Failed to seteuid");



 return (FUNC_3(VAR_10, VAR_8));
bad:

 VAR_11 = VAR_6;
 if (FUNC_4((uid_t)VAR_7->pw_uid) < 0)
  FUNC_2("Failed to seteuid");
 FUNC_1(VAR_10);
 VAR_6 = VAR_11;
 return (((void*)0));
}
