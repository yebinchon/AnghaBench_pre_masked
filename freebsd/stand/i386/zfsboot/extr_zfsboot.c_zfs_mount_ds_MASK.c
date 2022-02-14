
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {char* spa_name; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (char*,...) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(char *VAR_2)
{
    uint64_t VAR_3;
    spa_t *VAR_4;
    char *VAR_5;

    VAR_5 = FUNC_2(VAR_2, '/');
    if (VAR_5)
 *VAR_5++ = '\0';
    VAR_4 = FUNC_1(VAR_2);
    if (VAR_4 == ((void*)0)) {
 FUNC_0("\nCan't find ZFS pool %s\n", VAR_2);
 return -1;
    }

    if (FUNC_5(VAR_4))
 return -1;

    VAR_3 = 0;
    if (VAR_5) {
 if (FUNC_3(VAR_4, VAR_5, &VAR_3)) {
     FUNC_0("\nCan't find dataset %s in ZFS pool %s\n",
      VAR_5, VAR_4->spa_name);
     return -1;
 }
    }
    if (FUNC_4(VAR_4, VAR_3, &VAR_1)) {
 FUNC_0("\nCan't mount ZFS dataset\n");
 return -1;
    }
    VAR_0 = VAR_4;
    return (0);
}
