
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int* FUNC_0 (int const,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int) ;

u_int
FUNC_3(void)
{
 uint32_t VAR_9, VAR_10;
 uint32_t *VAR_11;
 static u_int VAR_12;
 const vm_offset_t VAR_13 = 0x00a00004;






 if (VAR_12 != 0)
  return (VAR_12);

 VAR_9 = FUNC_1(VAR_1);
 VAR_10 = (VAR_9 >> VAR_3) &
     VAR_2;

 if (VAR_10 != 0x60) {
  VAR_9 = FUNC_1(VAR_0);
  VAR_10 = (VAR_9 & VAR_2) >>
      VAR_3;

  if (VAR_10 == 0x61) {
   VAR_11 = FUNC_0(VAR_13, 4);
   if (VAR_11 != ((void*)0)) {

    if ((*VAR_11 & 0x03) == 0) {
     VAR_10 = 0x62;
    }
   }
  }
 }


 switch (VAR_10) {
 case 0x60:
  VAR_12 = VAR_7;
  break;
 case 0x62:
  VAR_12 = VAR_6;
  break;
 case 0x61:
  VAR_12 = VAR_4;
  break;
 case 0x63 :
  VAR_12 = VAR_5;
  break;
 case 0x64:
  VAR_12 = VAR_8;
  break;
 default:
  FUNC_2("imx_soc_type: Don't understand hwsoc 0x%02x, "
      "digprog 0x%08x; assuming IMXSOC_6Q\n", VAR_10, VAR_9);
  VAR_12 = VAR_5;
  break;
 }

 return (VAR_12);
}
