
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs2_daddr_t ;
struct inodesc {scalar_t__ id_blkno; int id_numfrags; } ;
struct dups {scalar_t__ dup; struct dups* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 struct dups* VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;

int
FUNC_4(struct inodesc *VAR_4)
{
 struct dups *VAR_5;
 int VAR_6, VAR_7 = VAR_0;
 ufs2_daddr_t VAR_8 = VAR_4->id_blkno;

 for (VAR_6 = VAR_4->id_numfrags; VAR_6 > 0; VAR_8++, VAR_6--) {
  if (FUNC_0(VAR_8, 1)) {
   VAR_7 = VAR_1;
  } else if (FUNC_3(VAR_8)) {
   for (VAR_5 = VAR_2; VAR_5; VAR_5 = VAR_5->next) {
    if (VAR_5->dup != VAR_8)
     continue;
    VAR_5->dup = VAR_2->dup;
    VAR_5 = VAR_2;
    VAR_2 = VAR_2->next;
    FUNC_2((char *)VAR_5);
    break;
   }
   if (VAR_5 == ((void*)0)) {
    FUNC_1(VAR_8);
    VAR_3--;
   }
  }
 }
 return (VAR_7);
}
