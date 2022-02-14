
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_rsa_command {int rsatype; int rsaopsize; } ;



__attribute__((used)) static int
FUNC_0(struct xlp_rsa_command *VAR_0, unsigned int VAR_1)
{

 if (VAR_1 == 0 || VAR_1 > 8192)
  return (-1);


 if (VAR_1 <= 512) {
  VAR_0->rsatype = 0x40;
  VAR_0->rsaopsize = 64;
 } else if (VAR_1 <= 1024) {
  VAR_0->rsatype = 0x41;
  VAR_0->rsaopsize = 128;
 } else if (VAR_1 <= 2048) {
  VAR_0->rsatype = 0x42;
  VAR_0->rsaopsize = 256;
 } else if (VAR_1 <= 4096) {
  VAR_0->rsatype = 0x43;
  VAR_0->rsaopsize = 512;
 } else if (VAR_1 <= 8192) {
  VAR_0->rsatype = 0x44;
  VAR_0->rsaopsize = 1024;
 }
 return (0);
}
