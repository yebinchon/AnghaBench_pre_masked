
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int l_fp ;
typedef int int64_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void
FUNC_6(int64_t *VAR_17, time_t *VAR_18)
{
 int VAR_19;
 l_fp VAR_20;

 FUNC_4();
 VAR_12 += VAR_0 / 1000;
 switch (VAR_14) {




  case 130:
  if (VAR_15 & VAR_3)
   VAR_14 = 131;
  else if (VAR_15 & VAR_2)
   VAR_14 = 132;
  break;





  case 131:
  if (!(VAR_15 & VAR_3))
   VAR_14 = 130;
  else if ((*VAR_18) % 86400 == 0) {
   (*VAR_18)--;
   VAR_14 = 129;
   VAR_16++;
  }
  break;




  case 132:
  if (!(VAR_15 & VAR_2))
   VAR_14 = 130;
  else if (((*VAR_18) + 1) % 86400 == 0) {
   (*VAR_18)++;
   VAR_16--;
   VAR_14 = 128;
  }
  break;




  case 129:
   VAR_14 = 128;
  break;




  case 128:
  if (!(VAR_15 & (VAR_3 | VAR_2)))
   VAR_14 = 130;
 }
 VAR_20 = VAR_13;
  FUNC_2(VAR_20, VAR_1 + VAR_10);

 VAR_8 = VAR_20;
 FUNC_3(VAR_13, VAR_20);
 FUNC_0(VAR_8, VAR_11);






 if (VAR_9 != 0) {
  if (VAR_9 > 1000000)
   VAR_19 = 5000;
  else if (VAR_9 < -1000000)
   VAR_19 = -5000;
  else if (VAR_9 > 500)
   VAR_19 = 500;
  else if (VAR_9 < -500)
   VAR_19 = -500;
  else
   VAR_19 = VAR_9;
  VAR_9 -= VAR_19;
  FUNC_1(VAR_20, VAR_19 * 1000);
  FUNC_0(VAR_8, VAR_20);
 }
 *VAR_17 = VAR_8;
 FUNC_5();
}
