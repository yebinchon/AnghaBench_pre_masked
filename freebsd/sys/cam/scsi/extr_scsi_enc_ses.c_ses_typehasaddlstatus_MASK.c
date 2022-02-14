
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_9__ {TYPE_2__* ses_types; } ;
typedef TYPE_3__ ses_cache_t ;
typedef int ses_addlstatus_avail_t ;
struct TYPE_11__ {TYPE_3__* private; } ;
struct TYPE_10__ {TYPE_5__ enc_daemon_cache; } ;
typedef TYPE_4__ enc_softc_t ;
typedef TYPE_5__ enc_cache_t ;
struct TYPE_8__ {TYPE_1__* hdr; } ;
struct TYPE_7__ {int etype_elm_type; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ses_addlstatus_avail_t
FUNC_0(enc_softc_t *VAR_3, uint8_t VAR_4)
{
 enc_cache_t *VAR_5;
 ses_cache_t *VAR_6;

 VAR_5 = &VAR_3->enc_daemon_cache;
 VAR_6 = VAR_5->private;
 switch(VAR_6->ses_types[VAR_4].hdr->etype_elm_type) {
 case 132:
 case 133:
 case 130:
  return (VAR_0);
 case 129:
 case 128:
 case 131:
  return (VAR_2);
 default:

  break;
 }
 return (VAR_1);
}
