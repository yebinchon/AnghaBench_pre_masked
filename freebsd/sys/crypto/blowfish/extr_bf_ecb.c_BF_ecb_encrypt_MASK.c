
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BF_LONG ;
typedef int BF_KEY ;


 int FUNC_0 (scalar_t__*,int *) ;
 int FUNC_1 (scalar_t__*,int *) ;
 int FUNC_2 (scalar_t__,unsigned char*) ;
 int FUNC_3 (unsigned char const*,scalar_t__) ;

void FUNC_4(const unsigned char *VAR_0, unsigned char *VAR_1,
      BF_KEY *VAR_2, int VAR_3)
 {
 BF_LONG VAR_4,VAR_5[2];

 FUNC_3(VAR_0,VAR_4); VAR_5[0]=VAR_4;
 FUNC_3(VAR_0,VAR_4); VAR_5[1]=VAR_4;
 if (VAR_3)
  FUNC_1(VAR_5,VAR_2);
 else
  FUNC_0(VAR_5,VAR_2);
 VAR_4=VAR_5[0]; FUNC_2(VAR_4,VAR_1);
 VAR_4=VAR_5[1]; FUNC_2(VAR_4,VAR_1);
 VAR_4=VAR_5[0]=VAR_5[1]=0;
 }
