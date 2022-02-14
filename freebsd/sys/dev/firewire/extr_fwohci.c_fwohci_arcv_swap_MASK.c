
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int tcode; } ;
struct TYPE_5__ {void** ld; TYPE_1__ common; } ;
struct fw_pkt {TYPE_2__ mode; } ;
struct TYPE_6__ {int hdr_len; } ;



 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct fw_pkt *VAR_2, int VAR_3)
{
 struct fw_pkt *VAR_4;
 uint32_t VAR_5;
 int VAR_6, VAR_7;

 int VAR_8;


 VAR_5 = FUNC_0(VAR_2->mode.ld[0]);



 VAR_4 = (struct fw_pkt *)&VAR_5;

 switch (VAR_4->mode.common.tcode) {
 case 133:
 case 128:
 case 129:
 case 131:
 case 137:
  VAR_6 = 12;
  break;
 case 134:
 case 130:
 case 136:
 case 132:
 case 135:
  VAR_6 = 16;
  break;
 default:
  FUNC_1("Unknown tcode %d\n", VAR_4->mode.common.tcode);
  return (0);
 }
 VAR_7 = VAR_1[VAR_4->mode.common.tcode].hdr_len;
 if (VAR_7 > VAR_3) {
  if (VAR_0)
   FUNC_1("splitted header\n");
  return (-VAR_7);
 }

 for (VAR_8 = 0; VAR_8 < VAR_6/4; VAR_8++)
  VAR_2->mode.ld[VAR_8] = FUNC_0(VAR_2->mode.ld[VAR_8]);

 return (VAR_7);
}
