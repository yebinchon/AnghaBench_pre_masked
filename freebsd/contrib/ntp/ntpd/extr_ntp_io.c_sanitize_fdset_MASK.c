
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int *) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int,int*,int ) ;

__attribute__((used)) static int
FUNC_5(
 int VAR_7
 )
{
 int VAR_8, VAR_9, VAR_10;





 if (VAR_7 != VAR_1) {
  FUNC_3(VAR_3,
   "select(%d, %s, 0L, 0L, &0.0) error: %m",
   VAR_6 + 1,
   FUNC_2(VAR_6, &VAR_5));
 }


 if (VAR_7 != VAR_0)
  return VAR_2;


 for (VAR_8 = 0, VAR_10 = 0; VAR_8 <= VAR_6; VAR_8++) {
  if (FUNC_1(VAR_8, &VAR_5)) {
   if (-1 != FUNC_4(VAR_8, &VAR_9, 0)) {
    VAR_10 = VAR_8;
    continue;
   }

   FUNC_3(VAR_3,
    "Removing bad file descriptor %d from select set",
    VAR_8);

   FUNC_0(VAR_8, &VAR_5);
  }
 }
 if (VAR_6 != VAR_10)
  VAR_6 = VAR_10;
 return VAR_4;
}
