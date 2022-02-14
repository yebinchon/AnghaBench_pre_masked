
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (struct timespec*) ;
 int FUNC_4 (struct timespec*,struct timespec*,struct timespec*) ;

__attribute__((used)) static int
FUNC_5(struct timespec *VAR_2)
{
    struct timespec VAR_3;

    FUNC_0(VAR_1);

    if (VAR_2 == ((void*)0))
 return (VAR_0);
    if (!FUNC_3(VAR_2))
 return (VAR_0);

    FUNC_2(&VAR_3);
    FUNC_4(&VAR_3, VAR_2, &VAR_3);
    return (VAR_3.tv_sec < 0 ||
     VAR_3.tv_sec > FUNC_1());
}
