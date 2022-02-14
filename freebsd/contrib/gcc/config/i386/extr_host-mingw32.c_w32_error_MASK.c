
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef int HLOCAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *,int ,int ,char*,int ,int *) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,char const*,char*,int,char const*,char*) ;
 int VAR_6 ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static inline void
FUNC_6 (const char* VAR_7, const char* VAR_8, int VAR_9,
    const char* VAR_10)
{
  LPSTR VAR_11;
  FUNC_0 (VAR_0
    | VAR_1
    | VAR_2
    | VAR_3,
        ((void*)0), FUNC_1(),
    FUNC_3(VAR_4, VAR_5),
    (LPSTR) &VAR_11, 0, ((void*)0));
  FUNC_4(VAR_6, "internal error in %s, at %s:%d: %s: %s\n",
   VAR_7, FUNC_5 (VAR_8), VAR_9, VAR_10, VAR_11);
  FUNC_2 ((HLOCAL)VAR_11);
}
