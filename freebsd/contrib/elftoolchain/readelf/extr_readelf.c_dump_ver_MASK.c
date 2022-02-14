
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readelf {scalar_t__ vn_s; scalar_t__ vd_s; scalar_t__ vs; scalar_t__ ver; scalar_t__ vs_s; } ;


 int FUNC_0 (struct readelf*,int) ;
 int FUNC_1 (struct readelf*,int) ;
 int FUNC_2 (struct readelf*) ;

__attribute__((used)) static void
FUNC_3(struct readelf *VAR_0)
{

 if (VAR_0->vs_s && VAR_0->ver && VAR_0->vs)
  FUNC_2(VAR_0);
 if (VAR_0->vd_s)
  FUNC_0(VAR_0, 1);
 if (VAR_0->vn_s)
  FUNC_1(VAR_0, 1);
}
