
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (scalar_t__*,int,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*,unsigned char const*,int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int ) ;

__attribute__((used)) static void
FUNC_4(uint64_t * VAR_2, const unsigned char VAR_3[VAR_0])
{
 uint64_t VAR_4[80];
 uint64_t VAR_5[8];
 int VAR_6;


 FUNC_2(VAR_4, VAR_3, VAR_0);


 FUNC_3(VAR_5, VAR_2, VAR_1);


 for (VAR_6 = 0; VAR_6 < 80; VAR_6 += 16) {
  FUNC_1(VAR_5, VAR_4, 0, VAR_6);
  FUNC_1(VAR_5, VAR_4, 1, VAR_6);
  FUNC_1(VAR_5, VAR_4, 2, VAR_6);
  FUNC_1(VAR_5, VAR_4, 3, VAR_6);
  FUNC_1(VAR_5, VAR_4, 4, VAR_6);
  FUNC_1(VAR_5, VAR_4, 5, VAR_6);
  FUNC_1(VAR_5, VAR_4, 6, VAR_6);
  FUNC_1(VAR_5, VAR_4, 7, VAR_6);
  FUNC_1(VAR_5, VAR_4, 8, VAR_6);
  FUNC_1(VAR_5, VAR_4, 9, VAR_6);
  FUNC_1(VAR_5, VAR_4, 10, VAR_6);
  FUNC_1(VAR_5, VAR_4, 11, VAR_6);
  FUNC_1(VAR_5, VAR_4, 12, VAR_6);
  FUNC_1(VAR_5, VAR_4, 13, VAR_6);
  FUNC_1(VAR_5, VAR_4, 14, VAR_6);
  FUNC_1(VAR_5, VAR_4, 15, VAR_6);

  if (VAR_6 == 64)
   break;
  FUNC_0(VAR_4, 0, VAR_6);
  FUNC_0(VAR_4, 1, VAR_6);
  FUNC_0(VAR_4, 2, VAR_6);
  FUNC_0(VAR_4, 3, VAR_6);
  FUNC_0(VAR_4, 4, VAR_6);
  FUNC_0(VAR_4, 5, VAR_6);
  FUNC_0(VAR_4, 6, VAR_6);
  FUNC_0(VAR_4, 7, VAR_6);
  FUNC_0(VAR_4, 8, VAR_6);
  FUNC_0(VAR_4, 9, VAR_6);
  FUNC_0(VAR_4, 10, VAR_6);
  FUNC_0(VAR_4, 11, VAR_6);
  FUNC_0(VAR_4, 12, VAR_6);
  FUNC_0(VAR_4, 13, VAR_6);
  FUNC_0(VAR_4, 14, VAR_6);
  FUNC_0(VAR_4, 15, VAR_6);
 }


 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  VAR_2[VAR_6] += VAR_5[VAR_6];
}
