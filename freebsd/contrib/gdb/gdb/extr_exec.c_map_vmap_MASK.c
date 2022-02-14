
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_and_bfd {struct vmap* pvmap; int * pbfd; } ;
struct vmap {char* name; char* member; struct vmap* nxt; int * bfd; } ;
typedef int bfd ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,struct vmap_and_bfd*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char,int) ;
 struct vmap* VAR_1 ;
 scalar_t__ FUNC_3 (int) ;

struct vmap *
FUNC_4 (bfd *VAR_2, bfd *VAR_3)
{
  struct vmap_and_bfd VAR_4;
  struct vmap *VAR_5, **VAR_6;

  VAR_5 = (struct vmap *) FUNC_3 (sizeof (*VAR_5));
  FUNC_2 ((char *) VAR_5, '\0', sizeof (*VAR_5));
  VAR_5->nxt = 0;
  VAR_5->bfd = VAR_2;
  VAR_5->name = FUNC_0 (VAR_3 ? VAR_3 : VAR_2);
  VAR_5->member = VAR_3 ? FUNC_0 (VAR_2) : "";

  VAR_4.pbfd = VAR_3;
  VAR_4.pvmap = VAR_5;
  FUNC_1 (VAR_2, VAR_0, &VAR_4);


  for (VAR_6 = &VAR_1; *VAR_6; VAR_6 = &(*VAR_6)->nxt)
    ;
  *VAR_6 = VAR_5;

  return VAR_5;
}
