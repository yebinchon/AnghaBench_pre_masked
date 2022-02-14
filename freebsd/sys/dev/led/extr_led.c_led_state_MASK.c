
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct ledsc {scalar_t__ count; int private; int (* func ) (int ,int) ;int * ptr; int * str; struct sbuf* spec; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (struct sbuf*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ledsc *VAR_4, struct sbuf **VAR_5, int VAR_6)
{
 struct sbuf *VAR_7 = ((void*)0);

 VAR_7 = VAR_4->spec;
 VAR_4->spec = *VAR_5;
 if (*VAR_5 != ((void*)0)) {
  VAR_4->str = FUNC_1(*VAR_5);
  if (VAR_4->ptr == ((void*)0)) {
   VAR_0++;
   FUNC_0(&VAR_2, VAR_1 / 10, VAR_3, ((void*)0));
  }
  VAR_4->ptr = VAR_4->str;
 } else {
  VAR_4->str = ((void*)0);
  if (VAR_4->ptr != ((void*)0))
   VAR_0--;
  VAR_4->ptr = ((void*)0);
  VAR_4->func(VAR_4->private, VAR_6);
 }
 VAR_4->count = 0;
 *VAR_5 = VAR_7;
 return(0);
}
