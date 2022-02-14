
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iso_directory_record {int dummy; } ;
struct TYPE_3__ {int length; } ;
struct TYPE_4__ {int* flags; TYPE_1__ h; } ;
typedef TYPE_2__ ISO_RRIP_ALTNAME ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct iso_directory_record*,int) ;

__attribute__((used)) static const char *
FUNC_2(struct iso_directory_record *VAR_1, int VAR_2, size_t *VAR_3)
{
 ISO_RRIP_ALTNAME *VAR_4;

 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_4 = (ISO_RRIP_ALTNAME *)FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 switch (*VAR_4->flags) {
 case 129:
  *VAR_3 = 1;
  return (".");
 case 128:
  *VAR_3 = 2;
  return ("..");
 case 0:
  *VAR_3 = FUNC_0(VAR_4->h.length) - 5;
  return ((char *)VAR_4 + 5);
 default:




  return (((void*)0));
 }
}
