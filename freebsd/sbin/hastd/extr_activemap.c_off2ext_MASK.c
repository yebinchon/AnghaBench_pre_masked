
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct activemap {int am_mediasize; int am_extentshift; int am_nextents; } ;
typedef int off_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static __inline int
FUNC_1(const struct activemap *VAR_0, off_t VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->am_mediasize);
 VAR_2 = (VAR_1 >> VAR_0->am_extentshift);
 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_0->am_nextents);
 return (VAR_2);
}
