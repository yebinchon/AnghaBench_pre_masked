
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devdesc {scalar_t__ d_unit; } ;
typedef size_t daddr_t ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (char*,char*,size_t) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static int
FUNC_1(void *VAR_7, int VAR_8, daddr_t VAR_9, size_t VAR_10,
    char *VAR_11, size_t *VAR_12)
{
 struct devdesc *VAR_13 = (struct devdesc *)VAR_7;
 size_t VAR_14;

 if (VAR_13->d_unit != 0)
  return (VAR_2);

 if (VAR_9 < 0 || VAR_9 >= (VAR_5 / VAR_4))
  return (VAR_0);

 if (VAR_10 % VAR_4)
  return (VAR_0);

 VAR_14 = VAR_9 * VAR_4;
 if ((VAR_14 + VAR_10) > VAR_5)
  VAR_10 = VAR_5 - VAR_14;

 if (VAR_12 != ((void*)0))
  *VAR_12 = VAR_10;

 switch (VAR_8 & VAR_3) {
 case 129:
  FUNC_0(VAR_6.start + VAR_14, VAR_11, VAR_10);
  return (0);
 case 128:
  FUNC_0(VAR_11, VAR_6.start + VAR_14, VAR_10);
  return (0);
 }

 return (VAR_1);
}
