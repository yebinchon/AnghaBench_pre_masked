
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpi_buf {int size; int ac; int code; int data; } ;
struct wpi_vap {struct wpi_buf wv_bcbuf; } ;
struct wpi_cmd_beacon {int ofdm_mask; int cck_mask; void* flags; void* lifetime; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct wpi_vap *VAR_6)
{
 struct wpi_buf *VAR_7 = &VAR_6->wv_bcbuf;
 struct wpi_cmd_beacon *VAR_8 = (struct wpi_cmd_beacon *)&VAR_7->data;

 VAR_8->id = VAR_2;
 VAR_8->ofdm_mask = 0xff;
 VAR_8->cck_mask = 0x0f;
 VAR_8->lifetime = FUNC_0(VAR_3);





 VAR_8->flags = FUNC_0(VAR_5 | VAR_4);

 VAR_7->code = VAR_1;
 VAR_7->ac = VAR_0;
 VAR_7->size = sizeof(struct wpi_cmd_beacon);
}
