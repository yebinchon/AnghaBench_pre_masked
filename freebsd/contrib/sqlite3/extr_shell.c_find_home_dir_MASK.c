
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {char* pw_dir; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 struct passwd* FUNC_2 (int ) ;
 int FUNC_3 () ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int,char*,char*,char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static char *FUNC_8(int VAR_0){
  static char *VAR_1 = ((void*)0);
  if( VAR_0 ){
    FUNC_0(VAR_1);
    VAR_1 = 0;
    return 0;
  }
  if( VAR_1 ) return VAR_1;



  {
    struct passwd *VAR_2;
    uid_t VAR_3 = FUNC_3();
    if( (VAR_2=FUNC_2(VAR_3)) != ((void*)0)) {
      VAR_1 = VAR_2->pw_dir;
    }
  }
  if (!VAR_1) {
    VAR_1 = FUNC_1("HOME");
  }
  if( VAR_1 ){
    int VAR_4 = FUNC_7(VAR_1) + 1;
    char *VAR_5 = FUNC_4( VAR_4 );
    if( VAR_5 ) FUNC_5(VAR_5, VAR_1, VAR_4);
    VAR_1 = VAR_5;
  }

  return VAR_1;
}
