
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int smp_engine_t ;
struct TYPE_6__ {int path; } ;
typedef TYPE_1__ ibnd_smp_t ;
struct TYPE_7__ {int numports; } ;
typedef TYPE_2__ ibnd_node_t ;


 int FUNC_0 (int *,int *,TYPE_2__*,int) ;
 int FUNC_1 (int *,TYPE_1__*,int *,void*) ;

__attribute__((used)) static int FUNC_2(smp_engine_t * VAR_0, ibnd_smp_t * VAR_1,
      uint8_t * VAR_2, void *VAR_3)
{
 ibnd_node_t *VAR_4 = VAR_3;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 for (VAR_5 = 1; VAR_5 <= VAR_4->numports; VAR_5++)
  FUNC_0(VAR_0, &VAR_1->path, VAR_4, VAR_5);

 return VAR_6;
}
