
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,int,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1)
{
 int VAR_2 = (int)(VAR_0 % (24 * 60 * 60));

 FUNC_0("%02d:%02d:%02d %s ", VAR_2 / (60 * 60), (VAR_2 / 60) % 60, VAR_2 % 60, VAR_1);
}
