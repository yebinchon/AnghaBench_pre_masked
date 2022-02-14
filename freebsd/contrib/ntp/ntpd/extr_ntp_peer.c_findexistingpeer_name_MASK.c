
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct peer {int hmode; int * hostname; int srcadr; struct peer* p_link; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 struct peer* VAR_1 ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static struct peer *
FUNC_2(
 const char * VAR_2,
 u_short VAR_3,
 struct peer * VAR_4,
 int VAR_5
 )
{
 struct peer *VAR_6;

 if (((void*)0) == VAR_4)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_4->p_link;
 for (; VAR_6 != ((void*)0); VAR_6 = VAR_6->p_link)
  if (VAR_6->hostname != ((void*)0)
      && (-1 == VAR_5 || VAR_6->hmode == VAR_5)
      && (VAR_0 == VAR_3
   || VAR_0 == FUNC_0(&VAR_6->srcadr)
   || VAR_3 == FUNC_0(&VAR_6->srcadr))
      && !FUNC_1(VAR_6->hostname, VAR_2))
   break;
 return VAR_6;
}
