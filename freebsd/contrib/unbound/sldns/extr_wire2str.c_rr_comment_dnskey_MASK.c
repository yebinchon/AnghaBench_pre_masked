
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,size_t) ;
 size_t FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (unsigned char*,size_t,int) ;
 scalar_t__ FUNC_3 (char**,size_t*,char*,...) ;

__attribute__((used)) static int FUNC_4(char** VAR_2, size_t* VAR_3, uint8_t* VAR_4,
 size_t VAR_5, size_t VAR_6)
{
 size_t VAR_7;
 uint8_t* VAR_8;
 int VAR_9, VAR_10 = 0;
 if(VAR_5 < VAR_6 + 10) return 0;
 VAR_7 = FUNC_1(VAR_4+VAR_6+8);
 if(VAR_5 < VAR_6 + 10 + VAR_7) return 0;
 VAR_8 = VAR_4 + VAR_6 + 10;
 VAR_9 = (int)FUNC_1(VAR_8);
 VAR_10 += FUNC_3(VAR_2, VAR_3, " ;{");


 VAR_10 += FUNC_3(VAR_2, VAR_3, "id = %u",
  FUNC_0(VAR_8, VAR_7));


 if((VAR_9&VAR_1)) {
  if((VAR_9&VAR_0))
   VAR_10 += FUNC_3(VAR_2, VAR_3, " (ksk)");
  else VAR_10 += FUNC_3(VAR_2, VAR_3, " (zsk)");
 }


 if(VAR_7 > 4) {
  VAR_10 += FUNC_3(VAR_2, VAR_3, ", ");
  VAR_10 += FUNC_3(VAR_2, VAR_3, "size = %db",
   (int)FUNC_2(
   (unsigned char*)VAR_8+4, VAR_7-4, (int)(VAR_8[3])));
 }

 VAR_10 += FUNC_3(VAR_2, VAR_3, "}");
 return VAR_10;
}
