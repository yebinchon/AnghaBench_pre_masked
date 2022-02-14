
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
typedef int u_int32 ;


 int FUNC_0 (char const*,char const*,size_t) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3(
 const char * VAR_0,
 u_int32 VAR_1
 )
{
 size_t VAR_2;

 union {
  uint32_t w;
  uint8_t b[sizeof(uint32_t)];
 } VAR_3;

 VAR_3.w = VAR_1;
 for (VAR_2 = 0; VAR_2 < sizeof(VAR_3.b) && VAR_3.b[VAR_2]; ++VAR_2)
  if ( !FUNC_1(VAR_3.b[VAR_2])
      || FUNC_2(VAR_3.b[VAR_2])
      || VAR_3.b[VAR_2] == ',' )
   VAR_3.b[VAR_2] = '.';
 FUNC_0(VAR_0, (const char*)VAR_3.b, VAR_2);
}
