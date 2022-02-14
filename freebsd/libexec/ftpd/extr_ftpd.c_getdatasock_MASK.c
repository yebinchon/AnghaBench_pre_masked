
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int on ;
struct TYPE_7__ {int su_family; } ;
struct TYPE_6__ {scalar_t__ su_family; int su_len; int su_port; } ;
struct TYPE_5__ {int pw_uid; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_3__ VAR_13 ;
 TYPE_2__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_17 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,int ,int*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static FILE *
FUNC_9(char *VAR_18)
{
 int VAR_19 = 1, VAR_20, VAR_21, VAR_22;

 if (VAR_12 >= 0)
  return (FUNC_2(VAR_12, VAR_18));

 VAR_20 = FUNC_7(VAR_13.su_family, VAR_7, 0);
 if (VAR_20 < 0)
  goto bad;
 if (FUNC_5(VAR_20, VAR_8, VAR_9, &VAR_19, sizeof(VAR_19)) < 0)
  FUNC_8(VAR_6, "data setsockopt (SO_REUSEADDR): %m");

 VAR_14 = VAR_11;
 VAR_14.su_port = FUNC_3(VAR_15);
 (void) FUNC_4(0);
 for (VAR_22 = 1; ; VAR_22++) {
  if (FUNC_0(VAR_20, (struct sockaddr *)&VAR_14,
      VAR_14.su_len) >= 0)
   break;
  if (VAR_16 != VAR_1 || VAR_22 > 10)
   goto bad;
  FUNC_6(VAR_22);
 }
 (void) FUNC_4(VAR_17->pw_uid);
 return (FUNC_2(VAR_20, VAR_18));
bad:

 VAR_21 = VAR_16;
 (void) FUNC_4(VAR_17->pw_uid);
 (void) FUNC_1(VAR_20);
 VAR_16 = VAR_21;
 return (((void*)0));
}
