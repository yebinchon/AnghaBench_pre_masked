
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scard_data {scalar_t__ sim_type; } ;
typedef int cmd ;
typedef int buf ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 long FUNC_0 (struct scard_data*,unsigned char*,int,unsigned char*,size_t*) ;
 int FUNC_1 (int ,char*,unsigned char*,size_t) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct scard_data *VAR_5, unsigned char VAR_6,
    unsigned char VAR_7)
{
 unsigned char VAR_8[255];
 unsigned char VAR_9[5] = { VAR_3 };
 size_t VAR_10;
 long VAR_11;

 if (VAR_5->sim_type == VAR_2)
  VAR_9[0] = VAR_4;
 VAR_9[2] = VAR_6;
 VAR_9[3] = VAR_7;
 VAR_9[4] = sizeof(VAR_8);

 VAR_10 = sizeof(VAR_8);
 VAR_11 = FUNC_0(VAR_5, VAR_9, sizeof(VAR_9), VAR_8, &VAR_10);
 if (VAR_11 != VAR_1) {
  FUNC_2(VAR_0, "SCARD: failed to determine file "
      "length for record %d", VAR_6);
  return -1;
 }

 FUNC_1(VAR_0, "SCARD: file length determination response",
      VAR_8, VAR_10);

 if (VAR_10 < 2 || (VAR_8[0] != 0x6c && VAR_8[0] != 0x67)) {
  FUNC_2(VAR_0, "SCARD: unexpected response to file "
      "length determination");
  return -1;
 }

 return VAR_8[1];
}
