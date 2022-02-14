
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct _citrus_csmapper {int dummy; } ;
typedef int pivot ;
typedef int key ;
typedef int buf2 ;
typedef int buf1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 char* FUNC_1 (int ,char const*,char*,int,int ) ;
 int FUNC_2 (int ,struct _citrus_csmapper**,char*) ;
 int FUNC_3 (char const*,char const*,char*,int,unsigned long*) ;
 int FUNC_4 (int ,struct _citrus_csmapper**) ;
 int VAR_6 ;
 int FUNC_5 (int ,struct _citrus_csmapper**,char const*,char*,char const*) ;
 int FUNC_6 (char*,int,char*,char const*,char const*) ;
 int FUNC_7 (char const*,char const*) ;

int
FUNC_8(struct _citrus_csmapper * __restrict * __restrict VAR_7,
    const char * __restrict VAR_8, const char * __restrict VAR_9, uint32_t VAR_10,
    unsigned long *VAR_11)
{
 const char *VAR_12, *VAR_13;
 char VAR_14[VAR_2], VAR_15[VAR_2], VAR_16[VAR_2], VAR_17[VAR_2];
 unsigned long VAR_18;
 int VAR_19;

 VAR_18 = 0;

 VAR_19 = FUNC_0(&VAR_6, VAR_5);
 if (VAR_19)
  return (VAR_19);

 VAR_12 = FUNC_1(VAR_0, VAR_8, VAR_14, sizeof(VAR_14),
     VAR_4);
 VAR_13 = FUNC_1(VAR_0, VAR_9, VAR_15, sizeof(VAR_15),
     VAR_4);
 if (!FUNC_7(VAR_12, VAR_13)) {
  VAR_19 = FUNC_4(VAR_6, VAR_7);
  if (VAR_19 == 0 && VAR_11 != ((void*)0))
   *VAR_11 = 0;
  return (VAR_19);
 }

 FUNC_6(VAR_16, sizeof(VAR_16), "%s/%s", VAR_12, VAR_13);

 VAR_19 = FUNC_2(VAR_6, VAR_7, VAR_16);
 if (VAR_19 == 0) {
  if (VAR_11 != ((void*)0))
   *VAR_11 = 0;
  return (0);
 }
 if (VAR_19 != VAR_1 || (VAR_10 & VAR_3)!=0)
  return (VAR_19);

 VAR_19 = FUNC_3(VAR_12, VAR_13, VAR_17, sizeof(VAR_17), &VAR_18);
 if (VAR_19)
  return (VAR_19);

 VAR_19 = FUNC_5(VAR_6, VAR_7, VAR_12, VAR_17, VAR_13);
 if (VAR_19 == 0 && VAR_11 != ((void*)0))
  *VAR_11 = VAR_18;

 return (VAR_19);
}
