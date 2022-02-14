
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(u64 VAR_3, char *VAR_4)
{
 char *VAR_5;

 if (FUNC_0(VAR_3, VAR_1))
  VAR_5 = "allow";
 else if (FUNC_0(VAR_3, VAR_2))
  VAR_5 = "deny";
 else
  VAR_5 = "off";

 return FUNC_1(VAR_4, VAR_0, "%s\n", VAR_5);
}
