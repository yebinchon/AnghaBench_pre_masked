
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef scalar_t__ off_t ;


 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int * const,size_t,scalar_t__,char const* const,size_t const,int *) ;

__attribute__((used)) static int
FUNC_2(const char *const VAR_0, const size_t VAR_1,
    const u16 VAR_2, const u16 VAR_3, const u16 VAR_4,
    u8 *const VAR_5, size_t VAR_6) {
 off_t VAR_7 = 0;
 u16 VAR_8;

 FUNC_0(VAR_2);
 FUNC_0(0x0100);
 FUNC_0(1);
 FUNC_0(0);
 FUNC_0(0);
 FUNC_0(0);

 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_0, VAR_1, ((void*)0));
 if (VAR_7 < 0) {
  return (int)VAR_7;
 }

 FUNC_0(VAR_3);
 FUNC_0(VAR_4);

 return (int)VAR_7;
 overflow:
 return (-1);
}
