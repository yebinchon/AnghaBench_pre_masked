
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int entropy ;
typedef int XML_Parser ;


 unsigned long FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (unsigned long*,int) ;
 unsigned long FUNC_2 () ;
 unsigned long FUNC_3 () ;
 scalar_t__ FUNC_4 (void*,int) ;
 int FUNC_5 (void*,int) ;
 scalar_t__ FUNC_6 (void*,int) ;
 scalar_t__ FUNC_7 (void*,int) ;

__attribute__((used)) static unsigned long
FUNC_8(XML_Parser VAR_0)
{
  unsigned long VAR_1;
  (void)VAR_0;
  VAR_1 = FUNC_2() ^ FUNC_3();


  if (sizeof(unsigned long) == 4) {
    return FUNC_0("fallback(4)", VAR_1 * 2147483647);
  } else {
    return FUNC_0("fallback(8)",
        VAR_1 * (unsigned long)2305843009213693951ULL);
  }

}
