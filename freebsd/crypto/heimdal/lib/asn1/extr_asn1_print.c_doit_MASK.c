
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned char* FUNC_1 (size_t) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (unsigned char*) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 int FUNC_6 (unsigned char*,size_t,int ) ;
 int FUNC_7 (char const*,int ) ;
 size_t FUNC_8 (int,unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_9 (const char *VAR_1)
{
    int VAR_2 = FUNC_7 (VAR_1, VAR_0);
    struct stat VAR_3;
    unsigned char *VAR_4;
    size_t VAR_5;
    int VAR_6;

    if(VAR_2 < 0)
 FUNC_2 (1, "opening %s for read", VAR_1);
    if (FUNC_5 (VAR_2, &VAR_3) < 0)
 FUNC_2 (1, "stat %s", VAR_1);
    VAR_5 = VAR_3.st_size;
    VAR_4 = FUNC_1 (VAR_5);
    if (FUNC_8 (VAR_2, VAR_4, VAR_5) != VAR_5)
 FUNC_3 (1, "read failed");
    FUNC_0 (VAR_2);
    VAR_6 = FUNC_6 (VAR_4, VAR_5, 0);
    FUNC_4 (VAR_4);
    return VAR_6;
}
