
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_geom {int consumer; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio*,int ) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_0, struct g_geom *VAR_1)
{

 FUNC_0(VAR_0, "Sending request.");
 FUNC_2(VAR_0, FUNC_1(&VAR_1->consumer));
}
