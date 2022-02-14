
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct activemap {scalar_t__ am_magic; int am_syncoff; int am_nextents; int am_syncmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;

void
FUNC_2(struct activemap *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->am_magic == VAR_0);

 FUNC_1(VAR_1->am_syncmap, VAR_1->am_nextents, &VAR_2);
 if (VAR_2 == -1) {

  VAR_1->am_syncoff = -2;
  return;
 }



 VAR_1->am_syncoff = -1;
}
