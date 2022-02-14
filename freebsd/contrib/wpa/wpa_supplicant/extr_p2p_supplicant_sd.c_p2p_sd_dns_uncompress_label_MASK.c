
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (char*,int const*,int) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(char **VAR_1, char *VAR_2, u8 *VAR_3,
           u8 **VAR_4, const u8 *VAR_5)
{
 while (*VAR_4 < VAR_5) {
  u8 VAR_6 = ((*VAR_4)[0] & 0xc0) >> 6;
  int VAR_7;

  if (VAR_6 == 1 || VAR_6 == 2) {

   FUNC_1(VAR_0, "P2P: Invalid domain name "
       "sequence starting with 0x%x", VAR_6);
   return -1;
  }

  if (VAR_6 == 3) {
   u16 VAR_8;
   u8 *VAR_9;


   if (VAR_5 - *VAR_4 < 2) {
    FUNC_1(VAR_0, "P2P: No room for full "
        "DNS offset field");
    return -1;
   }

   VAR_8 = (((*VAR_4)[0] & 0x3f) << 8) | (*VAR_4)[1];
   if (VAR_8 >= *VAR_4 - VAR_3) {
    FUNC_1(VAR_0, "P2P: Invalid DNS "
        "pointer offset %u", VAR_8);
    return -1;
   }

   (*VAR_4) += 2;
   VAR_9 = VAR_3 + VAR_8;
   return FUNC_2(VAR_1, VAR_2, VAR_3,
          &VAR_9,
          *VAR_4 - 2);
  }


  VAR_7 = (*VAR_4)[0] & 0x3f;
  if (VAR_7 == 0)
   return 0;

  (*VAR_4)++;
  if (VAR_7 > VAR_5 - *VAR_4) {
   FUNC_1(VAR_0, "P2P: Invalid domain name "
       "sequence - no room for label with length "
       "%u", VAR_7);
   return -1;
  }

  if (VAR_7 + 2 > VAR_2 - *VAR_1)
   return -2;

  FUNC_0(*VAR_1, *VAR_4, VAR_7);
  *VAR_4 += VAR_7;
  *VAR_1 += VAR_7;
  (*VAR_1)[0] = '.';
  (*VAR_1)++;
  (*VAR_1)[0] = '\0';
 }

 return 0;
}
