
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct lane_controlhdr {int lec_opcode; int lec_vers; int lec_proto; int lec_header; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int,int,int ,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int) ;

void
FUNC_4(netdissect_options *VAR_2, const u_char *VAR_3, u_int VAR_4, u_int VAR_5)
{
 const struct lane_controlhdr *VAR_6;

 if (VAR_5 < sizeof(struct lane_controlhdr)) {
  FUNC_1((VAR_2, "[|lane]"));
  return;
 }

 VAR_6 = (const struct lane_controlhdr *)VAR_3;
 if (FUNC_0(&VAR_6->lec_header) == 0xff00) {



  FUNC_1((VAR_2, "lec: proto %x vers %x %s",
      VAR_6->lec_proto, VAR_6->lec_vers,
      FUNC_3(VAR_1, "opcode-#%u", FUNC_0(&VAR_6->lec_opcode))));
  return;
 }




 VAR_4 -= 2;
 VAR_5 -= 2;
 VAR_3 += 2;





 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_0, VAR_3 - 2);
}
