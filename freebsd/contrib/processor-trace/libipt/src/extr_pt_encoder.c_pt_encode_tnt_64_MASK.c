
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {int payload; scalar_t__ bit_size; } ;
struct TYPE_4__ {TYPE_1__ tnt; } ;
struct pt_packet {TYPE_2__ payload; int type; } ;
struct pt_encoder {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,struct pt_packet*) ;

int FUNC_1(struct pt_encoder *VAR_1, uint64_t VAR_2, int VAR_3)
{
 struct pt_packet VAR_4;

 VAR_4.type = VAR_0;
 VAR_4.payload.tnt.bit_size = (uint8_t) VAR_3;
 VAR_4.payload.tnt.payload = VAR_2;

 return FUNC_0(VAR_1, &VAR_4);
}
