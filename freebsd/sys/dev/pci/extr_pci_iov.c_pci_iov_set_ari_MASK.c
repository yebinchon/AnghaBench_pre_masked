
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ***,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int **,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,int) ;
 int FUNC_10 (int *,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_5)
{
 device_t VAR_6;
 device_t *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 uint16_t VAR_15;


 if (!FUNC_1(FUNC_4(VAR_5)))
  return (0);

 VAR_9 = FUNC_2(VAR_5, &VAR_7, &VAR_10);

 if (VAR_9 != 0)
  return (VAR_9);

 VAR_6 = ((void*)0);
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  if (FUNC_7(VAR_7[VAR_8], VAR_4, &VAR_13) == 0) {
   VAR_14 = FUNC_8(VAR_7[VAR_8]);
   if (VAR_6 == ((void*)0) || VAR_14 < VAR_11) {
    VAR_6 = VAR_7[VAR_8];
    VAR_11 = VAR_14;
    VAR_12 = VAR_13;
   }
  }
 }
 FUNC_6(VAR_7, VAR_1);





 FUNC_0(VAR_6 != ((void*)0),
     ("Could not find child of %s with SR-IOV capability",
     FUNC_3(VAR_5)));

 VAR_15 = FUNC_9(VAR_6, VAR_12 + VAR_3, 2);
 VAR_15 |= VAR_2;
 FUNC_10(VAR_6, VAR_12 + VAR_3, VAR_15, 2);
 if ((FUNC_9(VAR_6, VAR_12 + VAR_3, 2) &
     VAR_2) == 0) {
  FUNC_5(VAR_6, "failed to enable ARI\n");
  return (VAR_0);
 }
 return (0);
}
