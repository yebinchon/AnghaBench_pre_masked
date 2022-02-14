
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct pthread {int dummy; } ;
struct aiocb {int dummy; } ;


 int FUNC_0 (struct aiocb const* const*,int,struct timespec const*) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static int
FUNC_4(const struct aiocb * const VAR_0[], int VAR_1, const struct
    timespec *VAR_2)
{
 struct pthread *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1();
 FUNC_2(VAR_3);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_3(VAR_3, 1);

 return (VAR_4);
}
