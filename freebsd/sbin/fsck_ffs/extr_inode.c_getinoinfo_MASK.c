
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct inoinfo {size_t i_number; struct inoinfo* i_nexthash; } ;
typedef size_t ino_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 struct inoinfo** VAR_2 ;

struct inoinfo *
FUNC_1(ino_t VAR_3)
{
 struct inoinfo *VAR_4;

 for (VAR_4 = VAR_2[VAR_3 % VAR_1]; VAR_4; VAR_4 = VAR_4->i_nexthash) {
  if (VAR_4->i_number != VAR_3)
   continue;
  return (VAR_4);
 }
 FUNC_0(VAR_0, "cannot find inode %ju", (uintmax_t)VAR_3);
 return ((struct inoinfo *)0);
}
