
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4( char const * VAR_0, char const * VAR_1 )
{
    char * VAR_2;
    int VAR_3;

    if (!VAR_1 || *VAR_0 == '/') {
        VAR_2 = FUNC_2( VAR_0 );
 if (VAR_2 == ((void*)0)) {
 return ((void*)0);
 }
    } else {
        if (VAR_1 && VAR_1[0]) {
            VAR_2 = FUNC_0( 2 + FUNC_3( VAR_1 ) + FUNC_3( VAR_0 ) );
  if (VAR_2 == ((void*)0)) {
  return ((void*)0);
  }
            FUNC_1( VAR_2, VAR_1 );
            VAR_3 = (int)FUNC_3(VAR_2);
            if (VAR_2[VAR_3 - 1] != '/') {
                VAR_2[VAR_3++] = '/';
                VAR_2[VAR_3] = '\0';
            }
        } else {
            VAR_2 = FUNC_0( 3 + FUNC_3( VAR_0 ) );
  if (VAR_2 == ((void*)0)) {
  return ((void*)0);
  }
            VAR_2[0] = '.'; VAR_2[1] = '/'; VAR_2[2] = '\0';
            VAR_3 = 2;
        }

        FUNC_1( VAR_2 + VAR_3, VAR_0 );
    }

    return VAR_2;
}
