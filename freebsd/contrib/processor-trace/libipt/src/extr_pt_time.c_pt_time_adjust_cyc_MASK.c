
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct pt_time {scalar_t__ ctc_cyc; scalar_t__ ctc; } ;
struct pt_config {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__,scalar_t__,struct pt_config const*) ;
 int FUNC_1 (int*,scalar_t__,struct pt_config const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(uint64_t *VAR_2, const struct pt_time *VAR_3,
         const struct pt_config *VAR_4, uint64_t VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;
 uint64_t VAR_9, VAR_10, VAR_11;
 int VAR_12;

 if (!VAR_3 || !VAR_4 || !VAR_5)
  return -VAR_1;

 VAR_6 = VAR_3->ctc_cyc;
 VAR_7 = VAR_3->ctc;


 if (VAR_7 == VAR_6)
  return 0;
 VAR_12 = FUNC_0(&VAR_8, VAR_7, VAR_6, VAR_4);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_1(&VAR_9, VAR_8, VAR_4);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = (VAR_9 << VAR_0) / VAR_5;
 VAR_10 = *VAR_2;







 if (VAR_10 < VAR_11)
  VAR_10 = VAR_11;

 *VAR_2 = VAR_10 - VAR_11;
 return 0;
}
