
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directory {struct directory* di_prev; struct directory* di_next; } ;
struct command {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct command*) ;
 struct directory* VAR_6 ;
 int FUNC_1 (struct directory*) ;
 struct directory VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ***,char const*,char*) ;
 int FUNC_6 (int ,char*,char const*,char*) ;

void
FUNC_7(Char **VAR_8, struct command *VAR_9)
{
    static const char VAR_10[] = "plvnSLc";
    int VAR_11 = FUNC_5(&VAR_8, VAR_10, "");

    FUNC_0(VAR_9);
    if ((VAR_11 & VAR_0) != 0) {
 struct directory *VAR_12, *VAR_13;
 for (VAR_12 = VAR_6->di_next; VAR_12 != VAR_6; ) {
     VAR_13 = VAR_12;
     VAR_12 = VAR_12->di_next;
     if (VAR_13 != &VAR_7)
  FUNC_1(VAR_13);
 }
 VAR_7.di_next = VAR_7.di_prev = VAR_12;
 VAR_12->di_next = VAR_12->di_prev = &VAR_7;
    }
    if ((VAR_11 & VAR_1) != 0)
 FUNC_2(*VAR_8);
    else if ((VAR_11 & VAR_4) != 0)
 FUNC_4(*VAR_8, 1);

    if (*VAR_8 && (VAR_11 & (VAR_4|VAR_1)))
 VAR_8++;

    if (*VAR_8 != ((void*)0) || (VAR_11 & VAR_2))
 FUNC_6(VAR_5, "dirs", VAR_10, "");
    if ((VAR_11 & (VAR_0|VAR_1|VAR_4)) == 0 || (VAR_11 & VAR_3))
 FUNC_3(VAR_11);
}
