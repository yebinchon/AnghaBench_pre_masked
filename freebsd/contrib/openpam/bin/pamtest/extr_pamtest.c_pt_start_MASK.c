
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * conv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*,TYPE_1__*,int *) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (char*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_4, const char *VAR_5)
{
 int VAR_6;

 VAR_2.conv = &VAR_1;
 FUNC_2("pam_start(%s, %s)", VAR_4, VAR_5);
 if ((VAR_6 = FUNC_0(VAR_4, VAR_5, &VAR_2, &VAR_3)) != VAR_0)
  FUNC_1(VAR_6, "pam_start(%s)", VAR_4);
 return (VAR_6);
}
