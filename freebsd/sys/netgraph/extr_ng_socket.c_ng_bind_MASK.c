
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ng {int sg_len; char* sg_data; } ;
struct sockaddr {int dummy; } ;
struct ngsock {int node; } ;
struct ngpcb {struct ngsock* sockdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct sockaddr *VAR_3, struct ngpcb *VAR_4)
{
 struct ngsock *const VAR_5 = VAR_4->sockdata;
 struct sockaddr_ng *const VAR_6 = (struct sockaddr_ng *) VAR_3;

 if (VAR_5 == ((void*)0)) {
  VAR_2;
  return (VAR_0);
 }
 if ((VAR_6->sg_len < 4) || (VAR_6->sg_len > (VAR_1 + 2)) ||
     (VAR_6->sg_data[0] == '\0') ||
     (VAR_6->sg_data[VAR_6->sg_len - 3] != '\0')) {
  VAR_2;
  return (VAR_0);
 }
 return (FUNC_0(VAR_5->node, VAR_6->sg_data));
}
