
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const files_delim; int files_name; int files_file; } ;
typedef TYPE_1__ args_info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,...) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 char* FUNC_6 (size_t) ;
 char* FUNC_7 (char*,size_t) ;

__attribute__((used)) static const char *
FUNC_8(const args_info *VAR_3)
{




 static char *VAR_4 = ((void*)0);
 static size_t VAR_5 = 256;






 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_6(VAR_5);


 size_t VAR_6 = 0;


 while (!VAR_2) {
  const int VAR_7 = FUNC_3(VAR_3->files_file);

  if (FUNC_2(VAR_3->files_file)) {


   if (VAR_1 == VAR_0)
    continue;

   FUNC_4(FUNC_0("%s: Error reading filenames: %s"),
     VAR_3->files_name, FUNC_5(VAR_1));
   return ((void*)0);
  }

  if (FUNC_1(VAR_3->files_file)) {
   if (VAR_6 != 0)
    FUNC_4(FUNC_0("%s: Unexpected end of input "
      "when reading filenames"),
      VAR_3->files_name);

   return ((void*)0);
  }

  if (VAR_7 == VAR_3->files_delim) {



   if (VAR_6 == 0)
    continue;



   VAR_4[VAR_6] = '\0';
   return VAR_4;
  }

  if (VAR_7 == '\0') {



   FUNC_4(FUNC_0("%s: Null character found when "
     "reading filenames; maybe you meant "
     "to use `--files0' instead "
     "of `--files'?"), VAR_3->files_name);
   return ((void*)0);
  }

  VAR_4[VAR_6++] = VAR_7;




  if (VAR_6 == VAR_5) {
   VAR_5 *= 2;
   VAR_4 = FUNC_7(VAR_4, VAR_5);
  }
 }

 return ((void*)0);
}
