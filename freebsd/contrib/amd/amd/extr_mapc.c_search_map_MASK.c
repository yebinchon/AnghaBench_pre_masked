
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* search ) (TYPE_1__*,int ,char*,char**,int *) ;int map_name; int modify; } ;
typedef TYPE_1__ mnt_map ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,char*,char**,int *) ;

__attribute__((used)) static int
FUNC_3(mnt_map *VAR_1, char *VAR_2, char **VAR_3)
{
  int VAR_4;

  do {
    VAR_4 = (*VAR_1->search) (VAR_1, VAR_1->map_name, VAR_2, VAR_3, &VAR_1->modify);
    if (VAR_4 < 0) {
      FUNC_1(VAR_0, "Re-synchronizing cache for map %s", VAR_1->map_name);
      FUNC_0(VAR_1);
    }
  } while (VAR_4 < 0);

  return VAR_4;
}
