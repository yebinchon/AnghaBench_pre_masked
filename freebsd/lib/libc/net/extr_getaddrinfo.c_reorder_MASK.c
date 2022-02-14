
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policyhead {int dummy; } ;
struct ai_order {int aio_initial_sequence; struct addrinfo* aio_ai; int aio_dstpolicy; int aio_dstscope; } ;
struct addrinfo {struct addrinfo* ai_next; int ai_addr; } ;


 int FUNC_0 (struct policyhead*) ;
 struct ai_order* FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct ai_order*) ;
 int FUNC_3 (struct policyhead*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct policyhead*) ;
 int FUNC_6 (int ,struct policyhead*) ;
 int FUNC_7 (struct ai_order*,int,int,int ) ;
 int FUNC_8 (struct ai_order*,struct policyhead*) ;

__attribute__((used)) static int
FUNC_9(struct addrinfo *VAR_1)
{
 struct addrinfo *VAR_2, **VAR_3;
 struct ai_order *VAR_4;
 int VAR_5, VAR_6;
 struct policyhead VAR_7;


 for (VAR_6 = 0, VAR_2 = VAR_1->ai_next; VAR_2 != ((void*)0); VAR_2 = VAR_2->ai_next, VAR_6++)
  ;




 if (VAR_6 <= 1)
  return(VAR_6);


 if ((VAR_4 = FUNC_1(VAR_6, sizeof(*VAR_4))) == ((void*)0))
  return(VAR_6);


 FUNC_0(&VAR_7);
 if (!FUNC_5(&VAR_7)) {

  FUNC_2(VAR_4);
  return (VAR_6);
 }

 for (VAR_5 = 0, VAR_2 = VAR_1->ai_next; VAR_5 < VAR_6; VAR_2 = VAR_2->ai_next, VAR_5++) {
  VAR_4[VAR_5].aio_ai = VAR_2;
  VAR_4[VAR_5].aio_dstscope = FUNC_4(VAR_2->ai_addr);
  VAR_4[VAR_5].aio_dstpolicy = FUNC_6(VAR_2->ai_addr,
             &VAR_7);
  FUNC_8(&VAR_4[VAR_5], &VAR_7);
  VAR_4[VAR_5].aio_initial_sequence = VAR_5;
 }


 FUNC_7(VAR_4, VAR_6, sizeof(*VAR_4), VAR_0);


 for (VAR_5 = 0, VAR_3 = &VAR_1->ai_next; VAR_5 < VAR_6; VAR_5++) {
  *VAR_3 = VAR_4[VAR_5].aio_ai;
  VAR_3 = &VAR_4[VAR_5].aio_ai->ai_next;
 }
 *VAR_3 = ((void*)0);


 FUNC_2(VAR_4);
 FUNC_3(&VAR_7);
 return(VAR_6);
}
