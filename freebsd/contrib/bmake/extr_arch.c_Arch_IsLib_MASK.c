
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
typedef int armag ;
struct TYPE_3__ {int path; } ;
typedef TYPE_1__ GNode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,char*,int) ;

int
FUNC_4(GNode *VAR_2)
{
    static const char VAR_3[] = "!<arch>\n";
    char VAR_4[sizeof(VAR_3)-1];
    int VAR_5;

    if ((VAR_5 = FUNC_2(VAR_2->path, VAR_1)) == -1)
 return VAR_0;

    if (FUNC_3(VAR_5, VAR_4, sizeof(VAR_4)) != sizeof(VAR_4)) {
 (void)FUNC_0(VAR_5);
 return VAR_0;
    }

    (void)FUNC_0(VAR_5);

    return FUNC_1(VAR_4, VAR_3, sizeof(VAR_4)) == 0;
}
