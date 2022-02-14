
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,void*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (unsigned short) ;

__attribute__((used)) static u8 *FUNC_4(u8 *VAR_0, int VAR_1, void *VAR_2, int VAR_3,
      unsigned short VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = FUNC_3(VAR_4);

 VAR_0[0] = VAR_1;
 VAR_0[1] = VAR_5>>3;

 FUNC_2(VAR_0 + 2, 0, VAR_6);
 VAR_0 += VAR_6;
 VAR_5 -= VAR_6;

 FUNC_1(VAR_0+2, VAR_2, VAR_3);
 VAR_3 += 2;
 VAR_0 += VAR_3;
 if ((VAR_5 -= VAR_3) > 0)
  FUNC_2(VAR_0, 0, VAR_5);
 return VAR_0 + VAR_5;
}
