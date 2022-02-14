
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int intx; int abrt; } ;
struct TYPE_6__ {TYPE_1__ tsx; } ;
struct TYPE_7__ {TYPE_2__ bits; int leaf; } ;
struct TYPE_8__ {TYPE_3__ mode; } ;
struct pt_packet {TYPE_4__ payload; int type; } ;
struct pt_encoder {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,struct pt_packet*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(struct pt_encoder *VAR_4, uint8_t VAR_5)
{
 struct pt_packet VAR_6;

 VAR_6.type = VAR_0;
 VAR_6.payload.mode.leaf = VAR_3;

 if (VAR_5 & VAR_2)
  VAR_6.payload.mode.bits.tsx.intx = 1;
 else
  VAR_6.payload.mode.bits.tsx.intx = 0;

 if (VAR_5 & VAR_1)
  VAR_6.payload.mode.bits.tsx.abrt = 1;
 else
  VAR_6.payload.mode.bits.tsx.abrt = 0;

 return FUNC_0(VAR_4, &VAR_6);
}
