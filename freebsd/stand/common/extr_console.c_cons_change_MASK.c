
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_flags; char* c_name; int (* c_init ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 TYPE_1__** VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_7)
{
    int VAR_8, VAR_9;
    char *VAR_10, *VAR_11, *VAR_12;


    for (VAR_8 = 0; VAR_6[VAR_8] != ((void*)0); VAR_8++) {
 VAR_6[VAR_8]->c_flags &= ~(VAR_2 | VAR_3);
    }


    VAR_11 = VAR_12 = FUNC_3(VAR_7);
    VAR_9 = 0;
    while (VAR_12 != ((void*)0)) {
 VAR_10 = FUNC_4(&VAR_12, " ,");
 if (*VAR_10 == '\0')
  continue;
 VAR_8 = FUNC_0(VAR_10);
 if (VAR_8 >= 0) {
     VAR_6[VAR_8]->c_flags |= VAR_2 | VAR_3;
     VAR_6[VAR_8]->c_init(0);
     if ((VAR_6[VAR_8]->c_flags & (VAR_4 | VAR_5)) ==
  (VAR_4 | VAR_5)) {
  VAR_9++;
  continue;
     }

     if (VAR_9 != 0) {

  FUNC_2("console %s failed to initialize\n", VAR_6[VAR_8]->c_name);
     }
 }
    }

    FUNC_1(VAR_11);

    if (VAR_9 == 0) {

 for (VAR_8 = 0; VAR_6[VAR_8] != ((void*)0); VAR_8++) {
     VAR_6[VAR_8]->c_flags |= VAR_2 | VAR_3;
     VAR_6[VAR_8]->c_init(0);
     if ((VAR_6[VAR_8]->c_flags &
  (VAR_4 | VAR_5)) ==
  (VAR_4 | VAR_5))
  VAR_9++;
 }

 if (VAR_9 == 0)
     return (VAR_0);
    }

    return (VAR_1);
}
