
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; int st_mode; } ;
typedef size_t ssize_t ;
typedef int FILE ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char*,size_t*,struct stat*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;
 scalar_t__ VAR_8 ;
 void* FUNC_4 (int ,size_t,int ,int ,int ,size_t) ;
 scalar_t__ FUNC_5 (void*,size_t,int ) ;
 scalar_t__ FUNC_6 (void*,size_t) ;
 int FUNC_7 (char) ;
 int FUNC_8 (int ,char*,size_t) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int ,char*,int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12 (FILE * VAR_9, FILE * VAR_10)
{
    static size_t VAR_11;
    static char *VAR_12;
    int VAR_13;
    int VAR_14 = 0;
    int VAR_15 = 0;
    int VAR_16 = VAR_2;
    struct stat VAR_17;
    VAR_12 = FUNC_1 (VAR_12, &VAR_11,
   FUNC_3 (FUNC_2 (VAR_9), &VAR_17) >= 0 ? &VAR_17 : ((void*)0));
    if (VAR_12 == ((void*)0))
 return -1;

    while ((VAR_13 = FUNC_8 (FUNC_2 (VAR_9), VAR_12, VAR_11)) > 0) {
 VAR_15 = FUNC_10 (FUNC_2 (VAR_10), VAR_12, VAR_13);
 if (VAR_15 < 0)
     break;
 VAR_14 += VAR_15;
 while (VAR_8 && VAR_14 > VAR_16) {
     FUNC_7 ('#');
     VAR_16 += VAR_2;
 }
    }
    FUNC_9 (VAR_10);
    if (VAR_13 < 0)
 FUNC_11 ("local");

    if (VAR_15 < 0) {
 if (VAR_7 != VAR_1)
     FUNC_11 ("netout");
 VAR_14 = -1;
    }
    return VAR_14;
}
