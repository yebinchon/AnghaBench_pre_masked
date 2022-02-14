
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vdev_path; } ;
typedef TYPE_1__ vdev_t ;
struct g_provider {int dummy; } ;
struct g_consumer {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 struct g_provider* FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct g_provider*) ;
 struct g_consumer* FUNC_4 (struct g_provider*,TYPE_1__*,int ) ;

__attribute__((used)) static struct g_consumer *
FUNC_5(vdev_t *VAR_2, int VAR_3)
{
 struct g_provider *VAR_4;
 struct g_consumer *VAR_5;

 FUNC_2();

 VAR_5 = ((void*)0);
 VAR_4 = FUNC_1(VAR_2->vdev_path + sizeof("/dev/") - 1);
 if (VAR_4 != ((void*)0)) {
  FUNC_0(1, "Found provider by name %s.", VAR_2->vdev_path);
  if (!VAR_3 || FUNC_3(VAR_2, VAR_4) == VAR_1)
   VAR_5 = FUNC_4(VAR_4, VAR_2, VAR_0);
 }

 return (VAR_5);
}
