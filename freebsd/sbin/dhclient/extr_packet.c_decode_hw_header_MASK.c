
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hardware {int hlen; int htype; struct ether_header* haddr; } ;
struct ether_header {unsigned char* ether_shost; } ;
typedef int ssize_t ;
typedef int eh ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ether_header*,unsigned char*,int) ;

ssize_t
FUNC_1(unsigned char *VAR_2, int VAR_3, struct hardware *VAR_4)
{
 struct ether_header VAR_5;

 FUNC_0(&VAR_5, VAR_2 + VAR_3, VAR_1);

 FUNC_0(VAR_4->haddr, VAR_5.ether_shost, sizeof(VAR_5.ether_shost));
 VAR_4->htype = VAR_0;
 VAR_4->hlen = sizeof(VAR_5.ether_shost);

 return (sizeof(VAR_5));
}
