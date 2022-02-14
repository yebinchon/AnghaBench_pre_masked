
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct ssh {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (struct ssh*,scalar_t__ const*,size_t) ;
 int FUNC_4 (struct ssh*,size_t) ;
 scalar_t__* FUNC_5 (struct ssh*,size_t*) ;
 int FUNC_6 (struct ssh*,scalar_t__*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_7(struct ssh *VAR_1, struct ssh *VAR_2)
{
 u_char VAR_3;
 size_t VAR_4;
 const u_char *VAR_5;
 int VAR_6;

 for (;;) {
  if ((VAR_6 = FUNC_6(VAR_1, &VAR_3)) != 0) {
   FUNC_1(VAR_0, "ssh_packet_next: %s\n", FUNC_2(VAR_6));
   return VAR_6;
  }

  if (VAR_3 != 0)
   return 0;
  VAR_5 = FUNC_5(VAR_1, &VAR_4);
  if (VAR_4 == 0)
   return 0;
  if ((VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_4)) != 0) {
   FUNC_0("ssh_input_append: %s", FUNC_2(VAR_6));
   return VAR_6;
  }
  if ((VAR_6 = FUNC_4(VAR_1, VAR_4)) != 0) {
   FUNC_0("ssh_output_consume: %s", FUNC_2(VAR_6));
   return VAR_6;
  }
 }
}
