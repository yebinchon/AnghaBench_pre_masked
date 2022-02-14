
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdev_state_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(int VAR_1, const char *VAR_2, vdev_state_t VAR_3)
{
 char VAR_4[512];
 int VAR_5;

 VAR_4[0] = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_2(VAR_4, "  ");
 FUNC_2(VAR_4, VAR_2);

 return (FUNC_0(VAR_0, VAR_4, FUNC_1(VAR_3)));
}
