
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct cmd {int dummy; } ;
struct TYPE_2__ {char* dev; scalar_t__ nsid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char**,struct cmd const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char**,scalar_t__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (char*,int*,int,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_7(const struct cmd *VAR_2, int VAR_3, char *VAR_4[])
{
 char *VAR_5;
 int VAR_6;
 uint32_t VAR_7;

 FUNC_0(VAR_3, VAR_4, VAR_2);

 FUNC_6(VAR_1.dev, &VAR_6, 1, 1);
 FUNC_3(VAR_6, &VAR_5, &VAR_7);
 if (VAR_7 != 0) {






  FUNC_1(VAR_6);
  FUNC_6(VAR_5, &VAR_6, 1, 1);
 }
 FUNC_2(VAR_5);
 if (VAR_1.nsid != VAR_0)
  VAR_7 = VAR_1.nsid;

 if (VAR_7 == 0)
  FUNC_4(VAR_6);
 else
  FUNC_5(VAR_6, VAR_7);
}
