
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int ,char*,size_t,size_t) ;

size_t FUNC_3(u8 *VAR_4, size_t VAR_5, const u8 *VAR_6, size_t VAR_7)
{




 if (VAR_5 < 6 + VAR_7) {
  FUNC_2(VAR_1,
      "MBO: Not enough room in buffer for MBO IE: buf len = %zu, attr_len = %zu",
      VAR_5, VAR_7);
  return 0;
 }

 *VAR_4++ = VAR_3;
 *VAR_4++ = VAR_7 + 4;
 FUNC_0(VAR_4, VAR_2);
 VAR_4 += 3;
 *VAR_4++ = VAR_0;
 FUNC_1(VAR_4, VAR_6, VAR_7);

 return 6 + VAR_7;
}
