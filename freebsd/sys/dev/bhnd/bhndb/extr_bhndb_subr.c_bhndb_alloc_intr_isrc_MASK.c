
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhndb_intr_isrc {int is_rid; int * is_res; int is_owner; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int*,int ,int ,int ,int ) ;
 int FUNC_1 (struct bhndb_intr_isrc*,int ) ;
 struct bhndb_intr_isrc* FUNC_2 (int,int ,int ) ;

struct bhndb_intr_isrc *
FUNC_3(device_t VAR_3, int VAR_4, rman_res_t VAR_5, rman_res_t VAR_6,
    rman_res_t VAR_7, u_int VAR_8)
{
 struct bhndb_intr_isrc *VAR_9;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0, VAR_1);
 if (VAR_9 == ((void*)0))
  return (((void*)0));

 VAR_9->is_owner = VAR_3;
 VAR_9->is_rid = VAR_4;
 VAR_9->is_res = FUNC_0(VAR_3, VAR_2, &VAR_9->is_rid,
     VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9->is_res == ((void*)0)) {
  FUNC_1(VAR_9, VAR_0);
  return (((void*)0));
 }

 return (VAR_9);
}
