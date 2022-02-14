
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scard_data {scalar_t__ sim_type; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (unsigned char*,char const*,int) ;
 int FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (char const*) ;
 long FUNC_3 (struct scard_data*,unsigned char*,int,unsigned char*,size_t*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct scard_data *VAR_6, const char *VAR_7)
{
 long VAR_8;
 unsigned char VAR_9[3];
 unsigned char VAR_10[5 + 8] = { VAR_4 };
 size_t VAR_11;

 FUNC_4(VAR_0, "SCARD: verifying PIN");

 if (VAR_7 == ((void*)0) || FUNC_2(VAR_7) > 8)
  return -1;

 if (VAR_6->sim_type == VAR_3)
  VAR_10[0] = VAR_5;
 FUNC_0(VAR_10 + 5, VAR_7, FUNC_2(VAR_7));
 FUNC_1(VAR_10 + 5 + FUNC_2(VAR_7), 0xff, 8 - FUNC_2(VAR_7));

 VAR_11 = sizeof(VAR_9);
 VAR_8 = FUNC_3(VAR_6, VAR_10, sizeof(VAR_10), VAR_9, &VAR_11);
 if (VAR_8 != VAR_2)
  return -2;

 if (VAR_11 != 2 || VAR_9[0] != 0x90 || VAR_9[1] != 0x00) {
  FUNC_4(VAR_1, "SCARD: PIN verification failed");
  return -1;
 }

 FUNC_4(VAR_0, "SCARD: PIN verified successfully");
 return 0;
}
