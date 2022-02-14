
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;

void FUNC_2(uint64_t VAR_4, int VAR_5, uint64_t VAR_6,
    uint64_t VAR_7, int VAR_8,
    int VAR_9, int VAR_10, int VAR_11,
    int VAR_12)
{
 uint64_t VAR_13;

 FUNC_1(VAR_4, VAR_1, VAR_6);
 FUNC_1(VAR_4, VAR_3, VAR_7);

 VAR_13 = FUNC_0(VAR_4, VAR_2);
 VAR_13 |= (((uint64_t)VAR_8 << 39) |
  ((VAR_9 & 0xfff) << 24) |
  (VAR_10 << 23) |
  ((VAR_11 & 0xfff) << 8) |
  (VAR_12 << 1) |
  (VAR_5 << 0));
 FUNC_1(VAR_4, VAR_0, VAR_13);
}
