
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union ses_elm_sas_hdr {int dummy; } ses_elm_sas_hdr ;
typedef int uint8_t ;
struct TYPE_10__ {TYPE_2__* ses_types; } ;
typedef TYPE_3__ ses_cache_t ;
typedef int enc_softc_t ;
struct TYPE_11__ {TYPE_3__* private; } ;
typedef TYPE_4__ enc_cache_t ;
struct TYPE_9__ {TYPE_1__* hdr; } ;
struct TYPE_8__ {int etype_elm_type; } ;


 int VAR_0 ;






 int FUNC_0 (int *,char*,int,int ,...) ;
 int VAR_1 ;


 int FUNC_1 (union ses_elm_sas_hdr*) ;
 int FUNC_2 (int *,TYPE_4__*,int *,int,int,int) ;
 int FUNC_3 (int *,TYPE_4__*,int *,int,int,int) ;

__attribute__((used)) static int
FUNC_4(enc_softc_t *VAR_2, enc_cache_t *VAR_3,
      uint8_t *VAR_4, int VAR_5, int VAR_6, int VAR_7,
      int VAR_8)
{
 int VAR_9, VAR_10;
 ses_cache_t *VAR_11;
 union ses_elm_sas_hdr *VAR_12;


 if (VAR_5 < sizeof(union ses_elm_sas_hdr)) {
  VAR_10 = VAR_0;
  goto out;
 }

 VAR_11 = VAR_3->private;

 VAR_12 = (union ses_elm_sas_hdr *)VAR_4;
 VAR_9 = FUNC_1(VAR_12);
 switch(VAR_9) {
 case 128:
  switch(VAR_11->ses_types[VAR_7].hdr->etype_elm_type) {
  case 134:
  case 135:
   break;
  default:
   FUNC_0(VAR_2, "Element %d has Additional Status type 0, "
       "invalid for SES element type 0x%x\n", VAR_8,
       VAR_11->ses_types[VAR_7].hdr->etype_elm_type);
   VAR_10 = VAR_1;
   goto out;
  }
  VAR_10 = FUNC_2(VAR_2, VAR_3,
             VAR_4, VAR_5, VAR_6,
      VAR_8);
  break;
 case 129:
  switch(VAR_11->ses_types[VAR_7].hdr->etype_elm_type) {
  case 132:
  case 131:
  case 130:
  case 133:
   break;
  default:
   FUNC_0(VAR_2, "Element %d has Additional Status type 1, "
       "invalid for SES element type 0x%x\n", VAR_8,
       VAR_11->ses_types[VAR_7].hdr->etype_elm_type);
   VAR_10 = VAR_1;
   goto out;
  }
  VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_4,
             VAR_5, VAR_6, VAR_8);
  break;
 default:
  FUNC_0(VAR_2, "Element %d of type 0x%x has Additional Status "
      "of unknown type 0x%x\n", VAR_8,
      VAR_11->ses_types[VAR_7].hdr->etype_elm_type, VAR_9);
  VAR_10 = VAR_1;
  break;
 }

out:
 return (VAR_10);
}
