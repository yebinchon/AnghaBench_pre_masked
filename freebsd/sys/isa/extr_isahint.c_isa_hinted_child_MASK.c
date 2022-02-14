
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ device_t ;


 scalar_t__ FUNC_0 (scalar_t__,int,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int ,int ,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (char const*,int) ;
 scalar_t__ FUNC_6 (char const*,int,char*,int*) ;

void
FUNC_7(device_t VAR_7, const char *VAR_8, int VAR_9)
{
 device_t VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14;


 VAR_11 = 0;
 if (FUNC_6(VAR_8, VAR_9, "sensitive", &VAR_11) != 0)
  FUNC_6(VAR_8, -1, "sensitive", &VAR_11);

 if (VAR_11)
  VAR_14 = VAR_1;
 else
  VAR_14 = VAR_2;

 VAR_10 = FUNC_0(VAR_7, VAR_14, VAR_8, VAR_9);
 if (VAR_10 == 0)
  return;

 VAR_12 = 0;
 VAR_13 = 0;
 FUNC_6(VAR_8, VAR_9, "port", &VAR_12);
 FUNC_6(VAR_8, VAR_9, "portsize", &VAR_13);
 if (VAR_12 > 0 || VAR_13 > 0)
  FUNC_1(VAR_10, VAR_4, 0, VAR_12, VAR_13);

 VAR_12 = 0;
 VAR_13 = 0;
 FUNC_6(VAR_8, VAR_9, "maddr", &VAR_12);
 FUNC_6(VAR_8, VAR_9, "msize", &VAR_13);
 if (VAR_12 > 0 || VAR_13 > 0)
  FUNC_1(VAR_10, VAR_6, 0, VAR_12, VAR_13);

 if (FUNC_6(VAR_8, VAR_9, "irq", &VAR_12) == 0 && VAR_12 > 0)
  FUNC_1(VAR_10, VAR_5, 0, VAR_12, 1);

 if (FUNC_6(VAR_8, VAR_9, "drq", &VAR_12) == 0 && VAR_12 >= 0)
  FUNC_1(VAR_10, VAR_3, 0, VAR_12, 1);

 if (FUNC_5(VAR_8, VAR_9))
  FUNC_2(VAR_10);

 FUNC_4(VAR_10, (FUNC_3(VAR_10)|VAR_0));
}
