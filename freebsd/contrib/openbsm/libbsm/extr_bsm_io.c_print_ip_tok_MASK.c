
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int dest; int src; int chksm; int prot; int ttl; int offset; int id; int len; int tos; int version; } ;
struct TYPE_6__ {TYPE_1__ ip; } ;
struct TYPE_7__ {TYPE_2__ tt; int id; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int ,char*,int) ;

__attribute__((used)) static void
FUNC_9(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{

 FUNC_8(VAR_1, VAR_2->id, "ip", VAR_4);
 if (VAR_4 & VAR_0) {
  FUNC_3(VAR_1, "version");
  FUNC_7(VAR_1, (u_char *)(&VAR_2->tt.ip.version),
      sizeof(u_char));
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "service_type");
  FUNC_7(VAR_1, (u_char *)(&VAR_2->tt.ip.tos), sizeof(u_char));
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "len");
  FUNC_4(VAR_1, FUNC_2(VAR_2->tt.ip.len), "%u");
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "id");
  FUNC_4(VAR_1, FUNC_2(VAR_2->tt.ip.id), "%u");
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "offset");
  FUNC_4(VAR_1, FUNC_2(VAR_2->tt.ip.offset), "%u");
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "time_to_live");
  FUNC_7(VAR_1, (u_char *)(&VAR_2->tt.ip.ttl), sizeof(u_char));
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "protocol");
  FUNC_7(VAR_1, (u_char *)(&VAR_2->tt.ip.prot), sizeof(u_char));
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "cksum");
  FUNC_4(VAR_1, FUNC_2(VAR_2->tt.ip.chksm), "%u");
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "src_addr");
  FUNC_6(VAR_1, VAR_2->tt.ip.src);
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "dest_addr");
  FUNC_6(VAR_1, VAR_2->tt.ip.dest);
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_2->id);
 } else {
  FUNC_5(VAR_1, VAR_3);
  FUNC_7(VAR_1, (u_char *)(&VAR_2->tt.ip.version),
      sizeof(u_char));
  FUNC_5(VAR_1, VAR_3);
  FUNC_7(VAR_1, (u_char *)(&VAR_2->tt.ip.tos), sizeof(u_char));
  FUNC_5(VAR_1, VAR_3);
  FUNC_4(VAR_1, FUNC_2(VAR_2->tt.ip.len), "%u");
  FUNC_5(VAR_1, VAR_3);
  FUNC_4(VAR_1, FUNC_2(VAR_2->tt.ip.id), "%u");
  FUNC_5(VAR_1, VAR_3);
  FUNC_4(VAR_1, FUNC_2(VAR_2->tt.ip.offset), "%u");
  FUNC_5(VAR_1, VAR_3);
  FUNC_7(VAR_1, (u_char *)(&VAR_2->tt.ip.ttl), sizeof(u_char));
  FUNC_5(VAR_1, VAR_3);
  FUNC_7(VAR_1, (u_char *)(&VAR_2->tt.ip.prot), sizeof(u_char));
  FUNC_5(VAR_1, VAR_3);
  FUNC_4(VAR_1, FUNC_2(VAR_2->tt.ip.chksm), "%u");
  FUNC_5(VAR_1, VAR_3);
  FUNC_6(VAR_1, VAR_2->tt.ip.src);
  FUNC_5(VAR_1, VAR_3);
  FUNC_6(VAR_1, VAR_2->tt.ip.dest);
 }
}
