
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hi; int lo; } ;
struct TYPE_5__ {scalar_t__ q_s; TYPE_1__ D_s; } ;
typedef TYPE_2__ vint64 ;
typedef int u_int32 ;
typedef scalar_t__ time_t ;
struct tm {scalar_t__ tm_year; } ;
typedef scalar_t__ int64 ;
typedef scalar_t__ int32 ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tm* FUNC_4 (scalar_t__*) ;
 struct tm* FUNC_5 (scalar_t__*) ;
 struct tm* FUNC_6 (scalar_t__*) ;

__attribute__((used)) static struct tm *
FUNC_7(
 const vint64 *VAR_4,
 int VAR_5)
{
 struct tm *VAR_6 = ((void*)0);
 int32 VAR_7 = 0;
 time_t VAR_8;
 u_int32 VAR_9, VAR_10;

 VAR_9 = VAR_4->D_s.hi;
 VAR_10 = VAR_4->D_s.lo;

 while ((VAR_9 && ~VAR_9) || ((VAR_9 ^ VAR_10) & 0x80000000u)) {
  if (FUNC_2(VAR_9, VAR_10)) {
   if (--VAR_7 < VAR_1)
    return ((void*)0);
   FUNC_1(VAR_9, VAR_10, 0, VAR_2);
  } else {
   if (++VAR_7 > VAR_0)
    return ((void*)0);
   FUNC_3(VAR_9, VAR_10, 0, VAR_2);
  }
 }
 VAR_8 = (int32)VAR_10;
 while ((VAR_6 = (*(VAR_5 ? FUNC_5 : FUNC_4))(&VAR_8)) == ((void*)0))
  if (VAR_8 < 0) {
   if (--VAR_7 < VAR_1)
    return ((void*)0);
   VAR_8 += VAR_2;
  } else if (VAR_8 >= (time_t)VAR_2) {
   if (++VAR_7 > VAR_0)
    return ((void*)0);
   VAR_8 -= VAR_2;
  } else
   return ((void*)0);


 FUNC_0(VAR_6 != ((void*)0));
 if (VAR_7 != 0) {
  VAR_6->tm_year += VAR_7 * VAR_3;
  if (VAR_6->tm_year <= 0 || VAR_6->tm_year >= 200)
   return ((void*)0);
 }

 return VAR_6;
}
