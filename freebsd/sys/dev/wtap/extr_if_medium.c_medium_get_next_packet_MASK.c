
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtap_medium {int md_mtx; int md_pktbuf; } ;
struct packet {int dummy; } ;


 struct packet* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

struct packet *
FUNC_4(struct wtap_medium *VAR_1)
{
 struct packet *VAR_2;

 FUNC_2(&VAR_1->md_mtx);
 VAR_2 = FUNC_0(&VAR_1->md_pktbuf);
 if (VAR_2 == ((void*)0)){
  FUNC_3(&VAR_1->md_mtx);
  return ((void*)0);
 }

 FUNC_1(&VAR_1->md_pktbuf, VAR_0);
 FUNC_3(&VAR_1->md_mtx);
 return VAR_2;
}
