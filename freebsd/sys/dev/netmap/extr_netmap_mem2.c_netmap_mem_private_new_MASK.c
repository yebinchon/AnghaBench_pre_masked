
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct netmap_slot {int dummy; } ;
struct netmap_ring {int dummy; } ;
struct netmap_obj_params {int size; int num; } ;
struct netmap_mem_d {int dummy; } ;
struct netmap_if {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct netmap_mem_d* FUNC_0 (int,struct netmap_obj_params*,int *,int*) ;
 int VAR_4 ;
 struct netmap_obj_params* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,int,int,int,int,int,int) ;

struct netmap_mem_d *
FUNC_2(u_int VAR_7, u_int VAR_8, u_int VAR_9, u_int VAR_10,
  u_int VAR_11, u_int VAR_12, int *VAR_13)
{
 struct netmap_mem_d *VAR_14 = ((void*)0);
 struct netmap_obj_params VAR_15[VAR_2];
 int VAR_16;
 u_int VAR_17, VAR_18;

 VAR_7++;
 VAR_9++;


 for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
  VAR_15[VAR_16] = VAR_5[VAR_16];
 }


 VAR_17 = sizeof(struct netmap_if) + sizeof(ssize_t) * (VAR_7 + VAR_9);
 if (VAR_15[VAR_1].size < VAR_17)
  VAR_15[VAR_1].size = VAR_17;
 VAR_17 = 2 + 4 * VAR_12;
 if (VAR_15[VAR_1].num < VAR_17)
  VAR_15[VAR_1].num = VAR_17;
 VAR_18 = (VAR_8 > VAR_10) ? VAR_8 : VAR_10;
 VAR_17 = sizeof(struct netmap_ring) + sizeof(struct netmap_slot) * VAR_18;
 if (VAR_15[VAR_3].size < VAR_17)
  VAR_15[VAR_3].size = VAR_17;



 VAR_17 = VAR_7 + VAR_9 + 8 * VAR_12;
 if (VAR_15[VAR_3].num < VAR_17)
  VAR_15[VAR_3].num = VAR_17;





 VAR_17 = (4 * VAR_12 + VAR_9) * VAR_10 + (4 * VAR_12 + VAR_7) * VAR_8 + 2 + VAR_11;

 if (VAR_15[VAR_0].num < VAR_17)
  VAR_15[VAR_0].num = VAR_17;

 if (VAR_6)
  FUNC_1("req if %d*%d ring %d*%d buf %d*%d",
   VAR_15[VAR_1].num,
   VAR_15[VAR_1].size,
   VAR_15[VAR_3].num,
   VAR_15[VAR_3].size,
   VAR_15[VAR_0].num,
   VAR_15[VAR_0].size);

 VAR_14 = FUNC_0(sizeof(*VAR_14), VAR_15, &VAR_4, VAR_13);

 return VAR_14;
}
