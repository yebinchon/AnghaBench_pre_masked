
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interface {int int_if_flags; int int_state; struct interface* int_nhash; struct interface** int_nhash_prev; int int_name; struct interface* int_bhash; struct interface** int_bhash_prev; int int_brdaddr; struct interface* int_ahash; struct interface** int_ahash_prev; int int_addr; } ;


 struct interface** FUNC_0 (int ) ;
 struct interface** FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,struct interface*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct interface** FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_4(struct interface *VAR_7)
{
 struct interface **VAR_8;

 FUNC_2(&VAR_3, VAR_7, VAR_4);

 VAR_8 = FUNC_0(VAR_7->int_addr);
 VAR_7->int_ahash_prev = VAR_8;
 if ((VAR_7->int_ahash = *VAR_8) != ((void*)0))
  (*VAR_8)->int_ahash_prev = &VAR_7->int_ahash;
 *VAR_8 = VAR_7;

 if (VAR_7->int_if_flags & VAR_0) {
  VAR_8 = FUNC_1(VAR_7->int_brdaddr);
  VAR_7->int_bhash_prev = VAR_8;
  if ((VAR_7->int_bhash = *VAR_8) != ((void*)0))
   (*VAR_8)->int_bhash_prev = &VAR_7->int_bhash;
  *VAR_8 = VAR_7;
 }

 if (VAR_7->int_state & VAR_2)
  FUNC_2(&VAR_5, VAR_7, VAR_6);

 VAR_8 = FUNC_3(VAR_7->int_name);
 if (VAR_7->int_state & VAR_1) {

  while (*VAR_8 != ((void*)0))
   VAR_8 = &(*VAR_8)->int_nhash;
 }
 VAR_7->int_nhash_prev = VAR_8;
 if ((VAR_7->int_nhash = *VAR_8) != ((void*)0))
  (*VAR_8)->int_nhash_prev = &VAR_7->int_nhash;
 *VAR_8 = VAR_7;
}
