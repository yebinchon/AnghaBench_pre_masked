
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct md_s {scalar_t__ opencount; int flags; } ;
struct md_req {scalar_t__ md_mediasize; int md_options; int md_unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct md_s*,struct thread*) ;
 struct md_s* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_6, struct md_req *VAR_7)
{
 struct md_s *VAR_8;

 FUNC_2(&VAR_5, VAR_4);

 if (VAR_7->md_mediasize != 0 ||
     (VAR_7->md_options & ~VAR_3) != 0)
  return (VAR_1);

 VAR_8 = FUNC_1(VAR_7->md_unit);
 if (VAR_8 == ((void*)0))
  return (VAR_2);
 if (VAR_8->opencount != 0 && !(VAR_8->flags & VAR_3) &&
     !(VAR_7->md_options & VAR_3))
  return (VAR_0);
 return (FUNC_0(VAR_8, VAR_6));
}
