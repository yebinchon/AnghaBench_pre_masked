
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {long tab_len; } ;
struct TYPE_9__ {int tab_correct; } ;
struct TYPE_8__ {long fd_bytes_read; int fd; } ;
typedef TYPE_1__ MY_OBJ ;


 char VAR_0 ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_0 (char*) ;
 long FUNC_1 (TYPE_1__*,char*,long) ;
 int FUNC_2 (char*) ;
 long FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,long) ;
 int FUNC_5 (int ,char*,size_t) ;
 char* FUNC_6 (size_t) ;

__attribute__((used)) static long
FUNC_7(MY_OBJ * VAR_3, long VAR_4, long *VAR_5)
{
    long VAR_6;
    long VAR_7, VAR_8, VAR_9;
    char *VAR_10;

    if (!VAR_2.tab_correct)
 return VAR_4;

    VAR_6 = FUNC_3(VAR_3);

    FUNC_4(VAR_3, VAR_6 - VAR_3->fd_bytes_read);


    VAR_10 = FUNC_6((size_t) VAR_4 + 1);

    if ((FUNC_5(VAR_3->fd, VAR_10, (size_t) VAR_4)) == -1)
 FUNC_0("Error reading file in tabize().");

    VAR_9 = VAR_8 = 0;
    if (VAR_5 != 0)
 *VAR_5 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
 if ((VAR_5 != 0) && (VAR_8 >= VAR_4)) {
     *VAR_5 = FUNC_1(VAR_3, VAR_10, VAR_7);
     break;
 }
 if (VAR_10[VAR_7] == VAR_0)
     VAR_8 += VAR_1.tab_len
  - ((VAR_8 - VAR_9) % VAR_1.tab_len);
 else if (VAR_10[VAR_7] == '\n') {
     VAR_8++;
     VAR_9 = VAR_8;
 } else
     VAR_8++;
    }

    FUNC_4(VAR_3, VAR_6);
    FUNC_2(VAR_10);
    return VAR_8;
}
