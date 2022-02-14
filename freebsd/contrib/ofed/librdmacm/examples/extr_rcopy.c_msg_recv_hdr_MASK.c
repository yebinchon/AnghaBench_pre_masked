
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_hdr {int version; int len; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, struct msg_hdr *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, (char *) VAR_1, sizeof *VAR_1);
 if (VAR_2 != sizeof *VAR_1)
  return -1;

 if (VAR_1->version || VAR_1->len < sizeof *VAR_1) {
  FUNC_1("invalid version %d or length %d\n",
         VAR_1->version, VAR_1->len);
  return -1;
 }

 return sizeof *VAR_1;
}
