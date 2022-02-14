
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int entropy ;


 int FUNC_0 (int ,char*,char const*,int,unsigned long,unsigned long) ;
 char* FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char const* const,char*) ;

__attribute__((used)) static unsigned long
FUNC_3(const char * VAR_1, unsigned long VAR_2) {
  const char * const VAR_3 = FUNC_1("EXPAT_ENTROPY_DEBUG");
  if (VAR_3 && ! FUNC_2(VAR_3, "1")) {
    FUNC_0(VAR_0, "Entropy: %s --> 0x%0*lx (%lu bytes)\n",
        VAR_1,
        (int)sizeof(VAR_2) * 2, VAR_2,
        (unsigned long)sizeof(VAR_2));
  }
  return VAR_2;
}
