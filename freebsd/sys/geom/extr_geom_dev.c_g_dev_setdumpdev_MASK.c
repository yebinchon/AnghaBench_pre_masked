
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_kerneldump {int di; int length; scalar_t__ offset; } ;
struct g_consumer {int dummy; } ;
struct diocskerneldump_arg {scalar_t__ kda_index; } ;
struct cdev {int si_flags; struct g_consumer* si_drv2; } ;
typedef int kd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cdev*) ;
 int FUNC_2 (int *,int ,struct diocskerneldump_arg*) ;
 int FUNC_3 (char*,struct g_consumer*,int*,struct g_kerneldump*) ;
 int FUNC_4 (struct g_kerneldump*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_3, struct diocskerneldump_arg *VAR_4)
{
 struct g_kerneldump VAR_5;
 struct g_consumer *VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_3 != ((void*)0) && VAR_4 != ((void*)0));
 FUNC_0(VAR_4->kda_index != VAR_0);

 VAR_6 = VAR_3->si_drv2;
 VAR_8 = sizeof(VAR_5);
 FUNC_4(&VAR_5, 0, VAR_8);
 VAR_5.offset = 0;
 VAR_5.length = VAR_1;
 VAR_7 = FUNC_3("GEOM::kerneldump", VAR_6, &VAR_8, &VAR_5);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_7 = FUNC_2(&VAR_5.di, FUNC_1(VAR_3), VAR_4);
 if (VAR_7 == 0)
  VAR_3->si_flags |= VAR_2;

 return (VAR_7);
}
