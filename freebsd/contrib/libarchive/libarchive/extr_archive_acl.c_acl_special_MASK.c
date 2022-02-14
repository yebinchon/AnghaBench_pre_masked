
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_acl {int mode; } ;




 int VAR_0 ;


__attribute__((used)) static int
FUNC_0(struct archive_acl *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_2 == VAR_0
     && ((VAR_3 & ~007) == 0)) {
  switch (VAR_4) {
  case 128:
   VAR_1->mode &= ~0700;
   VAR_1->mode |= (VAR_3 & 7) << 6;
   return (0);
  case 130:
   VAR_1->mode &= ~0070;
   VAR_1->mode |= (VAR_3 & 7) << 3;
   return (0);
  case 129:
   VAR_1->mode &= ~0007;
   VAR_1->mode |= VAR_3 & 7;
   return (0);
  }
 }
 return (1);
}
