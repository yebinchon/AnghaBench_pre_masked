
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct pkt {int org; } ;
struct recvbuf {scalar_t__ dstadr; struct pkt recv_pkt; int recv_srcadr; } ;
struct peer {scalar_t__ hmode; scalar_t__ dstadr; int aorg; int srcadr; struct peer* adr_link; } ;
typedef int sockaddr_u ;
typedef int l_fp ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int *) ;
 size_t FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct recvbuf*) ;
 int VAR_6 ;
 struct peer** VAR_7 ;

struct peer *
FUNC_6(
 struct recvbuf *VAR_8,
 int VAR_9,
 int * VAR_10
 )
{
 struct peer * VAR_11;
 sockaddr_u * VAR_12;
 u_int VAR_13;
 struct pkt * VAR_14;
 l_fp VAR_15;

 VAR_6++;
 VAR_12 = &VAR_8->recv_srcadr;
 VAR_13 = FUNC_4(VAR_12);
 for (VAR_11 = VAR_7[VAR_13]; VAR_11 != ((void*)0); VAR_11 = VAR_11->adr_link) {



  if (VAR_11->hmode != VAR_3 && VAR_11->dstadr != VAR_8->dstadr)
   continue;


  if ( ! FUNC_0(VAR_12, &VAR_11->srcadr))
   continue;





  *VAR_10 = FUNC_2(VAR_11->hmode, VAR_9);
  if (VAR_4 == VAR_9 && VAR_2 == *VAR_10) {
   VAR_14 = &VAR_8->recv_pkt;
   FUNC_3(&VAR_14->org, &VAR_15);
   if (!FUNC_1(&VAR_11->aorg, &VAR_15) &&
       FUNC_5(VAR_8))
    *VAR_10 = VAR_0;
  }


  if (*VAR_10 == VAR_0)
   return ((void*)0);


  if (*VAR_10 != VAR_1)
   break;
 }


 if (((void*)0) == VAR_11)
  *VAR_10 = FUNC_2(VAR_5, VAR_9);

 return VAR_11;
}
