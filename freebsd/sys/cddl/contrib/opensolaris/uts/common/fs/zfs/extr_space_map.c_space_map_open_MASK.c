
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ sm_object; int * sm_os; int sm_shift; scalar_t__ sm_size; scalar_t__ sm_start; } ;
typedef TYPE_1__ space_map_t ;
typedef int objset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(space_map_t **VAR_1, objset_t *VAR_2, uint64_t VAR_3,
    uint64_t VAR_4, uint64_t VAR_5, uint8_t VAR_6)
{
 space_map_t *VAR_7;
 int VAR_8;

 FUNC_0(*VAR_1 == ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != 0);

 VAR_7 = FUNC_1(sizeof (space_map_t), VAR_0);

 VAR_7->sm_start = VAR_4;
 VAR_7->sm_size = VAR_5;
 VAR_7->sm_shift = VAR_6;
 VAR_7->sm_os = VAR_2;
 VAR_7->sm_object = VAR_3;

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 != 0) {
  FUNC_2(VAR_7);
  return (VAR_8);
 }
 *VAR_1 = VAR_7;

 return (0);
}
