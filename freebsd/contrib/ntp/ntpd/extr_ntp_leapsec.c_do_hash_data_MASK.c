
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int isc_sha1_t ;


 int FUNC_0 (int *,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static void
FUNC_2(
 isc_sha1_t * VAR_0,
 char const * VAR_1 )
{
 unsigned char VAR_2[32];
 unsigned int VAR_3 = 0;
 unsigned char VAR_4;

 while ('\0' != (VAR_4 = *VAR_1++) && '#' != VAR_4)
  if (FUNC_1(VAR_4)) {
   VAR_2[VAR_3++] = VAR_4;
   VAR_3 &= (sizeof(VAR_2)-1);
   if (0 == VAR_3)
    FUNC_0(
     VAR_0, VAR_2, sizeof(VAR_2));
  }

 if (0 < VAR_3)
  FUNC_0(VAR_0, VAR_2, VAR_3);
}
