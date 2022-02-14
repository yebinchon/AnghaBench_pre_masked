
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union sctp_params {TYPE_2__* ext; TYPE_1__* p; } ;
typedef int sctp_paramhdr_t ;
typedef int __u16 ;
struct TYPE_4__ {int* chunks; } ;
struct TYPE_3__ {int length; } ;





 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(union sctp_params VAR_2)
{
 __u16 VAR_3 = FUNC_0(VAR_2.p->length) - sizeof(sctp_paramhdr_t);
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  switch (VAR_2.ext->chunks[VAR_6]) {
      case 128:
       VAR_4 = 1;
       break;
      case 130:
      case 129:
       VAR_5 = 1;
       break;
  }
 }






 if (VAR_1)
  return 1;

 if (VAR_0 && !VAR_4 && VAR_5)
  return 0;

 return 1;
}
