
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mem_region {int mr_size; int mr_start; } ;
typedef int reg ;
typedef int phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int *,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int*,int*) ;
 int FUNC_6 (int *,int,int,int *,int *) ;
 int FUNC_7 (char*,int,int) ;

int
FUNC_8(struct mem_region *VAR_2, int *VAR_3)
{
 pcell_t VAR_4[VAR_1];
 phandle_t VAR_5, VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = FUNC_1("/reserved-memory");
 if (VAR_6 == -1) {
  return (VAR_0);
 }

 if ((VAR_10 = FUNC_5(VAR_6, &VAR_7, &VAR_8)) != 0)
  return (VAR_10);

 if (VAR_7 + VAR_8 > VAR_1)
  FUNC_7("Too many address and size cells %d %d", VAR_7,
      VAR_8);

 VAR_9 = 0;
 for (VAR_5 = FUNC_0(VAR_6); VAR_5 != 0; VAR_5 = FUNC_4(VAR_5)) {
  if (!FUNC_3(VAR_5, "no-map"))
   continue;

  VAR_10 = FUNC_2(VAR_5, "reg", VAR_4, sizeof(VAR_4));
  if (VAR_10 <= 0)

   continue;

  FUNC_6(VAR_4, VAR_7, VAR_8,
      (u_long *)&VAR_2[VAR_9].mr_start,
      (u_long *)&VAR_2[VAR_9].mr_size);
  VAR_9++;
 }

 *VAR_3 = VAR_9;

 return (0);
}
