
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs2_daddr_t ;
struct inodesc {scalar_t__ id_blkno; int id_numfrags; int id_number; } ;
struct dups {scalar_t__ dup; struct dups* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 struct dups* VAR_3 ;
 struct dups* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(struct inodesc *VAR_6)
{
 struct dups *VAR_7;
 int VAR_8, VAR_9 = VAR_0;
 ufs2_daddr_t VAR_10 = VAR_6->id_blkno;

 for (VAR_8 = VAR_6->id_numfrags; VAR_8 > 0; VAR_10++, VAR_8--) {
  if (FUNC_1(VAR_10, 1))
   VAR_9 = VAR_1;
  for (VAR_7 = VAR_3; VAR_7; VAR_7 = VAR_7->next) {
   if (VAR_7->dup == VAR_10) {
    FUNC_0(VAR_6->id_number, "DUP", VAR_10);
    VAR_7->dup = VAR_3->dup;
    VAR_3->dup = VAR_10;
    VAR_3 = VAR_3->next;
   }
   if (VAR_7 == VAR_4)
    break;
  }
  if (VAR_4 == ((void*)0) || VAR_3 == VAR_4->next) {
   VAR_5 = 1;
   return (VAR_2);
  }
 }
 return (VAR_9);
}
