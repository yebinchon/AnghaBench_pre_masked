
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int socklen_t ;
typedef int ip6 ;
typedef int ip4 ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,char*,int ) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_3 (char**,size_t*,scalar_t__*,size_t) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (char**,size_t*,char*,...) ;

int FUNC_6(char** VAR_2, size_t* VAR_3, uint8_t* VAR_4,
 size_t VAR_5)
{
 int VAR_6 = 0;
 uint16_t VAR_7;
 uint8_t VAR_8, VAR_9;
 if(VAR_5 < 4) {
  VAR_6 += FUNC_5(VAR_2, VAR_3, "malformed subnet ");
  VAR_6 += FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
  return VAR_6;
 }
 VAR_7 = FUNC_4(VAR_4);
 VAR_8 = VAR_4[2];
 VAR_9 = VAR_4[3];
 if(VAR_7 == 1) {

  char VAR_10[64];
  uint8_t VAR_11[4];
  FUNC_2(VAR_11, 0, sizeof(VAR_11));
  if(VAR_5-4 > 4) {
   VAR_6 += FUNC_5(VAR_2, VAR_3, "trailingdata:");
   VAR_6 += FUNC_3(VAR_2, VAR_3, VAR_4+4+4, VAR_5-4-4);
   VAR_6 += FUNC_5(VAR_2, VAR_3, " ");
   VAR_5 = 4+4;
  }
  FUNC_1(VAR_11, VAR_4+4, VAR_5-4);
  if(!FUNC_0(VAR_0, VAR_11, VAR_10, (socklen_t)sizeof(VAR_10))) {
   VAR_6 += FUNC_5(VAR_2, VAR_3, "ip4ntoperror ");
   VAR_6 += FUNC_3(VAR_2, VAR_3, VAR_4+4+4, VAR_5-4-4);
  } else {
   VAR_6 += FUNC_5(VAR_2, VAR_3, "%s", VAR_10);
  }
 } else if(VAR_7 == 2) {

  char VAR_12[64];
  uint8_t VAR_13[16];
  FUNC_2(VAR_13, 0, sizeof(VAR_13));
  if(VAR_5-4 > 16) {
   VAR_6 += FUNC_5(VAR_2, VAR_3, "trailingdata:");
   VAR_6 += FUNC_3(VAR_2, VAR_3, VAR_4+4+16, VAR_5-4-16);
   VAR_6 += FUNC_5(VAR_2, VAR_3, " ");
   VAR_5 = 4+16;
  }
  FUNC_1(VAR_13, VAR_4+4, VAR_5-4);
  VAR_6 += FUNC_3(VAR_2, VAR_3, VAR_4+4+4, VAR_5-4-4);

 } else {

  VAR_6 += FUNC_5(VAR_2, VAR_3, "family %d ",
   (int)VAR_7);
  VAR_6 += FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 }
 VAR_6 += FUNC_5(VAR_2, VAR_3, "/%d scope /%d", (int)VAR_8, (int)VAR_9);
 return VAR_6;
}
