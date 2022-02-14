
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct dc_softc {struct dc_mediainfo* dc_mi; } ;
struct dc_mediainfo {int dc_media; int* dc_reset_ptr; int dc_reset_len; int* dc_gp_ptr; int dc_gp_len; struct dc_mediainfo* dc_next; } ;


 int FUNC_0 (struct dc_softc*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct dc_softc *VAR_1, int VAR_2)
{
 struct dc_mediainfo *VAR_3;
 uint8_t *VAR_4;
 int VAR_5;
 uint32_t VAR_6;

 VAR_3 = VAR_1->dc_mi;

 while (VAR_3 != ((void*)0)) {
  if (VAR_3->dc_media == VAR_2)
   break;
  VAR_3 = VAR_3->dc_next;
 }

 if (VAR_3 == ((void*)0))
  return;

 for (VAR_5 = 0, VAR_4 = VAR_3->dc_reset_ptr; VAR_5 < VAR_3->dc_reset_len; VAR_5++, VAR_4 += 2) {
  VAR_6 = (VAR_4[0] | (VAR_4[1] << 8)) << 16;
  FUNC_0(VAR_1, VAR_0, VAR_6);
 }

 for (VAR_5 = 0, VAR_4 = VAR_3->dc_gp_ptr; VAR_5 < VAR_3->dc_gp_len; VAR_5++, VAR_4 += 2) {
  VAR_6 = (VAR_4[0] | (VAR_4[1] << 8)) << 16;
  FUNC_0(VAR_1, VAR_0, VAR_6);
 }
}
