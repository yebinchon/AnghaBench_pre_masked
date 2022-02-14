
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_3(int VAR_4, int VAR_5,
    int VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10 = VAR_3;

 if ((VAR_2 << VAR_10) / VAR_4 > VAR_0)
  return FUNC_1(VAR_4 * VAR_0) - 1;

 for (VAR_8 = FUNC_2(VAR_10,
    FUNC_0(VAR_5 * VAR_4 - 1) - VAR_1);
   VAR_8 <= VAR_6; VAR_8++) {

  unsigned long VAR_11 = VAR_2 << VAR_8;

  if (VAR_11 < VAR_5 * VAR_4)
   continue;

  VAR_9 = VAR_11 % VAR_4;

  if (VAR_9 <= VAR_11 / VAR_7)
   break;

 }

 return VAR_8;
}
