
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct activemap {int am_nextents; int am_extentsize; int am_mediasize; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static __inline int
FUNC_1(const struct activemap *VAR_1, int VAR_2)
{
 off_t VAR_3;

 if (VAR_2 < VAR_1->am_nextents - 1)
  return (((VAR_1->am_extentsize - 1) / VAR_0) + 1);

 FUNC_0(VAR_2 == VAR_1->am_nextents - 1);
 VAR_3 = VAR_1->am_mediasize % VAR_1->am_extentsize;
 if (VAR_3 == 0)
  VAR_3 = VAR_1->am_extentsize;
 return (((VAR_3 - 1) / VAR_0) + 1);
}
