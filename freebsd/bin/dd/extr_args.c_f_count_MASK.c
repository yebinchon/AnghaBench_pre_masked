
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ,char*,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(char *VAR_4)
{
 uintmax_t VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 == VAR_1)
  FUNC_0(1, VAR_0, "%s", VAR_3);
 if (VAR_5 == 0)
  VAR_2 = VAR_1;
 else
  VAR_2 = VAR_5;
}
