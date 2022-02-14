
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mem_region {int mr_size; int mr_start; } ;
typedef int reserve ;
typedef int phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,char*,int *,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (int *,int,int,int *,int *) ;

int
FUNC_6(struct mem_region *VAR_4, int *VAR_5)
{
 pcell_t VAR_6[VAR_3 * VAR_2];
 pcell_t *VAR_7;
 phandle_t VAR_8, VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_9 = FUNC_0("/");
 VAR_8 = FUNC_0("/memory");
 if (VAR_8 == -1) {
  VAR_14 = VAR_0;
  goto out;
 }

 if ((VAR_14 = FUNC_4(FUNC_3(VAR_8), &VAR_10,
     &VAR_11)) != 0)
  goto out;

 if (VAR_10 > 2) {
  VAR_14 = VAR_1;
  goto out;
 }

 VAR_15 = sizeof(pcell_t) * (VAR_10 + VAR_11);

 VAR_13 = FUNC_2(VAR_9, "memreserve");
 if (VAR_13 <= 0 || VAR_13 > sizeof(VAR_6)) {
  VAR_14 = VAR_1;
  goto out;
 }

 if (FUNC_1(VAR_9, "memreserve", VAR_6, VAR_13) <= 0) {
  VAR_14 = VAR_0;
  goto out;
 }

 VAR_16 = VAR_13 / VAR_15;
 VAR_7 = (pcell_t *)&VAR_6;
 for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12++) {

  VAR_14 = FUNC_5(VAR_7, VAR_10, VAR_11,
   (u_long *)&VAR_4[VAR_12].mr_start, (u_long *)&VAR_4[VAR_12].mr_size);

  if (VAR_14 != 0)
   goto out;

  VAR_7 += VAR_10 + VAR_11;
 }

 *VAR_5 = VAR_12;
 VAR_14 = 0;
out:
 return (VAR_14);
}
