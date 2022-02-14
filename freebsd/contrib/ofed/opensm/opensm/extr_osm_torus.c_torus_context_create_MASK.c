
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct torus_context {TYPE_1__* osm; } ;
struct TYPE_3__ {int log; } ;
typedef TYPE_1__ osm_opensm_t ;


 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_0 ;
 struct torus_context* FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static
struct torus_context *FUNC_3(osm_opensm_t *VAR_2)
{
 struct torus_context *VAR_3;

 VAR_3 = FUNC_1(1, sizeof(*VAR_3));
 if (VAR_3)
  VAR_3->osm = VAR_2;
 else
  FUNC_0(&VAR_2->log, VAR_0,
   "ERR 4E01: calloc: %s\n", FUNC_2(VAR_1));

 return VAR_3;
}
