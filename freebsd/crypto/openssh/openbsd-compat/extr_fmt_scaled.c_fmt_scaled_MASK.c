
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t unit_type ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long long FUNC_0 (long long) ;
 int * VAR_5 ;
 long long* VAR_6 ;
 int FUNC_1 (char*,int ,char*,long long,long long,...) ;
 int FUNC_2 (char*,char*,int ) ;
 size_t* VAR_7 ;

int
FUNC_3(long long VAR_8, char *VAR_9)
{
 long long VAR_10, VAR_11 = 0;
 unsigned int VAR_12;
 unit_type VAR_13 = VAR_2;

 VAR_10 = FUNC_0(VAR_8);




 if (VAR_10 < 0 || VAR_10 / 1024 >= VAR_6[VAR_3-1]) {
  VAR_4 = VAR_0;
  return -1;
 }


 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (VAR_10/1024 < VAR_6[VAR_12]) {
   VAR_13 = VAR_7[VAR_12];
   VAR_11 = (VAR_12 == 0) ? 0 : VAR_10 % VAR_6[VAR_12];
   VAR_8 /= VAR_6[VAR_12];
   if (VAR_12 > 0)
    VAR_11 /= VAR_6[VAR_12 - 1];
   break;
  }
 }

 VAR_11 = (10 * VAR_11 + 512) / 1024;

 if (VAR_11 >= 10) {
  if (VAR_8 >= 0)
   VAR_8++;
  else
   VAR_8--;
  VAR_11 = 0;
 } else if (VAR_11 < 0) {

  VAR_11 = 0;
 }

 if (VAR_8 == 0)
  FUNC_2(VAR_9, "0B", VAR_1);
 else if (VAR_13 == VAR_2 || VAR_8 >= 100 || VAR_8 <= -100) {
  if (VAR_11 >= 5) {
   if (VAR_8 >= 0)
    VAR_8++;
   else
    VAR_8--;
  }
  (void)FUNC_1(VAR_9, VAR_1, "%lld%c",
   VAR_8, VAR_5[VAR_13]);
 } else
  (void)FUNC_1(VAR_9, VAR_1, "%lld.%1lld%c",
   VAR_8, VAR_11, VAR_5[VAR_13]);

 return 0;
}
