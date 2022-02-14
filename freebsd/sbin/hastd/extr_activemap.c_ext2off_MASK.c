
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct activemap {int am_nextents; int am_extentshift; int am_mediasize; } ;
typedef int off_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static __inline off_t
FUNC_1(const struct activemap *VAR_0, int VAR_1)
{
 off_t VAR_2;

 FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->am_nextents);
 VAR_2 = ((off_t)VAR_1 << VAR_0->am_extentshift);
 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_0->am_mediasize);
 return (VAR_2);
}
