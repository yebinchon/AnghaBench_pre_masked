
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int txt ;
struct sockaddr_in {int sin_port; } ;
struct query_info {int qclass; int qtype; int qname; } ;
struct local_zone {int type; int name; } ;
struct comm_reply {int addrlen; int addr; } ;
typedef int ip ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,char*,char*,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_6(struct local_zone* VAR_1, struct query_info* VAR_2,
 struct comm_reply* VAR_3)
{
 char VAR_4[128], VAR_5[512];
 char VAR_6[VAR_0+1];
 uint16_t VAR_7 = FUNC_4(((struct sockaddr_in*)&VAR_3->addr)->sin_port);
 FUNC_1(VAR_1->name, VAR_6);
 FUNC_0(&VAR_3->addr, VAR_3->addrlen, VAR_4, sizeof(VAR_4));
 FUNC_5(VAR_5, sizeof(VAR_5), "%s %s %s@%u", VAR_6, FUNC_2(VAR_1->type), VAR_4,
  (unsigned)VAR_7);
 FUNC_3(0, VAR_5, VAR_2->qname, VAR_2->qtype, VAR_2->qclass);
}
