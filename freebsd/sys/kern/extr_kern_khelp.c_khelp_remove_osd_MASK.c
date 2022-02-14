
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd {int dummy; } ;
struct helper {int h_flags; int h_refcount; int h_id; int h_zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct osd*,int ) ;
 void* FUNC_1 (int ,struct osd*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static inline void
FUNC_4(struct helper *VAR_2, struct osd *VAR_3)
{
 void *VAR_4;

 if (VAR_2->h_flags & VAR_0) {





  VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_2->h_id);
  if (VAR_4 != ((void*)0)) {
   FUNC_3(VAR_2->h_zone, VAR_4);
   FUNC_0(VAR_1, VAR_3, VAR_2->h_id);
   FUNC_2(&VAR_2->h_refcount);
  }
 }
}
