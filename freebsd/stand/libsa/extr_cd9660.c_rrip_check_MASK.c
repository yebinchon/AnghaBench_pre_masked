
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct open_file {int dummy; } ;
struct iso_directory_record {char* name; int length; int name_len; } ;
struct TYPE_3__ {int length; int type; } ;
struct TYPE_4__ {int* signature; int len_skp; TYPE_1__ h; } ;
typedef TYPE_2__ ISO_SUSP_PRESENT ;
typedef int ISO_RRIP_EXTREF ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct open_file*,int ,struct iso_directory_record*,int ) ;

__attribute__((used)) static int
FUNC_3(struct open_file *VAR_2, struct iso_directory_record *VAR_3, int *VAR_4)
{
 ISO_SUSP_PRESENT *VAR_5;
 ISO_RRIP_EXTREF *VAR_6;
 char *VAR_7;


 VAR_7 = VAR_3->name + FUNC_1(VAR_3->name_len);
 if (VAR_7 > (char *)VAR_3 + FUNC_1(VAR_3->length))
  return (0);
 VAR_5 = (ISO_SUSP_PRESENT *)VAR_7;
 if (FUNC_0(VAR_5->h.type, VAR_1, 2) != 0)
  return (0);
 if (FUNC_1(VAR_5->h.length) != sizeof(ISO_SUSP_PRESENT))
  return (0);
 if (VAR_5->signature[0] != 0xbe || VAR_5->signature[1] != 0xef)
  return (0);
 *VAR_4 = FUNC_1(VAR_5->len_skp);






 VAR_6 = (ISO_RRIP_EXTREF *)FUNC_2(VAR_2, VAR_0, VAR_3, 0);
 if (VAR_6 == ((void*)0))
  return (0);
 return (1);
}
