
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;
struct Strbuf {int dummy; } ;
typedef int DIR ;


 int FUNC_0 (struct Strbuf*,int ) ;
 struct dirent* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct Strbuf *VAR_0, DIR *VAR_1)
{
    struct dirent *VAR_2;

    if (VAR_1 == ((void*)0))
 return 0;

    if ((VAR_2 = FUNC_1(VAR_1)) != ((void*)0)) {
 FUNC_0(VAR_0, FUNC_2(VAR_2->d_name));
 return 1;
    }
    return 0;
}
