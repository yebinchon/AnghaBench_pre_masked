
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scard_data {scalar_t__ sim_type; } ;
typedef int cmd ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (size_t) ;
 int FUNC_2 (unsigned char*,unsigned char*,size_t) ;
 long FUNC_3 (struct scard_data*,unsigned char*,int,unsigned char*,size_t*) ;
 int FUNC_4 (int ,char*,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_5(struct scard_data *VAR_5,
        unsigned char *VAR_6, size_t VAR_7,
        unsigned char VAR_8, unsigned char VAR_9)
{
 unsigned char VAR_10[5] = { VAR_3 };
 size_t VAR_11 = VAR_7 + 3;
 unsigned char *VAR_12;
 long VAR_13;

 if (VAR_5->sim_type == VAR_2)
  VAR_10[0] = VAR_4;
 VAR_10[2] = VAR_8;
 VAR_10[3] = VAR_9;
 VAR_10[4] = VAR_7;

 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12 == ((void*)0))
  return -1;

 VAR_13 = FUNC_3(VAR_5, VAR_10, sizeof(VAR_10), VAR_12, &VAR_11);
 if (VAR_13 != VAR_1) {
  FUNC_0(VAR_12);
  return -2;
 }
 if (VAR_11 != VAR_7 + 2) {
  FUNC_4(VAR_0, "SCARD: record read returned unexpected "
      "length %ld (expected %ld)",
      (long) VAR_11, (long) VAR_7 + 2);
  FUNC_0(VAR_12);
  return -3;
 }

 if (VAR_12[VAR_7] != 0x90 || VAR_12[VAR_7 + 1] != 0x00) {
  FUNC_4(VAR_0, "SCARD: record read returned unexpected "
      "status %02x %02x (expected 90 00)",
      VAR_12[VAR_7], VAR_12[VAR_7 + 1]);
  FUNC_0(VAR_12);
  return -4;
 }

 FUNC_2(VAR_6, VAR_12, VAR_7);
 FUNC_0(VAR_12);

 return 0;
}
