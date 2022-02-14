
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * name; } ;
struct priv_fw {TYPE_1__ fw; } ;


 int VAR_0 ;
 int FUNC_0 (struct priv_fw*) ;
 struct priv_fw* VAR_1 ;
 scalar_t__ FUNC_1 (char const*,int *) ;

__attribute__((used)) static struct priv_fw *
FUNC_2(const char *VAR_2, struct priv_fw **VAR_3)
{
 struct priv_fw *VAR_4 = ((void*)0);
 struct priv_fw *VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_5;
 *VAR_3 = ((void*)0);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = &VAR_1[VAR_6];
  if (VAR_4->fw.name != ((void*)0) && FUNC_1(VAR_2, VAR_4->fw.name) == 0)
   break;
  else if (!FUNC_0(VAR_4))
   *VAR_3 = VAR_4;
 }
 return (VAR_6 < VAR_0 ) ? VAR_4 : ((void*)0);
}
