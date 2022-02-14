
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct in_addr {int dummy; } ;
struct pmap_list {int port; void* vers; void* prog; struct in_addr addr; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 struct pmap_list* VAR_1 ;
 size_t VAR_2 ;

void
FUNC_1(struct in_addr VAR_3, u_int VAR_4, u_int VAR_5, int VAR_6)
{
 struct pmap_list *VAR_7;


 if (VAR_2 >= VAR_0) {

  VAR_2 = VAR_0 - 1;



 }

 VAR_7 = &VAR_1[VAR_2];
 VAR_2++;


 VAR_7->addr = VAR_3;
 VAR_7->prog = VAR_4;
 VAR_7->vers = VAR_5;
 VAR_7->port = VAR_6;
}
