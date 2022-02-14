
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkt {int org; } ;
struct recvbuf {struct pkt recv_pkt; } ;
struct peer {int cast_flags; int aorg; struct peer* p_link; } ;
typedef int l_fp ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 struct peer* VAR_1 ;

struct peer *
FUNC_2(
 struct recvbuf *VAR_2
 )
{
 struct peer *VAR_3;
 struct pkt *VAR_4;
 l_fp VAR_5;
 VAR_4 = &VAR_2->recv_pkt;
 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->p_link)
  if (VAR_0 & VAR_3->cast_flags) {
   FUNC_1(&VAR_4->org, &VAR_5);
   if (FUNC_0(&VAR_5, &VAR_3->aorg))
    break;
  }

 return VAR_3;
}
