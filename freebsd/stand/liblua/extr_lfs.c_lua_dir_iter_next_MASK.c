
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dirent {int d_name; } ;
typedef int lua_State ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int,char*) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ) ;
 struct dirent* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_1)
{
 struct dirent *VAR_2;
 DIR *VAR_3, **VAR_4;

 VAR_4 = (DIR **)FUNC_2(VAR_1, 1, VAR_0);
 VAR_3 = *VAR_4;
 FUNC_1(VAR_1, VAR_3 != ((void*)0), 1, "closed directory");

 VAR_2 = FUNC_4(VAR_3->fd);
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_3);
  *VAR_4 = ((void*)0);
  return 0;
 }

 FUNC_3(VAR_1, VAR_2->d_name);
 return 1;
}
