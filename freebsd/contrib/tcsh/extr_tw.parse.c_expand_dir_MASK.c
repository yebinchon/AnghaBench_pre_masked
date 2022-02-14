
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int len; char const* s; } ;
typedef int DIR ;
typedef char const Char ;
typedef scalar_t__ COMMAND ;


 int FUNC_0 (int,int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char const* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct Strbuf*,char const*) ;
 int FUNC_2 (struct Strbuf*,char) ;
 int FUNC_3 (struct Strbuf*) ;
 int FUNC_4 (char const*,int (*) (char const*)) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,int) ;
 char* FUNC_7 (char const*) ;
 scalar_t__ VAR_8 ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_10 (struct Strbuf*,char const*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char*,char const*,int ) ;

__attribute__((used)) static int
FUNC_13(const Char *VAR_10, struct Strbuf *VAR_11, DIR **VAR_12, COMMAND VAR_13)
{
    Char *VAR_14 = ((void*)0);
    Char *VAR_15;

    VAR_15 = FUNC_7(VAR_10);
    FUNC_4(VAR_15, FUNC_11);
    if (VAR_15 == ((void*)0) ||
 (FUNC_10(VAR_11, VAR_15) != 0) ||
 !(VAR_14 = FUNC_6(VAR_11->len ? VAR_11->s : VAR_4,
     VAR_9 == VAR_6 || VAR_9 == VAR_5)) ||
 ((*VAR_12 = FUNC_8(FUNC_9(VAR_14))) == ((void*)0))) {
 FUNC_11(VAR_14);
 if (VAR_13 == VAR_3 || VAR_7) {
     FUNC_5(VAR_15);
     return (-2);
 }




 FUNC_12("\n%S %s\n", VAR_11->len ? VAR_11->s : (VAR_15 ? VAR_15 : VAR_10),
  (VAR_8 == VAR_1 ? FUNC_0(30, 10, "not a directory") :
  (VAR_8 == VAR_0 ? FUNC_0(30, 11, "not found") :
   FUNC_0(30, 12, "unreadable"))));
 VAR_2 = 1;
 FUNC_5(VAR_15);
 return (-1);
    }
    FUNC_5(VAR_15);
    if (VAR_14) {
 if (*VAR_10 != '\0') {
     int VAR_16;




     VAR_16 = VAR_11->len != 0 && VAR_11->s[VAR_11->len - 1] == '/';
     VAR_11->len = 0;
     FUNC_1(VAR_11, VAR_14);
     if (VAR_16 != 0 && VAR_11->s[VAR_11->len - 1] != '/')
  FUNC_2(VAR_11, '/');
     FUNC_3(VAR_11);
 }
 FUNC_11(VAR_14);
    }
    return 0;
}
