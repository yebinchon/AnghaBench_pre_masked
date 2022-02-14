
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* vdev_path; scalar_t__ vdev_guid; int vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef int uintmax_t ;
struct g_consumer {TYPE_1__* provider; } ;
struct TYPE_5__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ,...) ;
 int FUNC_1 () ;
 char* FUNC_2 (size_t,int ) ;
 int FUNC_3 (char*,size_t,char*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 struct g_consumer* FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static struct g_consumer *
FUNC_8(vdev_t *VAR_1)
{
 struct g_consumer *VAR_2;
 char *VAR_3;
 size_t VAR_4;

 FUNC_1();

 FUNC_0(1, "Searching by guids [%ju:%ju].",
  (uintmax_t)FUNC_4(VAR_1->vdev_spa), (uintmax_t)VAR_1->vdev_guid);
 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2 != ((void*)0)) {
  VAR_4 = FUNC_6(VAR_2->provider->name) + FUNC_6("/dev/") + 1;
  VAR_3 = FUNC_2(VAR_4, VAR_0);

  FUNC_3(VAR_3, VAR_4, "/dev/%s", VAR_2->provider->name);
  FUNC_5(VAR_1->vdev_path);
  VAR_1->vdev_path = VAR_3;

  FUNC_0(1, "Attach by guid [%ju:%ju] succeeded, provider %s.",
      (uintmax_t)FUNC_4(VAR_1->vdev_spa),
      (uintmax_t)VAR_1->vdev_guid, VAR_2->provider->name);
 } else {
  FUNC_0(1, "Search by guid [%ju:%ju] failed.",
      (uintmax_t)FUNC_4(VAR_1->vdev_spa),
      (uintmax_t)VAR_1->vdev_guid);
 }

 return (VAR_2);
}
