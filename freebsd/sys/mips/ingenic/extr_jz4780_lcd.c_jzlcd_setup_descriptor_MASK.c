
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct videomode {int hdisplay; int vdisplay; } ;
struct lcd_frame_descriptor {int id; int cmd; int cnum_pos; int dessize; scalar_t__ pw; scalar_t__ offs; int physaddr; scalar_t__ next; } ;
struct jzlcd_softc {int paddr; scalar_t__ fdesc_paddr; struct lcd_frame_descriptor* fdesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_0(struct jzlcd_softc *VAR_9, const struct videomode *VAR_10,
    u_int VAR_11)
{
 struct lcd_frame_descriptor *VAR_12;
 int VAR_13;


 VAR_13 = (VAR_10->hdisplay * VAR_0) >> 3;
 VAR_13 = ((VAR_13 + 3) & ~3) / 4;

 VAR_12 = VAR_9->fdesc + VAR_11;

 if (VAR_11 == 0)
  VAR_12->next = VAR_9->fdesc_paddr +
      sizeof(struct lcd_frame_descriptor);
 else
  VAR_12->next = VAR_9->fdesc_paddr;
 VAR_12->physaddr = VAR_9->paddr;
 VAR_12->id = VAR_11;
 VAR_12->cmd = VAR_1 | (VAR_13 * VAR_10->vdisplay);
 VAR_12->offs = 0;
 VAR_12->pw = 0;
 VAR_12->cnum_pos = VAR_5 |
     VAR_8 |
     (VAR_11 == 0 ? VAR_6 : VAR_7);
 VAR_12->dessize = VAR_2 |
     ((VAR_10->vdisplay - 1) << VAR_3) |
     ((VAR_10->hdisplay - 1) << VAR_4);
}
