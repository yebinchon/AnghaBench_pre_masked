
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_long ;
struct mem_region {scalar_t__ mr_size; int mr_start; } ;
typedef int reg ;
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
FUNC_6(struct mem_region *VAR_4, int *VAR_5, uint64_t *VAR_6)
{
 pcell_t VAR_7[VAR_3 * VAR_2];
 pcell_t *VAR_8;
 phandle_t VAR_9;
 uint64_t VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_9 = FUNC_0("/memory");
 if (VAR_9 == -1) {
  VAR_15 = VAR_0;
  goto out;
 }

 if ((VAR_15 = FUNC_4(FUNC_3(VAR_9), &VAR_11,
     &VAR_12)) != 0)
  goto out;

 if (VAR_11 > 2) {
  VAR_15 = VAR_1;
  goto out;
 }

 VAR_16 = sizeof(pcell_t) * (VAR_11 + VAR_12);
 VAR_14 = FUNC_2(VAR_9, "reg");
 if (VAR_14 <= 0 || VAR_14 > sizeof(VAR_7)) {
  VAR_15 = VAR_1;
  goto out;
 }

 if (FUNC_1(VAR_9, "reg", VAR_7, VAR_14) <= 0) {
  VAR_15 = VAR_0;
  goto out;
 }

 VAR_10 = 0;
 VAR_17 = VAR_14 / VAR_16;
 VAR_8 = (pcell_t *)&VAR_7;
 for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++) {

  VAR_15 = FUNC_5(VAR_8, VAR_11, VAR_12,
   (u_long *)&VAR_4[VAR_13].mr_start, (u_long *)&VAR_4[VAR_13].mr_size);

  if (VAR_15 != 0)
   goto out;

  VAR_8 += VAR_11 + VAR_12;
  VAR_10 += VAR_4[VAR_13].mr_size;
 }

 if (VAR_10 == 0) {
  VAR_15 = VAR_1;
  goto out;
 }

 *VAR_5 = VAR_13;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_10;
 VAR_15 = 0;
out:
 return (VAR_15);
}
