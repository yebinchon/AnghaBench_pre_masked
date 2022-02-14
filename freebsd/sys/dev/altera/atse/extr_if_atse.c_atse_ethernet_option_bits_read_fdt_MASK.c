
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 struct resource* FUNC_0 (int *,int ,int*,int) ;
 int FUNC_1 (struct resource*,scalar_t__) ;
 int FUNC_2 (int *,int ,int,struct resource*) ;
 int * FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_10)
{
 struct resource *VAR_11;
 device_t VAR_12;
 int VAR_13, VAR_14;

 if (VAR_9 & VAR_2) {
  return (0);
 }

 VAR_12 = FUNC_3(FUNC_4(VAR_10), "cfi", 0);
 if (VAR_12 == ((void*)0)) {
  return (VAR_3);
 }

 VAR_14 = 0;
 VAR_11 = FUNC_0(VAR_12, VAR_7, &VAR_14,
     VAR_5 | VAR_6);
 if (VAR_11 == ((void*)0)) {
  return (VAR_4);
 }

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_8[VAR_13] = FUNC_1(VAR_11,
      VAR_1 + VAR_13);
 }

 FUNC_2(VAR_12, VAR_7, VAR_14, VAR_11);
 VAR_9 |= VAR_2;

 return (0);
}
