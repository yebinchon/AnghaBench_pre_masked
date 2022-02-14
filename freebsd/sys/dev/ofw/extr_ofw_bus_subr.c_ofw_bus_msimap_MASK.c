
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int ssize_t ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int mask ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int*,int) ;
 int FUNC_1 (int,char*,int,void**) ;
 int FUNC_2 (int*,int ) ;

int
FUNC_3(phandle_t VAR_2, uint16_t VAR_3, phandle_t *VAR_4,
    uint32_t *VAR_5)
{
 pcell_t *VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 ssize_t VAR_11;
 uint32_t VAR_12;
 int VAR_13, VAR_14;


 VAR_11 = FUNC_1(VAR_2, "msi-map", sizeof(*VAR_6),
     (void **)&VAR_6);
 if (VAR_11 < 0) {
  if (VAR_4 != ((void*)0)) {
   *VAR_4 = 0;
   FUNC_0(VAR_2, "msi-parent", VAR_4,
       sizeof(*VAR_4));
  }
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_3;
  return (0);
 }

 VAR_13 = VAR_0;
 VAR_7 = 0xffffffff;
 FUNC_0(VAR_2, "msi-map-mask", &VAR_7, sizeof(VAR_7));

 VAR_12 = VAR_3 & VAR_7;
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14 += 4) {
  VAR_9 = VAR_6[VAR_14 + 0];
  VAR_10 = VAR_6[VAR_14 + 3];

  if (VAR_12 < VAR_9 ||
      VAR_12 >= (VAR_9 + VAR_10))
   continue;

  VAR_8 = VAR_6[VAR_14 + 2];

  if (VAR_4 != ((void*)0))
   *VAR_4 = VAR_6[VAR_14 + 1];
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_12 - VAR_9 + VAR_8;
  VAR_13 = 0;
  break;
 }

 FUNC_2(VAR_6, VAR_1);

 return (VAR_13);
}
