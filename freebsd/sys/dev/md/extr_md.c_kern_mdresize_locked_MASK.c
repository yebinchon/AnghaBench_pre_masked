
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_s {scalar_t__ sectorsize; scalar_t__ mediasize; int flags; } ;
struct md_req {int md_options; scalar_t__ md_mediasize; int md_unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct md_s* FUNC_0 (int ) ;
 int FUNC_1 (struct md_s*,struct md_req*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct md_req *VAR_7)
{
 struct md_s *VAR_8;

 FUNC_2(&VAR_6, VAR_5);

 if ((VAR_7->md_options & ~(VAR_3 | VAR_4)) != 0)
  return (VAR_1);

 VAR_8 = FUNC_0(VAR_7->md_unit);
 if (VAR_8 == ((void*)0))
  return (VAR_2);
 if (VAR_7->md_mediasize < VAR_8->sectorsize)
  return (VAR_1);
 if (VAR_7->md_mediasize < VAR_8->mediasize &&
     !(VAR_8->flags & VAR_3) &&
     !(VAR_7->md_options & VAR_3))
  return (VAR_0);
 return (FUNC_1(VAR_8, VAR_7));
}
