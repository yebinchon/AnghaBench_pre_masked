
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* vdev_physpath; int vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
struct g_consumer {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct g_consumer*,int*,char*) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void
FUNC_8(vdev_t *VAR_5, struct g_consumer *VAR_6,
         boolean_t VAR_7)
{
 boolean_t VAR_8 = VAR_0;
 char *VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = VAR_1;
 VAR_9 = FUNC_2(VAR_11, VAR_2|VAR_3);
 VAR_10 = FUNC_1("GEOM::physpath", VAR_6, &VAR_11, VAR_9);
 if (VAR_10 == 0) {
  char *VAR_12;


  FUNC_3();
  VAR_12 = VAR_5->vdev_physpath;
  VAR_5->vdev_physpath = FUNC_5(VAR_9);

  if (VAR_12 != ((void*)0)) {
   VAR_8 = (FUNC_7(VAR_12,
      VAR_5->vdev_physpath) != 0);
   FUNC_6(VAR_12);
  } else
   VAR_8 = VAR_7;
 }
 FUNC_0(VAR_9);






 if (VAR_8)
  FUNC_4(VAR_5->vdev_spa, VAR_4);

}
