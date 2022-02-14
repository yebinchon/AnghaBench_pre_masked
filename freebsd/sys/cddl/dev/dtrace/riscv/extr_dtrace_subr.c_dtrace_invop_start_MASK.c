
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct trapframe {int tf_ra; int tf_sepc; scalar_t__ tf_sp; } ;
typedef int register_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,struct trapframe*,int ) ;
 scalar_t__ FUNC_1 (int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct trapframe *VAR_21)
{
 register_t *VAR_22;
 uint32_t VAR_23;
 uint32_t VAR_24;
 int VAR_25;

 VAR_25 = FUNC_0(VAR_21->tf_sepc, VAR_21, VAR_21->tf_sepc);

 if (FUNC_1(VAR_25, (VAR_10 | VAR_19 | VAR_15),
     (VAR_6 | VAR_18 | VAR_13))) {

  VAR_24 = (VAR_25 >> 7) & 0x1f;
  VAR_24 |= ((VAR_25 >> 25) & 0x7f) << 5;
  VAR_22 = (register_t *)((uint8_t *)VAR_21->tf_sp + VAR_24);
  *VAR_22 = VAR_21->tf_ra;
  VAR_21->tf_sepc += VAR_2;
  return (0);
 }

 if (FUNC_1(VAR_25, (VAR_9 | (VAR_20 << VAR_14)),
     (VAR_5 | VAR_11 | VAR_13 | VAR_0))) {

  VAR_21->tf_sepc = VAR_21->tf_ra;
  return (0);
 }

 if (FUNC_1(VAR_25, (VAR_8 | VAR_17),
     (VAR_4 | VAR_16))) {

  VAR_23 = ((VAR_25 >> 10) & 0x7) << 3;
  VAR_23 |= ((VAR_25 >> 7) & 0x7) << 6;
  VAR_22 = (register_t *)((uint8_t *)VAR_21->tf_sp + VAR_23);
  *VAR_22 = VAR_21->tf_ra;
  VAR_21->tf_sepc += VAR_1;
  return (0);
 }

 if (FUNC_1(VAR_25, (VAR_7 | (VAR_20 << VAR_12)),
     (VAR_3 | VAR_11))) {

  VAR_21->tf_sepc = VAR_21->tf_ra;
  return (0);
 }

 return (-1);
}
