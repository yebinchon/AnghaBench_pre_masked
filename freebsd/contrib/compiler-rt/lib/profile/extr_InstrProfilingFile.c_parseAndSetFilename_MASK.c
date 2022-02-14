
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* FilenamePat; scalar_t__ PNS; } ;
typedef scalar_t__ ProfileNameSpecifier ;


 char* VAR_0 ;
 int FUNC_0 (char*,char const*,int ,...) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_3 (char const*,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(const char *VAR_2,
                                ProfileNameSpecifier VAR_3,
                                unsigned VAR_4) {

  const char *VAR_5 = VAR_1.FilenamePat;
  ProfileNameSpecifier VAR_6 = VAR_1.PNS;

  if (VAR_3 < VAR_6)
    return;

  if (!VAR_2)
    VAR_2 = VAR_0;

  if (VAR_5 && !FUNC_5(VAR_5, VAR_2)) {
    VAR_1.PNS = VAR_3;
    return;
  }


  if (!VAR_2 || FUNC_3(VAR_2, VAR_4))
    FUNC_4();
  VAR_1.PNS = VAR_3;

  if (!VAR_5) {
    if (FUNC_2("LLVM_PROFILE_VERBOSE"))
      FUNC_0("Set profile file path to \"%s\" via %s.\n",
                VAR_1.FilenamePat, FUNC_1(VAR_3));
  } else {
    if (FUNC_2("LLVM_PROFILE_VERBOSE"))
      FUNC_0("Override old profile path \"%s\" via %s to \"%s\" via %s.\n",
                VAR_5, FUNC_1(VAR_6), VAR_1.FilenamePat,
                FUNC_1(VAR_3));
  }

  FUNC_6();
}
