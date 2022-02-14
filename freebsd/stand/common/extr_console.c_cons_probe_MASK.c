
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c_flags; char* c_name; char* c_desc; int (* c_init ) (int ) ;int (* c_probe ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int ,char*,int ,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int FUNC_9 (char*) ;

void
FUNC_10(void)
{
    int VAR_9;
    int VAR_10;
    char *VAR_11;


    FUNC_1("twiddle_divisor", VAR_4, "1", VAR_8, VAR_7);


    for (VAR_9 = 0; VAR_6[VAR_9] != ((void*)0); VAR_9++) {
 VAR_6[VAR_9]->c_flags = 0;
  VAR_6[VAR_9]->c_probe(VAR_6[VAR_9]);
    }

    VAR_10 = -1;
    for (VAR_9 = 0; VAR_6[VAR_9] != ((void*)0) && VAR_10 == -1; VAR_9++) {
 VAR_6[VAR_9]->c_flags = 0;
  VAR_6[VAR_9]->c_probe(VAR_6[VAR_9]);
 if (VAR_6[VAR_9]->c_flags == (VAR_2 | VAR_3))
     VAR_10 = VAR_9;
    }

    if (VAR_10 == -1)
 VAR_10 = 0;


    VAR_11 = FUNC_3("console");
    if (VAR_11 != ((void*)0))
 VAR_11 = FUNC_5(VAR_11);
    if (VAR_11 != ((void*)0)) {
 FUNC_9("console");
 FUNC_0(VAR_11);
    } else {
 VAR_6[VAR_10]->c_flags |= VAR_0 | VAR_1;
 VAR_6[VAR_10]->c_init(0);
 VAR_11 = FUNC_5(VAR_6[VAR_10]->c_name);
    }

    FUNC_4("Consoles: ");
    for (VAR_9 = 0; VAR_6[VAR_9] != ((void*)0); VAR_9++)
 if (VAR_6[VAR_9]->c_flags & (VAR_0 | VAR_1))
     FUNC_4("%s  ", VAR_6[VAR_9]->c_desc);
    FUNC_4("\n");

    if (VAR_11 != ((void*)0)) {
 FUNC_1("console", VAR_4, VAR_11, VAR_5,
     VAR_7);
 FUNC_2(VAR_11);
    }
}
