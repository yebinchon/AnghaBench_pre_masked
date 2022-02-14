
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iso_directory_record {char* name; int length; int name_len; } ;
struct TYPE_3__ {int length; int type; } ;
struct TYPE_4__ {int* signature; int len_skp; TYPE_1__ h; } ;
typedef TYPE_2__ ISO_SUSP_PRESENT ;
typedef int ISO_RRIP_EXTREF ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct iso_directory_record*,int ) ;

__attribute__((used)) static int
FUNC_3(struct iso_directory_record *VAR_2, int *VAR_3)
{
 ISO_SUSP_PRESENT *VAR_4;
 ISO_RRIP_EXTREF *VAR_5;
 char *VAR_6;


 VAR_6 = VAR_2->name + FUNC_1(VAR_2->name_len);
 if (VAR_6 > (char *)VAR_2 + FUNC_1(VAR_2->length)) {
  return (0);
 }
 VAR_4 = (ISO_SUSP_PRESENT *)VAR_6;
 if (FUNC_0(VAR_4->h.type, VAR_1, 2) != 0) {
  return (0);
 }
 if (FUNC_1(VAR_4->h.length) != sizeof(ISO_SUSP_PRESENT)) {
  return (0);
 }
 if (VAR_4->signature[0] != 0xbe || VAR_4->signature[1] != 0xef) {
  return (0);
 }
 *VAR_3 = FUNC_1(VAR_4->len_skp);






 VAR_5 = (ISO_RRIP_EXTREF *)FUNC_2(VAR_0, VAR_2, 0);
 if (VAR_5 == ((void*)0)) {
  return (0);
 }
 return (1);
}
