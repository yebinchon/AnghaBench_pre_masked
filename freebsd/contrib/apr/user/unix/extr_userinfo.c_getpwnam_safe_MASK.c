
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;
typedef scalar_t__ apr_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct passwd* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,struct passwd*,char*,int ,struct passwd**) ;
 int FUNC_2 (struct passwd*,struct passwd*,int) ;

__attribute__((used)) static apr_status_t FUNC_3(const char *VAR_4,
                                  struct passwd *VAR_5,
                                  char VAR_6[VAR_2])
{
    struct passwd *VAR_7;
    VAR_3 = 0;
    if ((VAR_7 = FUNC_0(VAR_4)) != ((void*)0)) {
        FUNC_2(VAR_5, VAR_7, sizeof *VAR_5);
    }
    else {
        return VAR_3 ? VAR_3 : VAR_0;
    }

    return VAR_1;
}
