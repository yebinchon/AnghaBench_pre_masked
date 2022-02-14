
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unrhdr {int head; scalar_t__ len; int last; struct unrhdr* ptr; int first; } ;
struct unrb {int head; scalar_t__ len; int last; struct unrb* ptr; int first; } ;
struct unr {int head; scalar_t__ len; int last; struct unr* ptr; int first; } ;


 struct unrhdr* FUNC_0 (int *) ;
 struct unrhdr* FUNC_1 (int *,int ) ;
 struct unrhdr* FUNC_2 (struct unrhdr*,int ) ;
 struct unrhdr* FUNC_3 (struct unrhdr*,int ,int ) ;
 int FUNC_4 (int *,struct unrhdr*,int ) ;
 int FUNC_5 (struct unrhdr*,struct unrhdr*) ;
 scalar_t__ FUNC_6 (struct unrhdr*,struct unrhdr*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (struct unrhdr*) ;
 scalar_t__ FUNC_8 (struct unrhdr*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct unrhdr*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_10(struct unrhdr *VAR_2, struct unr *VAR_3)
{
 struct unr *VAR_4;
 struct unrb *VAR_5;


 if (FUNC_6(VAR_2, VAR_3)) {
  VAR_5 = VAR_3->ptr;
  if (FUNC_9(VAR_5, VAR_3->len)) {
   FUNC_5(VAR_2, VAR_3->ptr);
   VAR_3->ptr = VAR_2;
  } else if (FUNC_8(VAR_5, VAR_3->len)) {
   FUNC_5(VAR_2, VAR_3->ptr);
   VAR_3->ptr = ((void*)0);
  }
 }


 if (VAR_3->len == 0) {
  VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_0);
  if (VAR_4 == ((void*)0))
   VAR_4 = FUNC_2(VAR_3, VAR_0);
  FUNC_4(&VAR_2->head, VAR_3, VAR_0);
  FUNC_5(VAR_2, VAR_3);
  VAR_3 = VAR_4;
 }


 if (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_0);
  if (VAR_4 != ((void*)0) && VAR_3->ptr == VAR_4->ptr) {
   VAR_3->len += VAR_4->len;
   FUNC_4(&VAR_2->head, VAR_4, VAR_0);
   FUNC_5(VAR_2, VAR_4);
   }
  VAR_4 = FUNC_2(VAR_3, VAR_0);
  if (VAR_4 != ((void*)0) && VAR_3->ptr == VAR_4->ptr) {
   VAR_3->len += VAR_4->len;
   FUNC_4(&VAR_2->head, VAR_4, VAR_0);
   FUNC_5(VAR_2, VAR_4);
  }
 }


 VAR_4 = FUNC_0(&VAR_2->head);
 if (VAR_4 != ((void*)0) && VAR_4->ptr == VAR_2) {
  VAR_2->first += VAR_4->len;
  FUNC_4(&VAR_2->head, VAR_4, VAR_0);
  FUNC_5(VAR_2, VAR_4);
  if (VAR_3 == VAR_4)
   VAR_3 = ((void*)0);
 }


 VAR_4 = FUNC_1(&VAR_2->head, VAR_1);
 if (VAR_4 != ((void*)0) && VAR_4->ptr == ((void*)0)) {
  VAR_2->last += VAR_4->len;
  FUNC_4(&VAR_2->head, VAR_4, VAR_0);
  FUNC_5(VAR_2, VAR_4);
  if (VAR_3 == VAR_4)
   VAR_3 = ((void*)0);
 }


 while (FUNC_7(VAR_2))
  continue;
}
