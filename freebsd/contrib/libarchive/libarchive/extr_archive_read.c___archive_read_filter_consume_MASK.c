
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read_filter {TYPE_1__* archive; } ;
typedef int intmax_t ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {int archive; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct archive_read_filter*,scalar_t__) ;
 int FUNC_1 (int *,int ,char*,int ,int ) ;

int64_t
FUNC_2(struct archive_read_filter * VAR_2,
    int64_t VAR_3)
{
 int64_t VAR_4;

 if (VAR_3 < 0)
  return VAR_1;
 if (VAR_3 == 0)
  return 0;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 == VAR_3)
  return (VAR_4);

 if (VAR_4 < 0)
  VAR_4 = 0;
 FUNC_1(&VAR_2->archive->archive,
     VAR_0,
     "Truncated input file (needed %jd bytes, only %jd available)",
     (intmax_t)VAR_3, (intmax_t)VAR_4);
 return (VAR_1);
}
