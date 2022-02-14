
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qual {int proto; int dir; int addr; } ;
struct block {int dummy; } ;
typedef int compiler_state_t ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*,...) ;
 struct block* FUNC_4 (int *,int,int,int,int,int) ;
 int FUNC_5 (int ,struct block*) ;
 struct block* FUNC_6 (int *,int,int,int) ;
 int FUNC_7 (int *,int,int,int) ;
 struct block* FUNC_8 (int *,int,int,int,int) ;
 int FUNC_9 (int *,int,int,int,int) ;
 struct block* FUNC_10 (int *,int,int,int) ;
 struct block* FUNC_11 (int *,int,int,int) ;
 int FUNC_12 (int *) ;

struct block *
FUNC_13(compiler_state_t *VAR_9, const char *VAR_10, bpf_u_int32 VAR_11, struct qual VAR_12)
{
 bpf_u_int32 VAR_13;
 int VAR_14 = VAR_12.proto;
 int VAR_15 = VAR_12.dir;
 register int VAR_16;

 if (VAR_10 == ((void*)0))
  VAR_16 = 32;
 else if (VAR_12.proto == VAR_4) {
  VAR_16 = FUNC_0(VAR_10, &VAR_11);
  if (VAR_16 == 0)
   FUNC_3(VAR_9, "malformed decnet address '%s'", VAR_10);
 } else
  VAR_16 = FUNC_1(VAR_10, &VAR_11);

 switch (VAR_12.addr) {

 case 136:
 case 134:
 case 133:
  if (VAR_14 == VAR_4)
   return FUNC_4(VAR_9, VAR_11, 0, VAR_14, VAR_15, VAR_12.addr);
  else if (VAR_14 == VAR_5) {
   FUNC_3(VAR_9, "illegal link layer address");
  } else {
   VAR_13 = 0xffffffff;
   if (VAR_10 == ((void*)0) && VAR_12.addr == 133) {

    while (VAR_11 && (VAR_11 & 0xff000000) == 0) {
     VAR_11 <<= 8;
     VAR_13 <<= 8;
    }
   } else {

    VAR_11 <<= 32 - VAR_16;
    VAR_13 <<= 32 - VAR_16 ;
   }
   return FUNC_4(VAR_9, VAR_11, VAR_13, VAR_14, VAR_15, VAR_12.addr);
  }

 case 132:
  if (VAR_14 == VAR_8)
   VAR_14 = VAR_2;
  else if (VAR_14 == VAR_7)
   VAR_14 = VAR_1;
  else if (VAR_14 == VAR_6)
   VAR_14 = VAR_0;
  else if (VAR_14 == 136)
   VAR_14 = VAR_3;
  else
   FUNC_3(VAR_9, "illegal qualifier of 'port'");

  if (VAR_11 > 65535)
   FUNC_3(VAR_9, "illegal port number %u > 65535", VAR_11);

     {
  struct block *VAR_17;
  VAR_17 = FUNC_6(VAR_9, (int)VAR_11, VAR_14, VAR_15);
  FUNC_5(FUNC_7(VAR_9, (int)VAR_11, VAR_14, VAR_15), VAR_17);
  return VAR_17;
     }

 case 131:
  if (VAR_14 == VAR_8)
   VAR_14 = VAR_2;
  else if (VAR_14 == VAR_7)
   VAR_14 = VAR_1;
  else if (VAR_14 == VAR_6)
   VAR_14 = VAR_0;
  else if (VAR_14 == 136)
   VAR_14 = VAR_3;
  else
   FUNC_3(VAR_9, "illegal qualifier of 'portrange'");

  if (VAR_11 > 65535)
   FUNC_3(VAR_9, "illegal port number %u > 65535", VAR_11);

     {
  struct block *VAR_18;
  VAR_18 = FUNC_8(VAR_9, (int)VAR_11, (int)VAR_11, VAR_14, VAR_15);
  FUNC_5(FUNC_9(VAR_9, (int)VAR_11, (int)VAR_11, VAR_14, VAR_15), VAR_18);
  return VAR_18;
     }

 case 135:
  FUNC_3(VAR_9, "'gateway' requires a name");


 case 130:
  return FUNC_10(VAR_9, (int)VAR_11, VAR_14, VAR_15);

 case 129:
  return FUNC_11(VAR_9, (int)VAR_11, VAR_14, VAR_15);

 case 128:
  FUNC_12(VAR_9);


 default:
  FUNC_2();

 }

}
