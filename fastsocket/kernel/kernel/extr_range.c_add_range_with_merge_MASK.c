
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct range {scalar_t__ end; scalar_t__ start; } ;


 int FUNC_0 (struct range*,int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

int FUNC_3(struct range *VAR_0, int VAR_1, int VAR_2,
       u64 VAR_3, u64 VAR_4)
{
 int VAR_5;

 if (VAR_3 > VAR_4)
  return VAR_2;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  u64 VAR_6, VAR_7;
  u64 VAR_8, VAR_9;

  if (!VAR_0[VAR_5].end)
   continue;

  VAR_8 = FUNC_1(VAR_0[VAR_5].start, VAR_3);
  VAR_9 = FUNC_2(VAR_0[VAR_5].end, VAR_4);
  if (VAR_8 > VAR_9 + 1)
   continue;

  VAR_6 = FUNC_2(VAR_0[VAR_5].start, VAR_3);
  VAR_7 = FUNC_1(VAR_0[VAR_5].end, VAR_4);

  VAR_0[VAR_5].start = VAR_6;
  VAR_0[VAR_5].end = VAR_7;
  return VAR_2;
 }


 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
