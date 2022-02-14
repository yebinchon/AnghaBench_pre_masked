
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_setting {int dev; int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cf_setting*,int ,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, struct cf_setting *VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  return (VAR_3);
 if (*VAR_6 < VAR_1)
  return (VAR_2);


 FUNC_1(VAR_5, VAR_0, sizeof(*VAR_5) * VAR_1);
 for (VAR_7 = 0, VAR_8 = VAR_1; VAR_8 != 0; VAR_7++, VAR_8--) {
  VAR_5[VAR_7].freq = FUNC_0(VAR_8);
  VAR_5[VAR_7].dev = VAR_4;
 }
 *VAR_6 = VAR_1;

 return (0);
}
