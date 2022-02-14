
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* name; } ;
struct TYPE_6__ {char* name; int files; } ;
typedef TYPE_1__ Path ;
typedef int Lst ;
typedef int Hash_Search ;
typedef TYPE_2__ Hash_Entry ;
typedef int Boolean ;


 TYPE_2__* FUNC_0 (int *,int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_1, Path *VAR_2, Lst VAR_3)
{
    Hash_Search VAR_4;
    Hash_Entry *VAR_5;
    Boolean VAR_6;

    VAR_6 = (*VAR_2->name == '.' && VAR_2->name[1] == '\0');

    for (VAR_5 = FUNC_0(&VAR_2->files, &VAR_4);
  VAR_5 != ((void*)0);
  VAR_5 = FUNC_1(&VAR_4))
    {






 if (FUNC_3(VAR_5->name, VAR_1) &&
     ((VAR_5->name[0] != '.') ||
      (VAR_1[0] == '.')))
 {
     (void)FUNC_2(VAR_3,
       (VAR_6 ? FUNC_4(VAR_5->name) :
        FUNC_5(VAR_2->name, VAR_5->name,
     VAR_0)));
 }
    }
    return (0);
}
