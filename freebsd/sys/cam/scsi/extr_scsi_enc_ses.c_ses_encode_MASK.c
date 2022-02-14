
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct ses_iterator {int global_element_index; int type_index; } ;
struct ses_control_page_hdr {int control_flags; } ;
struct ses_comstat {int dummy; } ;
struct TYPE_10__ {int comstatus; int * comstat; } ;
struct TYPE_8__ {int elm_idx; TYPE_6__ elm_stat; } ;
typedef TYPE_1__ ses_control_request_t ;
struct TYPE_9__ {int enc_cache; } ;
typedef TYPE_2__ enc_softc_t ;
typedef int enc_element_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_6__*,int) ;
 int FUNC_2 (TYPE_2__*,int *,struct ses_iterator*) ;
 int * FUNC_3 (struct ses_iterator*,int,int ) ;

__attribute__((used)) static int
FUNC_4(enc_softc_t *VAR_4, uint8_t *VAR_5, int VAR_6, ses_control_request_t *VAR_7)
{
 struct ses_iterator VAR_8;
 enc_element_t *VAR_9;
 int VAR_10;
 struct ses_control_page_hdr *VAR_11;

 FUNC_2(VAR_4, &VAR_4->enc_cache, &VAR_8);
 VAR_11 = (struct ses_control_page_hdr *)VAR_5;
 if (VAR_7->elm_idx == -1) {

  if (VAR_6 < 2)
   return VAR_0;
  VAR_11->control_flags =
      VAR_7->elm_stat.comstatus & VAR_3;
  FUNC_0(VAR_4, "Set EncStat %x\n", VAR_11->control_flags);
  return (0);
 }

 VAR_9 = FUNC_3(&VAR_8, VAR_7->elm_idx, VAR_2);
 if (VAR_9 == ((void*)0))
  return (VAR_1);





 VAR_10 = sizeof(struct ses_control_page_hdr)
        + (VAR_8.global_element_index * sizeof(struct ses_comstat));


 if (VAR_10 + sizeof(struct ses_comstat) > VAR_6)
  return (VAR_0);


 FUNC_1(&VAR_5[VAR_10], &VAR_7->elm_stat, sizeof(struct ses_comstat));

 FUNC_0(VAR_4, "Set Type 0x%x Obj 0x%x (offset %d) with %x %x %x %x\n",
     VAR_8.type_index, VAR_8.global_element_index, VAR_10,
     VAR_7->elm_stat.comstatus, VAR_7->elm_stat.comstat[0],
     VAR_7->elm_stat.comstat[1], VAR_7->elm_stat.comstat[2]);

 return (0);
}
