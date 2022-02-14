
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int l_fp ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,double) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (long,long) ;
 double FUNC_7 (double,double) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (double) ;

double
FUNC_10(void)
{
 l_fp VAR_5;
 l_fp VAR_6;
 l_fp VAR_7;
 l_fp VAR_8;
 double VAR_9;
 double VAR_10;
 long VAR_11;
 long VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_9 = VAR_2;
 VAR_12 = 0;
 VAR_11 = 0;
 VAR_13 = 0;
 FUNC_0(VAR_4, &VAR_5);
 FUNC_5(&VAR_7);
 for (VAR_14 = 0; VAR_14 < VAR_1 && VAR_13 < VAR_3; VAR_14++) {
  FUNC_5(&VAR_6);
  VAR_8 = VAR_6;
  FUNC_3(&VAR_8, &VAR_7);
  VAR_7 = VAR_6;
  if (FUNC_2(&VAR_8, &VAR_5)) {
   VAR_12 = FUNC_6(VAR_11, VAR_12);
   VAR_11 = 0;
   VAR_13++;
   FUNC_1(&VAR_8, VAR_10);
   VAR_9 = FUNC_7(VAR_10, VAR_9);
  } else {
   VAR_11++;
  }
 }
 if (VAR_13 < VAR_3) {
  FUNC_8(VAR_0, "Fatal error: precision could not be measured (MINSTEP too large?)");
  FUNC_4(1);
 }

 if (0 == VAR_12) {
  FUNC_9(VAR_9);
 } else {
  FUNC_9(VAR_9 / VAR_12);
 }

 return VAR_9;
}
