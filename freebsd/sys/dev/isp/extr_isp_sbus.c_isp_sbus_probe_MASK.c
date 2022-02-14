
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_7)
{
 int VAR_8 = 0;
 const char *VAR_9 = FUNC_0(VAR_7);
 if (FUNC_2(VAR_9, "SUNW,isp") == 0 ||
     FUNC_2(VAR_9, "QLGC,isp") == 0 ||
     FUNC_2(VAR_9, "ptisp") == 0 ||
     FUNC_2(VAR_9, "PTI,ptisp") == 0) {
  VAR_8++;
 }
 if (!VAR_8)
  return (VAR_0);

 if (VAR_6 == 0 && VAR_5) {
  FUNC_1("Qlogic ISP Driver, FreeBSD Version %d.%d, "
      "Core Version %d.%d\n",
      VAR_3, VAR_4,
      VAR_1, VAR_2);
  VAR_6++;
 }
 return (0);
}
