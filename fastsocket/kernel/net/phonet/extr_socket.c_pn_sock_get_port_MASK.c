
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_pn {int spn_family; } ;
struct sock {int dummy; } ;
struct pn_sock {int sobject; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr_pn*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int ) ;
 struct sock* FUNC_5 (struct net*,struct sockaddr_pn*) ;
 int FUNC_6 (int ,unsigned short) ;
 struct pn_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sockaddr_pn*,unsigned short) ;
 int VAR_2 ;
 struct net* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;

int FUNC_11(struct sock *VAR_3, unsigned short VAR_4)
{
 static int VAR_5;
 struct net *VAR_6 = FUNC_9(VAR_3);
 struct pn_sock *VAR_7 = FUNC_7(VAR_3);
 struct sockaddr_pn VAR_8;
 struct sock *VAR_9;

 FUNC_1(&VAR_8, 0, sizeof(struct sockaddr_pn));
 VAR_8.spn_family = VAR_0;
 FUNC_0(!FUNC_2(&VAR_2));
 if (!VAR_4) {

  int VAR_10, VAR_11, VAR_12;

  FUNC_3(&VAR_11, &VAR_12);
  for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {
   VAR_5++;
   if (VAR_5 < VAR_11 || VAR_5 > VAR_12)
    VAR_5 = VAR_11;

   FUNC_8(&VAR_8, VAR_5);
   VAR_9 = FUNC_5(VAR_6, &VAR_8);
   if (VAR_9 == ((void*)0)) {
    VAR_4 = VAR_5;
    goto found;
   } else
    FUNC_10(VAR_9);
  }
 } else {

  FUNC_8(&VAR_8, VAR_4);
  VAR_9 = FUNC_5(VAR_6, &VAR_8);
  if (VAR_9 == ((void*)0))

   goto found;
  else
   FUNC_10(VAR_9);
 }

 return -VAR_1;

found:
 VAR_7->sobject = FUNC_6(FUNC_4(VAR_7->sobject), VAR_4);
 return 0;
}
