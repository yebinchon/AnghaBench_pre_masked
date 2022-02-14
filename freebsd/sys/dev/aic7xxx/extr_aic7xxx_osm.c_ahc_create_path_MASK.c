
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct cam_path {int dummy; } ;
struct ahc_softc {TYPE_1__* platform_data; } ;
typedef int path_id_t ;
struct TYPE_2__ {int sim; int sim_b; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cam_path**,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct ahc_softc *VAR_0, char VAR_1, u_int VAR_2,
         u_int VAR_3, struct cam_path **VAR_4)
{
 path_id_t VAR_5;

 if (VAR_1 == 'B')
  VAR_5 = FUNC_0(VAR_0->platform_data->sim_b);
 else
  VAR_5 = FUNC_0(VAR_0->platform_data->sim);

 return (FUNC_1(VAR_4, ((void*)0),
    VAR_5, VAR_2, VAR_3));
}
