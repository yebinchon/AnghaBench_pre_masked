
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {int nr; int cr3; } ;
struct TYPE_4__ {TYPE_1__ pip; } ;
struct pt_packet {TYPE_2__ payload; int type; } ;
struct pt_encoder {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_encoder*,struct pt_packet*) ;
 int VAR_1 ;

int FUNC_1(struct pt_encoder *VAR_2, uint64_t VAR_3, uint8_t VAR_4)
{
 struct pt_packet VAR_5;

 VAR_5.type = VAR_0;
 VAR_5.payload.pip.cr3 = VAR_3;
 VAR_5.payload.pip.nr = (VAR_4 & VAR_1) != 0;

 return FUNC_0(VAR_2, &VAR_5);
}
