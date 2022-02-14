
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,char,int,int) ;

__attribute__((used)) static void
FUNC_5(void)
{
 uint32_t VAR_6;
 char VAR_7;
 bus_space_handle_t VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_1(VAR_5, VAR_0, VAR_3, 0, &VAR_8);
 VAR_4 = FUNC_2(VAR_5, VAR_8, VAR_1);
 VAR_6 = FUNC_2(VAR_5, VAR_8, VAR_2);
 FUNC_3(VAR_5, VAR_8, VAR_3);

 switch (VAR_6) {
  case 0x00FF0382:
   VAR_7='2';
   break;
  case 0x20FF0382:
   VAR_7='4';
   break;
  case 0x00FF0383:
   VAR_7='6';
   break;
  case 0x00FE0383:
   VAR_7='7';
   break;
  case 0x20FF0383:
   VAR_7='8';
   break;
  case 0x20FE0383:
   VAR_7='9';
   break;
  default:
   VAR_7='x';
 }

 switch(FUNC_0(VAR_4)) {
  case 0:
   VAR_9 = 1;
   VAR_10 = 0;
   break;
  case 1:
   VAR_9 = 2;
   VAR_10 = 0;
   break;
  case 2:
   VAR_9 = 2;
   VAR_10 = 1;
   break;
  default:
   VAR_9 = 0;
   VAR_10 = FUNC_0(VAR_4);
   break;
 }
 FUNC_4("Texas Instruments AM335%c Processor, Revision ES%u.%u\n",
  VAR_7, VAR_9, VAR_10);
}
