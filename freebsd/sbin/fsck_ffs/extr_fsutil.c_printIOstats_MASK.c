
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int intmax_t ;
struct TYPE_7__ {int tv_sec; int tv_nsec; } ;
struct TYPE_6__ {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (char*,...) ;
 int* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void)
{
 long long VAR_8, VAR_9;
 int VAR_10;

 FUNC_0(VAR_1, &VAR_4);
 FUNC_2(&VAR_4, &VAR_7, &VAR_4);
 FUNC_1("Running time: %jd.%03ld sec\n",
  (intmax_t)VAR_4.tv_sec, VAR_4.tv_nsec / 1000000);
 FUNC_1("buffer reads by type:\n");
 for (VAR_9 = 0, VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  VAR_9 += VAR_6[VAR_10].tv_sec * 1000 +
      VAR_6[VAR_10].tv_nsec / 1000000;
 if (VAR_9 == 0)
  VAR_9 = 1;
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (VAR_5[VAR_10] == 0)
   continue;
  VAR_8 =
      VAR_6[VAR_10].tv_sec * 1000 + VAR_6[VAR_10].tv_nsec / 1000000;
  FUNC_1("%21s:%8ld %2ld.%ld%% %4jd.%03ld sec %2lld.%lld%%\n",
      VAR_2[VAR_10], VAR_5[VAR_10], VAR_5[VAR_10] * 100 / VAR_3,
      (VAR_5[VAR_10] * 1000 / VAR_3) % 10,
      (intmax_t)VAR_6[VAR_10].tv_sec, VAR_6[VAR_10].tv_nsec / 1000000,
      VAR_8 * 100 / VAR_9, (VAR_8 * 1000 / VAR_9) % 10);
 }
 FUNC_1("\n");
}
