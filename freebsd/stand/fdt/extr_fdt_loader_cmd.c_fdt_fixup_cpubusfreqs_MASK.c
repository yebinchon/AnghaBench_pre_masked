
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int,char*,int const*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int,char*,int ) ;
 int VAR_1 ;

void
FUNC_5(unsigned long VAR_2, unsigned long VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6, VAR_7 = 0, VAR_8;
 const uint32_t VAR_9 = 0;


 VAR_5 = FUNC_3(VAR_1, "/cpus");
 if (VAR_5 < 0)
  return;


 VAR_8 = 0;
 VAR_7 = VAR_5;
 while (VAR_8 != -1)
  VAR_7 = FUNC_1(VAR_1, VAR_7, &VAR_8);


 VAR_5 = FUNC_2(VAR_1, VAR_5, "clock-frequency",
     &VAR_9, sizeof(uint32_t));

 VAR_6 = FUNC_2(VAR_1, VAR_5, "bus-frequency", &VAR_9,
     sizeof(uint32_t));

 VAR_4 = FUNC_0(VAR_5, VAR_6);

 while (VAR_5 != -VAR_0 && VAR_6 != -VAR_0) {

  VAR_5 = FUNC_2(VAR_1, VAR_4,
      "clock-frequency", &VAR_9, sizeof(uint32_t));

  VAR_6 = FUNC_2(VAR_1, VAR_4, "bus-frequency",
      &VAR_9, sizeof(uint32_t));


  if (VAR_4 > VAR_7)
   break;

  FUNC_4(VAR_1, VAR_4, "clock-frequency",
      (uint32_t)VAR_2);

  FUNC_4(VAR_1, VAR_4, "bus-frequency",
      (uint32_t)VAR_3);

  VAR_4 = FUNC_0(VAR_5, VAR_6);
 }
}
