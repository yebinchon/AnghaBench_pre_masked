
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct ucode {scalar_t__ revision; int length; int int_delay_offset; int bundle_max_offset; int * ucode; } ;
struct TYPE_2__ {int cbl_addr; scalar_t__ cbl_list; } ;
struct fxp_softc {int flags; scalar_t__ revision; int tunable_int_delay; int tunable_bundle_max; int dev; int cbl_map; int cbl_tag; TYPE_1__ fxp_desc; } ;
struct fxp_cb_ucode {int link_addr; scalar_t__ cb_status; int * ucode; void* cb_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fxp_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct fxp_cb_ucode*,int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct fxp_softc*,scalar_t__*,int ,int ) ;
 int FUNC_5 (struct fxp_softc*,int ) ;
 int FUNC_6 (struct fxp_softc*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 struct ucode* VAR_9 ;

__attribute__((used)) static void
FUNC_9(struct fxp_softc *VAR_10)
{
 const struct ucode *VAR_11;
 struct fxp_cb_ucode *VAR_12;
 int VAR_13;

 if (VAR_10->flags & VAR_5)
  return;

 for (VAR_11 = VAR_9; VAR_11->ucode != ((void*)0); VAR_11++)
  if (VAR_10->revision == VAR_11->revision)
   break;
 if (VAR_11->ucode == ((void*)0))
  return;
 VAR_12 = (struct fxp_cb_ucode *)VAR_10->fxp_desc.cbl_list;
 VAR_12->cb_status = 0;
 VAR_12->cb_command = FUNC_7(VAR_3 | VAR_2);
 VAR_12->link_addr = 0xffffffff;
 for (VAR_13 = 0; VAR_13 < VAR_11->length; VAR_13++)
  VAR_12->ucode[VAR_13] = FUNC_8(VAR_11->ucode[VAR_13]);
 if (VAR_11->int_delay_offset)
  *(uint16_t *)&VAR_12->ucode[VAR_11->int_delay_offset] =
      FUNC_7(VAR_10->tunable_int_delay + VAR_10->tunable_int_delay / 2);
 if (VAR_11->bundle_max_offset)
  *(uint16_t *)&VAR_12->ucode[VAR_11->bundle_max_offset] =
      FUNC_7(VAR_10->tunable_bundle_max);



 FUNC_6(VAR_10);
 FUNC_1(VAR_10->cbl_tag, VAR_10->cbl_map,
     VAR_0 | VAR_1);
 FUNC_0(VAR_10, VAR_4, VAR_10->fxp_desc.cbl_addr);
 FUNC_5(VAR_10, VAR_7);

 FUNC_4(VAR_10, &VAR_12->cb_status, VAR_10->cbl_tag, VAR_10->cbl_map);
 FUNC_3(VAR_10->dev,
     "Microcode loaded, int_delay: %d usec  bundle_max: %d\n",
     VAR_10->tunable_int_delay,
     VAR_11->bundle_max_offset == 0 ? 0 : VAR_10->tunable_bundle_max);
 VAR_10->flags |= VAR_6;
 FUNC_2(VAR_12, VAR_8);
}
