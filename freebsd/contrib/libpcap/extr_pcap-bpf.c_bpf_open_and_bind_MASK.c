
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_name; } ;
typedef int caddr_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int ,int,char*,char const*) ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_6, char *VAR_7)
{
 int VAR_8;
 struct ifreq VAR_9;




 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 < 0)
  return (VAR_8);




 (void)FUNC_4(VAR_9.ifr_name, VAR_6, sizeof(VAR_9.ifr_name));
 if (FUNC_2(VAR_8, VAR_0, (caddr_t)&VAR_9) < 0) {
  switch (VAR_5) {

  case 128:



   FUNC_1(VAR_8);
   return (VAR_4);

  case 129:







   FUNC_1(VAR_8);
   return (VAR_3);

  default:
   FUNC_3(VAR_7, VAR_1,
       VAR_5, "BIOCSETIF: %s", VAR_6);
   FUNC_1(VAR_8);
   return (VAR_2);
  }
 }




 return (VAR_8);
}
