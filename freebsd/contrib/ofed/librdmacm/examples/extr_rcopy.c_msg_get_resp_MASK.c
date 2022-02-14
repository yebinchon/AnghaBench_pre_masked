
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct msg_hdr {int len; int command; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct msg_hdr*) ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct msg_hdr *VAR_2, uint8_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 != sizeof *VAR_2)
  return VAR_4;

 if ((VAR_2->len != sizeof *VAR_2) || (VAR_2->command != (VAR_3 | VAR_0))) {
  FUNC_1("invalid length %d or bad command response %x:%x\n",
         VAR_2->len, VAR_2->command, VAR_3 | VAR_0);
  return -1;
 }

 return VAR_2->data;
}
