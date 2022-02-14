
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qual {int addr; int dir; int proto; } ;
struct block {int dummy; } ;
typedef int compiler_state_t ;
typedef int bpf_u_int32 ;



 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (int *,char*,...) ;
 struct block* FUNC_2 (int *,int,int,int ,int ,int) ;

struct block *
FUNC_3(compiler_state_t *VAR_0, const char *VAR_1, const char *VAR_2,
    unsigned int VAR_3, struct qual VAR_4)
{
 register int VAR_5, VAR_6;
 bpf_u_int32 VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_1, &VAR_7);

 VAR_7 <<= 32 - VAR_5;

 if (VAR_2 != ((void*)0)) {
  VAR_6 = FUNC_0(VAR_2, &VAR_8);

  VAR_8 <<= 32 - VAR_6;
  if ((VAR_7 & ~VAR_8) != 0)
   FUNC_1(VAR_0, "non-network bits set in \"%s mask %s\"",
       VAR_1, VAR_2);
 } else {

  if (VAR_3 > 32)
   FUNC_1(VAR_0, "mask length must be <= 32");
  if (VAR_3 == 0) {




   VAR_8 = 0;
  } else
   VAR_8 = 0xffffffff << (32 - VAR_3);
  if ((VAR_7 & ~VAR_8) != 0)
   FUNC_1(VAR_0, "non-network bits set in \"%s/%d\"",
       VAR_1, VAR_3);
 }

 switch (VAR_4.addr) {

 case 128:
  return FUNC_2(VAR_0, VAR_7, VAR_8, VAR_4.proto, VAR_4.dir, VAR_4.addr);

 default:
  FUNC_1(VAR_0, "Mask syntax for networks only");

 }

}
